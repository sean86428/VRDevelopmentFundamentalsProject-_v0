using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using UnityEngine.Networking;
using Unity.WebRTC;
using Newtonsoft.Json;

public class WebRtcBroadcast : MonoBehaviour
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
        //WebRTC.Initialize();
    }
    async public void ConnectionStart()
    {
        // ==================================================== create WebRtc ====================================================
        // check if connection is existed.
        if (peerConnection!= null)
            return;
        
        RTCConfiguration configuration = new RTCConfiguration
        {
            iceServers = new[] { new RTCIceServer { urls = new[] { "stun:stun.l.google.com:19302" } } }
        };


        peerConnection = new RTCPeerConnection(ref configuration);

        onIceCandidate = candidate => { OnIceCandidate(peerConnection,candidate);};
        peerConnection.OnIceCandidate = onIceCandidate;


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
        // MediaStream videoStream = cam.CaptureStream(1280, 720);
        MediaStream videoStream = cam.CaptureStream(640, 480);
        // MediaStream videoStream = cam.CaptureStream(1000, 480);
        // MediaStream videoStream = cam.CaptureStream(480, 360);
        foreach (var track in videoStream.GetTracks())
        {
            Debug.Log("track.enabled : "+track.Enabled+" ,"+track);
            peerConnection.AddTrack(track, videoStream);
            // peerConnection.AddTrack("video", videoStream);
        }
        


        Debug.Log("microphont audiosource name : "+microphoneAudioSource.name);
        //MediaStream sendMicrophoneAudioStream = new MediaStream();
        AudioStreamTrack microphone_audioTrack = new AudioStreamTrack(microphoneAudioSource);
        // peerConnection.AddTrack(microphone_audioTrack, sendMicrophoneAudioStream);
        peerConnection.AddTrack(microphone_audioTrack);

        
        if (!webrtcUpdateStarted)
        {
            StartCoroutine(WebRTC.Update());
            webrtcUpdateStarted = true;
        }
        // ===================================================== start WebRtc connection step ==========================================
        StartCoroutine(PeerNegotiationNeeded(peerConnection));
    }
    private void OnIceCandidate(RTCPeerConnection peerConnection,RTCIceCandidate candidate)
    {
        Debug.Log("~~~~~~~~~~~~~~~~~~OnIceCandidate~~~~~~~~~~~~~~~~~~~");
        // Debug.Log(candidate.SdpMid);
        // Debug.Log(candidate.SdpMLineIndex);
        Debug.Log(candidate.Candidate);
        //peerConnection.AddIceCandidate(candidate);
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
        yield return op2;
        yield return new WaitForSeconds(1.0f);
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
    }

    public IEnumerator OnGetAnswerSuccess(RTCPeerConnection peerConnection, RTCSessionDescription desc)
    {
        string other_user = "sean_test";
        Debug.Log("desc : "+desc);
        string url= "null";
        url= YoutubeLiveBroadcast.server_url;
        string data = JsonUtility.ToJson(desc, true);

        Debug.Log("server_url : "+url);
        data=data.Replace("\"type\": 0", "\"type\": \"offer\"");
        data=data.Replace("}",","+"\"url\":\"" + url + "\"}");
        Debug.Log("data : "+data);
        byte[] postData = System.Text.Encoding.UTF8.GetBytes(data); // 把字符串转换为bype数组
	    // var www = new UnityWebRequest("https://f13a-60-250-213-114.ngrok.io/offer", UnityWebRequest.kHttpVerbPOST);
        // var www = new UnityWebRequest("http://60.250.213.114:8080/offer", UnityWebRequest.kHttpVerbPOST); 
        var www = new UnityWebRequest("https://metaverse.venraas.tw:8080/offer", UnityWebRequest.kHttpVerbPOST);
        // var www = new UnityWebRequest("http://34.80.147.120:8080/offer", UnityWebRequest.kHttpVerbPOST);
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
            

        }
        // yield return www.downloadHandler.text;
    }


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
