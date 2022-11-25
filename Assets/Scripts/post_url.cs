using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using UnityEngine.Networking;
using Unity.WebRTC;
using Newtonsoft.Json;

public class post_url : MonoBehaviour
{
    public RTCPeerConnection peerConnection = null;
    private DelegateOnIceCandidate onIceCandidate;
    private bool webrtcUpdateStarted = false;
    public AudioSource gameMusicAudioSource, microphoneAudioSource, remoteAudioSource;

    [System.Serializable]
    public class CallReceivedMessageObject
    {
        public string sdp;
        public string type;
    }

    
    private void Awake()   
    {
        // Initialize WebRTC
        WebRTC.Initialize();
    }
    async public void ConnectionStart()
    {
        // ==================================================== create WebRtc ====================================================
        // check if connection is existed.
        if (peerConnection!= null)
            return;
        
        // RTCConfiguration configuration = default;
        // RTCConfiguration GetSelectedSdpSemantics() { RTCConfiguration config = default; config.iceServers = new[] { new RTCIceServer { urls = new[] { "stun:bn-turn1.xirsys.com" } }, 
        // new RTCIceServer { urls = new[] { "turn:bn-turn1.xirsys.com:80?transport=udp" } }, new RTCIceServer { urls = new[] { "turn:bn-turn1.xirsys.com:3478?transport=udp" } } }; return config; }
        // RTCConfiguration config = GetSelectedSdpSemantics();
        RTCConfiguration configuration = new RTCConfiguration
        {
            iceServers = new[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } }
        };

        // configuration.iceServers = new[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } };
        // configuration. = new[] { new RTCIceServer { urls = new[] { "stun:stun.l..com:19302" } } };
        //configuration.iceServers = new[] { new RTCIceServer { urls = new[] { "stun:bn-turn1.xirsys.com" } }, new RTCIceServer { urls = new[] { "turn:bn-turn1.xirsys.com:80?transport=udp" } }, new RTCIceServer { urls = new[] { "turn:bn-turn1.xirsys.com:3478?transport=udp" } } };
        // Create peer connection /
        peerConnection = new RTCPeerConnection(ref configuration);

        onIceCandidate = candidate => { OnIceCandidate(peerConnection,candidate);};
        peerConnection.OnIceCandidate = onIceCandidate;
        // Debug.Log("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ : "+peerConnection.connectionState);
        // DelegateOnIceConnectionChange onIceConnectionChange;
        // onIceConnectionChange = state => { OnIceConnectionChange(state); };
        // onIceCandidate = candidate => { OnIceCandidate(candidate); };
        // peerConnection.OnIceCandidate = onIceCandidate;
        // peerConnection.OnIceCandidate = candidate =>
        // {
        //     Debug.Log("CANDIDATE");
        //     Debug.Log(candidate);
        //     peerConnection.AddIceCandidate(candidate);
        // };

        // peerConnection.OnIceCandidate = e => { !string.IsNullOrEmpty(e.candidate); }



        peerConnection.OnIceGatheringStateChange = state =>
        {
            Debug.Log($"WebRTC: OnIceGatheringStateChange {state.ToString()}");
        };
        peerConnection.OnConnectionStateChange = state =>
        {
            Debug.Log($"WebRTC: OnConnectionStateChange {state.ToString()}");
        };
        // peerConnection.OnIceConnectionChange = state =>
        // {
        //     Debug.Log($"WebRTC: OnIceConnectionChange {state.ToString()}");
        // };

        // remoteConnection.OnIceCandidate = e => { !string.IsNullOrEmpty(e.candidate)
        // || localConnection.AddIceCandidate(e); }


        // ===================================================== adding video && audio ===========================================================
        // add video stream //
        var cam = GetComponent<Camera>();
        //MediaStream videoStream = cam.CaptureStream(1280, 720, RenderTextureDepth.DEPTH_24);
        MediaStream videoStream = cam.CaptureStream(1280, 720);
        foreach (var track in videoStream.GetTracks())
        {
            Debug.Log("track.enabled : "+track.Enabled+" ,"+track);
            peerConnection.AddTrack(track, videoStream);
            // peerConnection.AddTrack("video", videoStream);
        }
        
        // Create a track from the Camera
        // var camera = GetComponent<Camera>();
        // var track = camera.CaptureStreamTrack(1280, 720);

        // // Add the track.
        // peerConnection.AddTrack(track);



        // add game music stream
        // Debug.Log("game music audiosource name : "+gameMusicAudioSource.name);
        // MediaStream sendGameMusicAudioStream = new MediaStream();
        // AudioStreamTrack gameMusic_audioTrack = new AudioStreamTrack(gameMusicAudioSource);
        // TMP_url.text="[vr_debug]WebRTCConnection.ConnectionStart 1.2";
        // peerConnection.AddTrack(gameMusic_audioTrack, sendGameMusicAudioStream);
        // TMP_url.text="[vr_debug]WebRTCConnection.ConnectionStart 1.3";
        //// add microphone stream


        Debug.Log("microphont audiosource name : "+microphoneAudioSource.name);
        //MediaStream sendMicrophoneAudioStream = new MediaStream();
        AudioStreamTrack microphone_audioTrack = new AudioStreamTrack(microphoneAudioSource);
        // peerConnection.AddTrack(microphone_audioTrack, sendMicrophoneAudioStream);
        peerConnection.AddTrack(microphone_audioTrack);

        
        // add receive audio
        // MediaStream receiveStream = new MediaStream();
        // receiveStream.OnAddTrack = e =>
        // {
        //     if (e.Track is AudioStreamTrack track)
        //     {
        //         // `AudioSource.SetTrack` is a extension method which is available 
        //         // when using `Unity.WebRTC` namespace.
        //         remoteAudioSource.SetTrack(track);

        //         // Please do not forget to turn on the `loop` flag.
        //         remoteAudioSource.loop = true;
        //         remoteAudioSource.Play();
        //     }
        // };
        // peerConnection.OnTrack = (RTCTrackEvent e) => {
        //     if (e.Track.Kind == TrackKind.Audio)
        //     {
        //         // Add track to MediaStream for receiver.
        //         // This process triggers `OnAddTrack` event of `MediaStream`.
        //         receiveStream.AddTrack(e.Track);
        //     }
        // };
        if (!webrtcUpdateStarted)
        {
            StartCoroutine(WebRTC.Update());
            webrtcUpdateStarted = true;
        }
        // ===================================================== start WebRtc connection step ==========================================
        StartCoroutine(PeerNegotiationNeeded(peerConnection));
    }
   public IEnumerator B()
   {
    Debug.Log("~~~~~~~~~~~~~~~~~~B");
    yield return null;
    Debug.Log("~~~~~~~~~~~~~~~~~~C");
   }
    private void OnIceCandidate(RTCPeerConnection peerConnection,RTCIceCandidate candidate)
    {
        Debug.Log("~~~~~~~~~~~~~~~~~~OnIceCandidate~~~~~~~~~~~~~~~~~~~");
        Debug.Log(candidate.SdpMid);
        Debug.Log(candidate.SdpMLineIndex);
        Debug.Log(candidate.Candidate);

        // RTCIceCandidateInit candidate_info = new RTCIceCandidateInit();
        // candidate_info.candidate = candidate.SdpMid;
        // candidate_info.sdpMid =  Int32.Parse(candidate.SdpMLineIndex);
        // candidate_info.sdpMLineIndex = candidate.Candidate;
        peerConnection.AddIceCandidate(candidate);
        // SendICEcandidate(candidate);
    }

    public IEnumerator PeerNegotiationNeeded(RTCPeerConnection peerConnection)
    {
        Debug.Log(" createOffer start"+peerConnection.SignalingState+RTCSignalingState.Stable);
        var op = peerConnection.CreateOffer();
        yield return op;



        RTCSessionDescription local_desc = op.Desc;
        if (!op.IsError)
        {
            if (peerConnection.SignalingState != RTCSignalingState.Stable)
            {
                Debug.LogError(" signaling state is not stable.");
                yield break;
            }
            Debug.Log("local_desc : "+JsonUtility.ToJson(local_desc, true));
            yield return StartCoroutine(OnCreateOfferSuccess(peerConnection,local_desc));
        }
        else
        {
            OnCreateSessionDescriptionError(op.Error);
        }
    }


    public IEnumerator OnCreateOfferSuccess(RTCPeerConnection peerConnection, RTCSessionDescription desc)
    {
        Debug.Log("OnCreateOfferSuccess : "+desc.sdp);
        var op2 = peerConnection.SetLocalDescription(ref desc);
        Debug.Log("~~~~~~~~~~~~~~~~~~A");
        StartCoroutine(B());
        Debug.Log("~~~~~~~~~~~~~~~~~~D");
        yield return op2;
        yield return new WaitForSeconds(5.0f);
        Debug.Log("=========== HAVE TO COMPLETE BEFORE THIS ========");
        RTCSessionDescription local_desc_update = peerConnection.LocalDescription;




        if (!op2.IsError)
        {
            OnSetLocalSuccess(peerConnection);
        }
        else
        {
            var error = op2.Error;
            OnSetSessionDescriptionError(ref error);
        }
        var op4 = StartCoroutine(OnGetAnswerSuccess(peerConnection,local_desc_update));
        yield return op4;
        Debug.Log("op4.1 : "+JsonUtility.ToJson(op4, true));
        Debug.Log("op4.2 : "+op4);
    }

    public IEnumerator OnGetAnswerSuccess(RTCPeerConnection peerConnection, RTCSessionDescription desc)
    {
        string other_user = "sean_test";
        Debug.Log("desc : "+desc);
        string url= "rtmp://140.113.167.72/live/test";
        url= YoutubeLiveBroadcast.server_url;
        string data = JsonUtility.ToJson(desc, true);
        // string message_string = "{\"url\": \"rtmp://140.113.167.72/live/test\", \"type\":\"call_service\", \"data\":{";
        // message_string = message_string + "\"name\":\"" + other_user + "\",";
        // message_string = message_string + "\"rtcMessage\":" + data;
        // message_string = message_string + "}}";
        // message_string = message_string.Replace("\"type\": 0", "\"type\": \"offer\"");
        
        Debug.Log("server_url : "+url);
        data=data.Replace("\"type\": 0", "\"type\": \"offer\"");
        data=data.Replace("}",","+"\"url\":\"" + url + "\"}");
        // Debug.Log("???????????????????????????????????");
        // Debug.Log("message_string : "+message_string);
        //await websocket.SendText(message_string);
		
        //data["text"] = "rtmp://140.113.167.72/live/test";
        //var srcStr = '{"text":"123"}';
        //var srcStr = '{"text":"rtmp://140.113.167.72/live/test"}';"{ "name": "searitem" }"
        //byte[] postData = System.Text.Encoding.UTF8.GetBytes(data.ToJson()); // 把字符串转换为bype数组
        //data.url= "\"rtmp://140.113.167.72/live/test\"";
        Debug.Log("data : "+data);
        byte[] postData = System.Text.Encoding.UTF8.GetBytes(data); // 把字符串转换为bype数组
	    var www = new UnityWebRequest("https://f13a-60-250-213-114.ngrok.io/offer", UnityWebRequest.kHttpVerbPOST);
	    www.chunkedTransfer = false;
	    www.uploadHandler = new UploadHandlerRaw(postData);
	    www.downloadHandler = new DownloadHandlerBuffer();
	    www.SetRequestHeader("Content-Type", "application/json");
	    www.SetRequestHeader("Accept", "application/json");
        www.timeout = 3;
        yield return www.SendWebRequest();
		if (!www.isNetworkError && !www.isHttpError && www.isDone)
            yield return www.downloadHandler.text;
        Debug.Log("responseCode "  + www.responseCode);
        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
        }
        else
        {
			

            Debug.Log("downloadHandler : "+www.downloadHandler.text);
            Debug.Log("Form upload complete!");
            byte[] results = www.downloadHandler.data;
            Debug.Log("op4.3 : "+JsonUtility.ToJson(www.downloadHandler.text, true));
            var text = www.downloadHandler.text;
            CallReceivedMessageObject message_object = JsonUtility.FromJson<CallReceivedMessageObject>(text);
            RTCSessionDescription remote_desc = new RTCSessionDescription();
            Debug.Log("op4.4 : "+message_object.sdp);
            Debug.Log("op4.5 : "+message_object.type);
            remote_desc.sdp = message_object.sdp;
            if (message_object.type == "answer")
            {
                remote_desc.type = RTCSdpType.Answer;
                Debug.Log("answer done : "+RTCSdpType.Answer);
            }
            Debug.Log("----remote description----");
            Debug.Log(JsonUtility.ToJson(remote_desc, true));
            var op6  = peerConnection.SetRemoteDescription(ref remote_desc);
            Debug.Log("remote_desc : "+JsonUtility.ToJson(remote_desc, true));
            yield return op6;
            
            
            // 收到資料再改
            // RTCSessionDescription remote_desc = op4.Desc;
            // // remote_desc
            // var op6 = peerConnection.setRemoteDescription(remote_desc);
            // yield return op6;




        }
        // yield return www.downloadHandler.text;
    }


    /*public IEnumerator  HandleCallSend(RTCPeerConnection peerConnection)
    {
        
        var op1 = peerConnection.CreateOffer();
        yield return op1;
        RTCSessionDescription local_desc = op1.Desc;
        var op2 = peerConnection.SetLocalDescription(ref local_desc);
        yield return op2;

        Debug.Log("#################################################################################"+op1+op2+local_desc);
        call(local_desc);
    }*/

    // public IEnumerator HandleCallReceived(RTCPeerConnection peerConnection,string message)
    // {
    //     var message_object = JsonUtility.FromJson<CallReceivedMessageObject>(message);
    //     //Debug.Log("message");
    //     //Debug.Log(JsonUtility.ToJson(message_object, true));
    //     RTCSessionDescription remote_desc = new RTCSessionDescription();
    //     remote_desc.sdp = message_object.data.rtcMessage.sdp;
    //     print("44444444444444444"+message_object.data.rtcMessage.type);
    //     if (message_object.data.rtcMessage.type == "answer")
    //     {
    //         remote_desc.type = RTCSdpType.Answer;
    //         Debug.Log("answer done"+RTCSdpType.Answer);
            
    //     }
    //     Debug.Log("----remote description----");
    //     Debug.Log(JsonUtility.ToJson(remote_desc, true));
    //     var op6  = peerConnection.SetRemoteDescription(ref remote_desc);
    //     print("333333333333"+op6);
    //     yield return op6;
    // }
    private static void OnCreateSessionDescriptionError(RTCError error)
    {
        Debug.LogError($"Error Detail Type: {error.message}");
    }
    private void OnSetLocalSuccess(RTCPeerConnection pc)
    {
        Debug.Log(" SetLocalDescription complete");
    }
    private void OnSetRemoteSuccess(RTCPeerConnection pc)
    {
        Debug.Log("SetRemoteDescription complete");
    }
    static void OnSetSessionDescriptionError(ref RTCError error)
    {
        Debug.LogError($"Error Detail Type: {error.message}");
    }
}



























/*public class post_url : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(Upload());
        //JsonData data = new JsonData();
    }

    IEnumerator Upload()
    {
		
        //data["text"] = "rtmp://140.113.167.72/live/test";
        //var srcStr = '{"text":"123"}';
        //var srcStr = '{"text":"rtmp://140.113.167.72/live/test"}';"{ "name": "searitem" }"
        //byte[] postData = System.Text.Encoding.UTF8.GetBytes(data.ToJson()); // 把字符串转换为bype数组
        byte[] postData = System.Text.Encoding.UTF8.GetBytes("{ \"url\": \"rtmp://140.113.167.72/live/test\" }"); // 把字符串转换为bype数组
	    var www = new UnityWebRequest("https://meta.crazycurly.tk/offer", UnityWebRequest.kHttpVerbPOST);
	    www.chunkedTransfer = false;
	    www.uploadHandler = new UploadHandlerRaw(postData);
	    www.downloadHandler = new DownloadHandlerBuffer();
	    www.SetRequestHeader("Content-Type", "application/json");
	    www.SetRequestHeader("Accept", "application/json");
		
		yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("Form upload complete!");
        }
    }
}*/