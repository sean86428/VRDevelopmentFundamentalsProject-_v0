using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.WebRTC;

using NativeWebSocket;

public class Connection : MonoBehaviour
{
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



    WebSocket websocket;
    RTCPeerConnection peerConnection;
    private List<RTCRtpSender> pcSenders;
    DelegateOnIceCandidate onIceCandidate;
    private MediaStream videoStream;
    private DelegateOnIceConnectionChange onIceConnectionChange;
    private bool videoUpdateStarted;
    // Start is called before the first frame update
    async void Start()
    {
        // Initialize WebRTC
        WebRTC.Initialize();
        pcSenders = new List<RTCRtpSender>();
        RTCConfiguration configuration = default;
        configuration.iceServers = new[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } };
        peerConnection = new RTCPeerConnection(ref configuration);
        //onIceConnectionChange = state => { OnIceConnectionChange(state); };
        onIceCandidate = candidate => { OnIceCandidate(candidate); };
        peerConnection.OnIceCandidate = onIceCandidate;


        // add video stream
        var cam = GetComponent<Camera>();
        if (videoStream == null)
        {
            videoStream = cam.CaptureStream(1280, 720);
        }

        foreach (var track in videoStream.GetTracks())
        {
            Debug.Log("track.enabled");
            Debug.Log(track.Enabled);
            pcSenders.Add(peerConnection.AddTrack(track, videoStream));
        }

        if (!videoUpdateStarted)
        {
            StartCoroutine(WebRTC.Update());
            videoUpdateStarted = true;
        }

        /*
        var camera = GetComponent<Camera>();
        var track = camera.CaptureStreamTrack(1280, 720, 20);
        // Add the track.
        peerConnection.AddTrack(track);
        */

        // websocket = new WebSocket("ws://echo.websocket.org");
        websocket = new WebSocket("wss://meta.crazycurly.tk/ws/call/");

        websocket.OnOpen += () =>
        {
            Debug.Log("Connection open!");
            SendLoginMessage();
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
            if (message_obbject.type == "connection")
            {
                Debug.Log("connection");
            }
            if (message_obbject.type == "call_received")
            {
                Debug.Log("call_received");
                StartCoroutine(HandleCallReceived(message));
            }
            if (message_obbject.type == "ICEcandidate")
            {
                Debug.Log("ICEcandidate");
                HandleICEcandidate(message);
            }
        };

        // Keep sending messages at every 0.3s
        //InvokeRepeating("SendWebSocketMessage", 0.0f, 0.3f);

        await websocket.Connect();
    }

    void Update()
    {
#if !UNITY_WEBGL || UNITY_EDITOR
        websocket.DispatchMessageQueue();
#endif
    }

    private void OnIceCandidate(RTCIceCandidate candidate)
    {
        Debug.Log("~~~~~~~~~~~~~~~~~~OnIceCandidate~~~~~~~~~~~~~~~~~~~");
        Debug.Log(candidate.SdpMid);
        Debug.Log(candidate.SdpMLineIndex);
        Debug.Log(candidate.Candidate);
        SendICEcandidate(candidate);
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

    public IEnumerator HandleCallReceived(string message)
    {
        var message_object = JsonUtility.FromJson<CallReceivedMessageObject>(message);
        Debug.Log("message");
        Debug.Log(JsonUtility.ToJson(message_object, true));
        RTCSessionDescription remote_desc = new RTCSessionDescription();
        remote_desc.sdp = message_object.data.rtcMessage.sdp;
        if(message_object.data.rtcMessage.type == "offer")
        {
            remote_desc.type = RTCSdpType.Offer;
        }
        Debug.Log("----remote description----");
        Debug.Log(JsonUtility.ToJson(remote_desc, true));
        var op2 = peerConnection.SetRemoteDescription(ref remote_desc);
        yield return op2;
        if (!op2.IsError)
        {
            Debug.Log("----op2 SetRemoteDescription complete----");
        }
        else
        {
            var error = op2.Error;
            Debug.Log("----op2 SetRemoteDescription error----");
            Debug.Log(error);
            yield break;
        }
        // Create the SDP.
        var op3 = peerConnection.CreateAnswer();
        yield return op3;
        if (!op3.IsError)
        {
            Debug.Log("----op3 CreateAnswer complete----");
        }
        else
        {
            var error = op3.Error;
            Debug.Log("----op3 CreateAnswer error----");
            Debug.Log(error);
        }
        RTCSessionDescription local_desc = op3.Desc;
        Debug.Log("----local description----");
        Debug.Log(JsonUtility.ToJson(local_desc, true));
        var op4 = peerConnection.SetLocalDescription(ref local_desc);
        yield return op4;
        if (!op4.IsError)
        {
            Debug.Log("----op4 CreateAnswer complete----");
        }
        else
        {
            var error = op4.Error;
            Debug.Log("----op4 CreateAnswer error----");
            Debug.Log(error);
        }

        SendAnswer(local_desc);
        Debug.Log("Done");
    }

    async void SendLoginMessage()
    {
        if (websocket.State == WebSocketState.Open)
        {
            // https://meta.crazycurly.tk/friend/cde456_abc123
            var name_string = "{\"type\":\"login\", \"data\":{\"name\":\"abc123\"}}";
            Debug.Log(name_string);
            await websocket.SendText(name_string);
        }
    }

    async void SendAnswer(RTCSessionDescription desc)
    {
        string other_user = "cde456";
        string data = JsonUtility.ToJson(desc, true);
        string message_string = "{\"type\":\"answer_call\", \"data\":{";
        message_string = message_string + "\"caller\":\"" + other_user + "\",";
        message_string = message_string + "\"rtcMessage\":"+data;
        message_string = message_string + "}}";
        message_string = message_string.Replace("\"type\": 2", "\"type\": \"answer\"");
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
            string other_user = "cde456";
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

    private async void OnApplicationQuit()
    {
        await websocket.Close();
    }
}
