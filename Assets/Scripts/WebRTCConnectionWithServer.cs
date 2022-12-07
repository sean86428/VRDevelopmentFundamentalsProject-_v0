using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Android;
using Unity.WebRTC;

using NativeWebSocket;
using TMPro;
using UnityEngine.UI;

public class WebRTCConnectionWithServer : MonoBehaviour
{
    public string friend_url;
    public Text MessageBoard;
    public TMP_Text StatusBoard;
    public TMP_Text TMP_url;
    string newBackstageItemID1 ;
    string newBackstageItemID2 ;
    [System.Serializable] 
    public class OnmessageObject
    {
        public string type;
        public string data;
    }

    [System.Serializable]
    public class CallReceivedMessageObject
    {
        public string type;
        public CallReceivedData data;
    }

    [System.Serializable]
    public class CallReceivedData
    {
        public string caller;
        public CallReceivedRtcMessage rtcMessage;
    }

    [System.Serializable]
    public class CallReceivedRtcMessage
    {
        public string sdp;
        public string type;
    }

    [System.Serializable]
    public class ICEcandidateMessageObject
    {
        public string type;
        public ICEcandidateData data;
    }

    [System.Serializable]
    public class ICEcandidateData
    {
        public ICEcandidateRtcMessage rtcMessage;
    }

    [System.Serializable]
    public class ICEcandidateRtcMessage
    {
        public string label;
        public string id;
        public string candidate;
    }

    [System.Serializable]
    public class MessageMessageObject
    {
        public string type;
        public MessageData data;
    }

    [System.Serializable]
    public class MessageData
    {
        public string message;
    }

    public AudioSource gameMusicAudioSource, microphoneAudioSource, remoteAudioSource;

    public WebSocket websocket = null;
    public RTCPeerConnection peerConnection = null;
    private DelegateOnIceCandidate onIceCandidate;
    private bool webrtcUpdateStarted = false;
    List<string> messageList = new List<string>();

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("WebRTCConnection.Start");
        // Initialize WebRTC
        // WebRTC.Initialize();

/*      
        // start / stop connection 3 times
        ConnectionStart();
        ConnectionStop();
        ConnectionStart();
        ConnectionStop();
        ConnectionStart();
        ConnectionStop();
        ConnectionStart();
*/
    }


    async public void ConnectionStart() {
        TMP_url.text="客服人員忙線中，請稍等...";
        friend_url="https://metaverse.venraas.tw:7654/friend/";
        // newBackstageItemID1="00000";
        // newBackstageItemID2="11111";
        

        // check if connection is existed.
        if (peerConnection!= null)
            return;
        
        WebRTC.Initialize();
        newBackstageItemID1 = System.Guid.NewGuid().ToString();
        newBackstageItemID2 = System.Guid.NewGuid().ToString();
        newBackstageItemID1 = newBackstageItemID1.Substring(0,3);
        newBackstageItemID2 = "service";
        //TMP_url.text="https://meta.crazycurly.tk/friend/"+newBackstageItemID2+"_"+newBackstageItemID1;
        RTCConfiguration configuration = default;
        configuration.iceServers = new[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } };
        // Create peer connection
        peerConnection = new RTCPeerConnection(ref configuration);
        // DelegateOnIceConnectionChange onIceConnectionChange;
        // onIceConnectionChange = state => { OnIceConnectionChange(state); };
        onIceCandidate = candidate => { OnIceCandidate(candidate); };
        peerConnection.OnIceCandidate = onIceCandidate;

        peerConnection.OnIceConnectionChange = state =>
        {
            Debug.Log($"WebRTC: OnIceConnectionChange {state.ToString()}");
        };
        
        // add video stream
        var cam = GetComponent<Camera>();
//        MediaStream videoStream = cam.CaptureStream(1280, 720, RenderTextureDepth.DEPTH_24);
        MediaStream videoStream = cam.CaptureStream(1280, 720);
        foreach (var track in videoStream.GetTracks())
        {
            Debug.Log("track.enabled : "+track.Enabled);
            peerConnection.AddTrack(track, videoStream);
        }
        // add game music stream
        // Debug.Log("game music audiosource name : "+gameMusicAudioSource.name);
        // MediaStream sendGameMusicAudioStream = new MediaStream();
        // AudioStreamTrack gameMusic_audioTrack = new AudioStreamTrack(gameMusicAudioSource);
        // TMP_url.text="[vr_debug]WebRTCConnection.ConnectionStart 1.2";
        // peerConnection.AddTrack(gameMusic_audioTrack, sendGameMusicAudioStream);
        // TMP_url.text="[vr_debug]WebRTCConnection.ConnectionStart 1.3";
        //// add microphone stream
        Debug.Log("microphont audiosource name : "+microphoneAudioSource.name);
        MediaStream sendMicrophoneAudioStream = new MediaStream();
        AudioStreamTrack microphone_audioTrack = new AudioStreamTrack(microphoneAudioSource);
        var sender = peerConnection.AddTrack(microphone_audioTrack, sendMicrophoneAudioStream);
        // add receive audio
        MediaStream receiveStream = new MediaStream();
        receiveStream.OnAddTrack = e =>
        {
            if (e.Track is AudioStreamTrack track)
            {
                // `AudioSource.SetTrack` is a extension method which is available 
                // when using `Unity.WebRTC` namespace.
                remoteAudioSource.SetTrack(track);

                // Please do not forget to turn on the `loop` flag.
                remoteAudioSource.loop = true;
                remoteAudioSource.Play();
            }
        };
        peerConnection.OnTrack = (RTCTrackEvent e) => {
            if (e.Track.Kind == TrackKind.Audio)
            {
                // Add track to MediaStream for receiver.
                // This process triggers `OnAddTrack` event of `MediaStream`.
                receiveStream.AddTrack(e.Track);
            }
        };
        if (!webrtcUpdateStarted)
        {
            StartCoroutine(WebRTC.Update());
            webrtcUpdateStarted = true;
        }

        /*
        var camera = GetComponent<Camera>();
        var track = camera.CaptureStreamTrack(1280, 720, 20);
        // Add the track.
        peerConnection.AddTrack(track);
        */

        // HandleCallSend(peerConnection); 
        // websocket = new WebSocket("ws://echo.websocket.org");
        websocket = new WebSocket("wss://metaverse.venraas.tw:4567/ws/call/");
        //websocket = new WebSocket("wss://meta.crazycurly.tk/ws/call/");
        //StartCoroutine(HandleCallSend(peerConnection));
        websocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
            SendLoginMessage();
            StartCoroutine(HandleCallSend(peerConnection));
        };

        websocket.OnError += (e) =>
        {
            Debug.Log("Error! " + e);
        };

        websocket.OnClose += (e) =>
        {
            Debug.Log("Connection closed!");
        };
        websocket.OnMessage += (bytes) =>
        {
            // Reading a plain text message
            var message = System.Text.Encoding.UTF8.GetString(bytes);
            var message_obbject = JsonUtility.FromJson<OnmessageObject>(message);
            Debug.Log("Received OnMessage! (" + bytes.Length + " bytes) " + message);
            Debug.Log("message_obbject.type! (" + message_obbject.type + " bytes) " );
            if (message_obbject.type == "connection")
            {
                Debug.Log("connection");
                //StartCoroutine(HandleCallReceived(peerConnection,message));
            }
            if (message_obbject.type == "call_answered")
            {
                Debug.Log("call_answered");
                StartCoroutine(HandleCallReceived(peerConnection,message));
                TMP_url.text=friend_url+newBackstageItemID2+"_"+newBackstageItemID1+"  : (connected) ";
            }
            
            if (message_obbject.type == "ICEcandidate")
            {
                Debug.Log("ICEcandidate");
                HandleICEcandidate(message);
            }
            if (message_obbject.type == "send_msg")
            {
                Debug.Log("ICEcandidate");
                HandleMessage(message);
            }
            if (message_obbject.type == "service_busy")
            {
                Debug.Log("server service_busy");
                TMP_url.text="客服人員忙線中，請稍等...";
            }
        };
        // Keep sending messages at every 0.3s
        //InvokeRepeating("SendWebSocketMessage", 0.0f, 0.3f);
        
        Debug.Log(friend_url+newBackstageItemID2+"_"+newBackstageItemID1+"  : (connected url) ");

        await websocket.Connect();
        
        // release webrtc resources
        peerConnection.Close();
        peerConnection.RemoveTrack(sender);
        peerConnection = null;
        WebRTC.Dispose();

        
    }

    void Update()
    {
#if !UNITY_WEBGL || UNITY_EDITOR
        if (websocket!=null)
            websocket.DispatchMessageQueue();
#endif
    }
    //
    // IEnumerator PeerNegotiationNeeded(RTCPeerConnection pc)
    // {
    //     Debug.Log($"{GetName(pc)} createOffer start");
    //     var op = pc.CreateOffer(ref _offerOptions);
    //     yield return op;

    //     if (!op.IsError)
    //     {
    //         if (pc.SignalingState != RTCSignalingState.Stable)
    //         {
    //             Debug.LogError($"{GetName(pc)} signaling state is not stable.");
    //             yield break;
    //         }

    //         yield return StartCoroutine(OnCreateOfferSuccess(pc, op.Desc));
    //     }
    //     else
    //     {
    //         OnCreateSessionDescriptionError(op.Error);
    //     }
    // }
    public IEnumerator  HandleCallSend(RTCPeerConnection peerConnection)
    {
        
        var op1 = peerConnection.CreateOffer();
        yield return op1;
        RTCSessionDescription local_desc = op1.Desc;
        var op2 = peerConnection.SetLocalDescription(ref local_desc);
        yield return op2;

        Debug.Log("#################################################################################"+op1+op2+local_desc);
        call(local_desc);
    }
    private void OnIceCandidate(RTCIceCandidate candidate)
    {
        Debug.Log("~~~~~~~~~~~~~~~~~~OnIceCandidate~~~~~~~~~~~~~~~~~~~");
        Debug.Log(candidate.SdpMid);
        Debug.Log(candidate.SdpMLineIndex);
        Debug.Log(candidate.Candidate);
        SendICEcandidate(candidate);
    }

    public void HandleMessage(string message)
    {
        int max_row_num = 10;
        var message_object = JsonUtility.FromJson<MessageMessageObject>(message);
        messageList.Add(message_object.data.message);
        if (messageList.Count > max_row_num)
        {
            messageList.RemoveAt(0);
        }
        //�L�Xmessage
        string message_string = "";
        messageList.ForEach(delegate (string msg)
        {
            message_string = message_string + msg + '\n';
        });
        MessageBoard.text = message_string;
    }

    public void HandleICEcandidate(string message)
    {
        var message_object = JsonUtility.FromJson<ICEcandidateMessageObject>(message);
        Debug.Log(JsonUtility.ToJson(message_object, true));
        RTCIceCandidateInit candidate_info = new RTCIceCandidateInit();
        candidate_info.candidate = message_object.data.rtcMessage.candidate;
        candidate_info.sdpMid = message_object.data.rtcMessage.id;
        candidate_info.sdpMLineIndex = Int32.Parse(message_object.data.rtcMessage.label);
        peerConnection.AddIceCandidate(new RTCIceCandidate(candidate_info));
    }

    public IEnumerator HandleCallReceived(RTCPeerConnection peerConnection,string message)
    {
        // var message_object = JsonUtility.FromJson<CallReceivedMessageObject>(message);
        // Debug.Log("message");
        // Debug.Log(JsonUtility.ToJson(message_object, true));
        // RTCSessionDescription remote_desc = new RTCSessionDescription();
        // remote_desc.sdp = message_object.data.rtcMessage.sdp;
        // if (message_object.data.rtcMessage.type == "offer")
        // {
        //     remote_desc.type = RTCSdpType.Offer;
        // }
        // Debug.Log("----remote description----");
        // Debug.Log(JsonUtility.ToJson(remote_desc, true));
        // var op2 = peerConnection.SetRemoteDescription(ref remote_desc);
        // yield return op2;
        // if (!op2.IsError)
        // {
        //     Debug.Log("----op2 SetRemoteDescription complete----");
        // }
        // else
        // {
        //     var error = op2.Error;
        //     Debug.Log("----op2 SetRemoteDescription error----");
        //     Debug.Log(error);
        //     yield break;
        // }
        // Create the SDP.
        // var op3 = peerConnection.CreateAnswer();
        // yield return op3;
        // if (!op3.IsError)
        // {
        //     Debug.Log("----op3 CreateAnswer complete----");
        // }
        // else
        // {
        //     var error = op3.Error;
        //     Debug.Log("----op3 CreateAnswer error----");
        //     Debug.Log(error);
        // }
        // RTCSessionDescription local_desc = op3.Desc;
        // Debug.Log("----local description----");
        // Debug.Log(JsonUtility.ToJson(local_desc, true));
        // var op4 = peerConnection.SetLocalDescription(ref local_desc);
        // yield return op4;
        // if (!op4.IsError)
        // {
        //     Debug.Log("----op4 CreateAnswer complete----");
        // }
        // else
        // {
        //     var error = op4.Error;
        //     Debug.Log("----op4 CreateAnswer error----");
        //     Debug.Log(error);
        // }

        // SendAnswer(local_desc);
        // Debug.Log("Done");

        var message_object = JsonUtility.FromJson<CallReceivedMessageObject>(message);
        //Debug.Log("message");
        //Debug.Log(JsonUtility.ToJson(message_object, true));
        RTCSessionDescription remote_desc = new RTCSessionDescription();
        remote_desc.sdp = message_object.data.rtcMessage.sdp;
        print("44444444444444444"+message_object.data.rtcMessage.type);
        if (message_object.data.rtcMessage.type == "answer")
        {
            remote_desc.type = RTCSdpType.Answer;
            Debug.Log("answer done"+RTCSdpType.Answer);
            
        }
        Debug.Log("----remote description----");
        Debug.Log(JsonUtility.ToJson(remote_desc, true));
        var op6  = peerConnection.SetRemoteDescription(ref remote_desc);
        print("333333333333"+op6);
        yield return op6;





    }

    async void SendLoginMessage()
    {
        if (websocket.State == WebSocketState.Open)
        {
            // https://meta.crazycurly.tk/friend/cde456_abc12
            var name_string = "{\"type\":\"login\", \"data\":{\"name\":\"" + newBackstageItemID1 + "\"}}";
            Debug.Log(name_string);
            await websocket.SendText(name_string);
        }
    }

    async void SendAnswer(RTCSessionDescription desc)
    {
        string other_user = newBackstageItemID2;
        string data = JsonUtility.ToJson(desc, true);
        string message_string = "{\"type\":\"answer_call\", \"data\":{";
        message_string = message_string + "\"caller\":\"" + other_user + "\",";
        message_string = message_string + "\"rtcMessage\":" + data;
        message_string = message_string + "}}";
        message_string = message_string.Replace("\"type\": 0", "\"type\": \"offer\"");
        Debug.Log("???????????????????????????????????");
        Debug.Log(message_string);
        await websocket.SendText(message_string);
    }
    async void call(RTCSessionDescription desc)
    {
        string other_user = newBackstageItemID2;
        string data = JsonUtility.ToJson(desc, true);
        string message_string = "{\"type\":\"call_service\", \"data\":{";
        message_string = message_string + "\"name\":\"" + other_user + "\",";
        message_string = message_string + "\"rtcMessage\":" + data;
        message_string = message_string + "}}";
        message_string = message_string.Replace("\"type\": 0", "\"type\": \"offer\"");
        Debug.Log("???????????????????????????????????");
        Debug.Log(message_string);
        await websocket.SendText(message_string);
    }


    async void SendICEcandidate(RTCIceCandidate candidate)
    {
        if (websocket.State == WebSocketState.Open)
        {
            // https://meta.crazycurly.tk/friend/cde456_abc123
            //var name_string = "{\"type\":\"login\", \"data\":{\"name\":\"abc123\"}}";
            string other_user = newBackstageItemID2;
            string message_string = "{\"type\":\"ICEcandidate\", \"data\":{";
            message_string = message_string + "\"user\":\"" + other_user + "\",";
            message_string = message_string + "\"rtcMessage\":{";
            message_string = message_string + "\"label\":" + candidate.SdpMLineIndex + ",";
            message_string = message_string + "\"id\":\"" + candidate.SdpMid + "\",";
            message_string = message_string + "\"candidate\":\"" + candidate.Candidate + "\"";
            message_string = message_string + "}}}";
            Debug.Log("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            Debug.Log(message_string);
            await websocket.SendText(message_string);
        }
    }

    async public void ConnectionStop() {
        TMP_url.text="中止連線";
        

        Debug.Log("WebRTCConnection.ConnectionStop");
        if (websocket!=null) {
            await websocket.Close();
            websocket = null;
            }
        // if (peerConnection!=null) {
        //     peerConnection.Close();
        //     peerConnection = null;
        //     }
        
          


    }

    private void OnDestroy()
    {
        ConnectionStop();
//        WebRTC.Finalize();
    }
}