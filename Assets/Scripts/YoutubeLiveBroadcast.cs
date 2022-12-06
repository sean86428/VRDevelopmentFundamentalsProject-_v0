using System;  
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using UnityEditor;
// using Unity.EditorCoroutines.Editor;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Models;
using Proyecto26;
using TMPro;

public class YoutubeLiveBroadcast : MonoBehaviour
{
    public static string server_url="rtmp://140.113.167.72/live/test";
    public class LiveBroadcastRequest
    {
        public class SnippetClass {
            public string title;
            public string scheduledStartTime;
        };
        public class StatusClass {
            public string privacyStatus;
        };
        public class ContentDetailsClass {
            public bool enableAutoStart;
            public bool enableAutoStop;
            public class monitorStreamClass {
                public bool enableMonitorStream;
            }
            public monitorStreamClass monitorStream = new monitorStreamClass();
        }
        public SnippetClass snippet = new SnippetClass();
        public StatusClass status = new StatusClass();
        public ContentDetailsClass contentDetails = new ContentDetailsClass();
    }

    public class LiveStreamRequest
    {
        public class cdnClass {
            public string format;
            public string resolution;
            public string frameRate;
            public string ingestionType;
        }
        public class snippetClass {
            public string title;
        }
        public cdnClass cdn = new cdnClass();
        public snippetClass snippet = new snippetClass();
    }

    public class LiveChatroomMessage
    {
        public class snippetClass {
            public class textMessageDetailsClass {
                public string messageText;
            }
            public string liveChatId;
            public string type;
            public textMessageDetailsClass textMessageDetails = new textMessageDetailsClass();
        }
        public snippetClass snippet = new snippetClass();
    }

    public Text     MessageBoard;
//    public TMP_Text MessageBoard;
    public TMP_Text StatusBoard;

    // YouTube Data API v3 service provider
    //danki
    // protected string CLIENT_ID = "346391490014-6lcoq910j5tj7gsiij3489iunihs5k2i.apps.googleusercontent.com";
    // protected string CLIENT_SECRET = "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";
    // protected string CLIENT_ID = "211576630707-rvuur8sre27b7nptvdqu0rime67aq6ts.apps.googleusercontent.com";
    // protected string CLIENT_SECRET = "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";
    // sean
    protected string CLIENT_ID = "517698240910-utvqvvben14bqc0g6keu67hhq45508lg.apps.googleusercontent.com";
    protected string CLIENT_SECRET = "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";

    protected JObject   authData1 = new JObject();
    protected JObject   authData2 = new JObject();
    protected JObject   m_youtubeLiveBroadcast = new JObject();
    protected JObject   youtubeLiveStream = new JObject();
    protected JObject   youtubeBinding = new JObject();
    protected bool      iAuthBlock = false;
    protected bool      m_bIsBroadcastTriggered = false;
    protected bool      m_bIsYouTubeAPIRequested = false;

    private float       m_fNextActionTime = 0.0f;
    private float       m_fPeriod = 0.1f;
    protected int       m_iMessageSentCounter = 0;
    protected float     m_preTime;
    // Start is called before the first frame update
    void Start()
    {
        //        PlayerPrefs.DeleteKey("Youtube_Auth_access_token");
        m_preTime = Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        float curTime = Time.time;
        float timeDiff = curTime - m_preTime;

        ////////////////////////////////////////
        // Wait for OAuth2 step 2 if the condition met.
        ////////////////////////////////////////

        // Youtube live broadcast button triggered.
        if (m_bIsBroadcastTriggered == true) {
            // we don't have cached OAuth2 access_token
            if (!PlayerPrefs.HasKey("Youtube_Auth_access_token")) {
                // OAuth step 1 completed.
                if (authData1["device_code"] != null && authData2["access_token"]==null)
                {
                    // OAuth step 2 request is not sent (or we got response).
                    if (iAuthBlock==false) {
                        StartCoroutine(apiOAuth2_Step2());
                    }
                }
            }
            // we have cached OAuth2 access_token, but not start YouTube live broadcast.
            else if (m_bIsYouTubeAPIRequested==false) 
                apiYouTubeCreateBroadcast();
            // if youtube broadcast created, fetch chatroom messages periodicly.
            else {
                if (timeDiff > 10.0)
                {
                    apiGetChatroomMessages();
                    m_preTime = curTime;
                }
            }
        }
    }

    public void DeAuthenticate()
    {
        StatusBoard.text = "Erease the key from device";
        if (PlayerPrefs.HasKey("Youtube_Auth_access_token"))
            PlayerPrefs.DeleteKey("Youtube_Auth_access_token");
    }

    public void StartYouTubeLiveBroadcast()
    {
        // prevent from duplicate calling
        if (m_bIsBroadcastTriggered==true)
            return;
        m_bIsBroadcastTriggered = true;

        // call OAuth2 authentication if we don't have cached OAuth2 access token.
        if (!PlayerPrefs.HasKey("Youtube_Auth_access_token")) {
            apiOAuth2_Step1();
        } else {
//            EditorUtility.DisplayDialog("We have Youtube Access token", PlayerPrefs.GetString("Youtube_Auth_access_token"), "Ok");
            StatusBoard.text = "Start YouTube Connection...";

            apiYouTubeCreateBroadcast();
        }
    }

    public void StopYouTubeLiveBroadcast()
    {
        // stop network connection.
        StatusBoard.text = "Stop YouTube Broadcast...";
        // reset the status flags.
        m_bIsYouTubeAPIRequested = false;
        m_bIsBroadcastTriggered = false;
    }

    void apiOAuth2_Step1()
    {
        // ##########################
        // Step 1
        // ##########################

        WWWForm form = new WWWForm();
        form.AddField("client_id", CLIENT_ID);
        form.AddField("client_secret", CLIENT_SECRET);
        form.AddField("scope", "https://www.googleapis.com/auth/youtube");

        RestClient.Post(new RequestHelper {
            Uri = "https://accounts.google.com/o/oauth2/device/code",
            FormData = form
        }).Then(response => {
            authData1 = JObject.Parse(response.Text);
//            EditorUtility.DisplayDialog("Open \""+authData1["verification_url"].ToString()+"\" and type the following code :\n", authData1["user_code"].ToString(), "Ok");
            StatusBoard.text = "Open \""+authData1["verification_url"].ToString()+"\", type the following code :\n"+authData1["user_code"].ToString();

        }).Catch(err => {
//            EditorUtility.DisplayDialog ("Error", err.Message, "Ok");
            StatusBoard.text = ("Error : "+err.Message);
        });
    }

    IEnumerator apiOAuth2_Step2()
    {
        // ##########################
        // Step 2
        // ##########################
        // wait 1 second
        yield return new WaitForSeconds(1);

        // check authData1["device_code"] exists
//        authData1["device_code"]

        WWWForm form = new WWWForm();
        form.AddField("client_id", CLIENT_ID);
        form.AddField("client_secret", CLIENT_SECRET);
        form.AddField("device_code", authData1["device_code"].ToString());
        form.AddField("grant_type", "urn:ietf:params:oauth:grant-type:device_code");
        iAuthBlock = true;

        RestClient.Post(new RequestHelper {
            Uri = "https://oauth2.googleapis.com/token",
            FormData = form
        }).Then(response => {
            authData2 = JObject.Parse(response.Text);
            if (authData2["access_token"] != null) {
//                EditorUtility.DisplayDialog("Auth complete", response.Text, "Ok");
                StatusBoard.text = ("Auth completed");
                // update player preferences
                PlayerPrefs.SetString("Youtube_Auth_access_token", authData2["access_token"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_refresh_token", authData2["refresh_token"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_token_type", authData2["token_type"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_scope", authData2["scope"].ToString());

                iAuthBlock = false;
            } else {
                Debug.Log("Request success : "+response.Text);
                iAuthBlock = false;
            }
        }).Catch(err => {
            Debug.Log("Error : "+err.Message);
            iAuthBlock = false;
        });
    }

    void apiOAuth2_Refresh()
    {
        // check access_token exists
        if (!PlayerPrefs.HasKey("Youtube_Auth_refresh_token")) {
            // no refresh_token, stop and erase the authentication data (require re-Auth again)
            if (PlayerPrefs.HasKey("Youtube_Auth_access_token")) {
                PlayerPrefs.DeleteKey("Youtube_Auth_access_token");
            }

            StopYouTubeLiveBroadcast();
            return;
        }

        WWWForm form = new WWWForm();
        form.AddField("client_id", CLIENT_ID);
        form.AddField("client_secret", CLIENT_SECRET);
        form.AddField("refresh_token", PlayerPrefs.GetString("Youtube_Auth_refresh_token"));
        form.AddField("grant_type", "refresh_token");

        RestClient.Post(new RequestHelper {
            Uri = "https://oauth2.googleapis.com/token",
            FormData = form
        }).Then(response => {
            authData2 = JObject.Parse(response.Text);
            if (authData2["access_token"] != null) {
//                EditorUtility.DisplayDialog("Auth complete", response.Text, "Ok");
                StatusBoard.text = "Auth refreshed";
                // update player preferences
                PlayerPrefs.SetString("Youtube_Auth_access_token", authData2["access_token"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_refresh_token", authData2["refresh_token"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_token_type", authData2["token_type"].ToString());
                PlayerPrefs.SetString("Youtube_Auth_scope", authData2["scope"].ToString());

                iAuthBlock = false;
            } else {
                Debug.Log("Request success : "+response.Text);
                iAuthBlock = false;
            }
        }).Catch(err => {
            Debug.Log("Error : "+err.Message);
            iAuthBlock = false;
        });
    }

    void apiYouTubeCreateBroadcast()
    {
        Debug.Log("starting apiYouTubeCreateBroadcast ");
        
        // check access_token exists
        if (!PlayerPrefs.HasKey("Youtube_Auth_refresh_token")) {
            return;
        }

        // prevent from duplicate calling
        if (m_bIsYouTubeAPIRequested==true)
            return;

        m_bIsYouTubeAPIRequested = true;

        /////////////////////////////////////////////
        // Always refresh token first
        /////////////////////////////////////////////

        WWWForm form = new WWWForm();
        form.AddField("client_id", CLIENT_ID);
        form.AddField("client_secret", CLIENT_SECRET);
        form.AddField("refresh_token", PlayerPrefs.GetString("Youtube_Auth_refresh_token"));
        form.AddField("grant_type", "refresh_token");

        RestClient.Post(new RequestHelper {
            Uri = "https://oauth2.googleapis.com/token",
            FormData = form
        }).Then(response => {
            Debug.Log("here1");
            authData2 = JObject.Parse(response.Text);
            Debug.Log("Refresh token success : "+response.Text);

            // update player preferences
            Debug.Log("here2");
            PlayerPrefs.SetString("Youtube_Auth_access_token", authData2["access_token"].ToString());
            PlayerPrefs.SetString("Youtube_Auth_token_type", authData2["token_type"].ToString());
            PlayerPrefs.SetString("Youtube_Auth_scope", authData2["scope"].ToString());

            /////////////////////////////////////////////
            // create a broadcase
            /////////////////////////////////////////////
            Debug.Log("here3");

            var requestBody = new LiveBroadcastRequest();
            requestBody.snippet.title = "live broadcast "+DateTime.Now.ToString("yyyyMMdd-HHmmss");
            requestBody.snippet.scheduledStartTime = DateTime.UtcNow.ToString("yyyy-MM-ddTHH\\:mm\\:ss.fffffffzzz");
            requestBody.status.privacyStatus = "unlisted";
            requestBody.contentDetails.enableAutoStart = true;
            requestBody.contentDetails.enableAutoStop = true;
            requestBody.contentDetails.monitorStream.enableMonitorStream = false;
            Debug.Log(JsonConvert.SerializeObject(requestBody));
            Debug.Log("here4");

            return RestClient.Post(new RequestHelper {
                Uri = "https://www.googleapis.com/youtube/v3/liveBroadcasts",
                Headers = new Dictionary<string, string> {
                    { "Authorization", PlayerPrefs.GetString("Youtube_Auth_token_type")+" "+PlayerPrefs.GetString("Youtube_Auth_access_token") },
                    {"Content-Type", "application/json"}
                },
                Params = new Dictionary<string, string> {
                    { "part", "snippet,status,contentDetails"}
                },
                BodyString = JsonConvert.SerializeObject(requestBody)
            });
        }).Then(response => {
            m_youtubeLiveBroadcast = JObject.Parse(response.Text);
            Debug.Log("Create broadcast success : "+response.Text);

            /////////////////////////////////////////////
            // create a stream
            /////////////////////////////////////////////

            var requestBody2 = new LiveStreamRequest();
//            requestBody2.snippet.title = "live stream "+DateTime.Now.ToString("yyyyMMdd-HHmmss");
            requestBody2.snippet.title = "live stream";
            requestBody2.cdn.format = "720p";
            requestBody2.cdn.resolution = "720p";
            requestBody2.cdn.frameRate = "30fps";
            requestBody2.cdn.ingestionType = "rtmp";
            Debug.Log(JsonConvert.SerializeObject(requestBody2));

            return RestClient.Post(new RequestHelper {
                Uri = "https://www.googleapis.com/youtube/v3/liveStreams",
                Headers = new Dictionary<string, string> {
                    { "Authorization", PlayerPrefs.GetString("Youtube_Auth_token_type")+" "+PlayerPrefs.GetString("Youtube_Auth_access_token") },
                    {"Content-Type", "application/json"}
                },
                Params = new Dictionary<string, string> {
                    { "part", "snippet,cdn"}
                },
                BodyString = JsonConvert.SerializeObject(requestBody2)
            });
        }).Then(response => {
            youtubeLiveStream = JObject.Parse(response.Text);
            Debug.Log("Create stream success : "+response.Text);

            /////////////////////////////////////////////
            // bind stream and broadcast
            /////////////////////////////////////////////

            return RestClient.Post(new RequestHelper {
                Uri = "https://www.googleapis.com/youtube/v3/liveBroadcasts/bind",
                Headers = new Dictionary<string, string> {
                    { "Authorization", PlayerPrefs.GetString("Youtube_Auth_token_type")+" "+PlayerPrefs.GetString("Youtube_Auth_access_token") },
                    {"Content-Type", "application/json"}
                },
                Params = new Dictionary<string, string> {
                    { "id", m_youtubeLiveBroadcast["id"].ToString()},
                    { "stream_id", youtubeLiveStream["id"].ToString()},
                    { "part", "snippet"},
                },
            });
        }).Then(response => {
            youtubeBinding = JObject.Parse(response.Text);
            Debug.Log("Binding success : "+response.Text);
            StatusBoard.text = "rtmp url : "+youtubeLiveStream["cdn"]["ingestionInfo"]["ingestionAddress"].ToString()+"/"+youtubeLiveStream["cdn"]["ingestionInfo"]["streamName"].ToString()+"\n直播 url : "+"https://youtu.be/"+m_youtubeLiveBroadcast["id"].ToString();
            //StatusBoard.text = "\n直播 url : "+"https://youtu.be/"+m_youtubeLiveBroadcast["id"].ToString();
            server_url= youtubeLiveStream["cdn"]["ingestionInfo"]["ingestionAddress"].ToString()+"/"+youtubeLiveStream["cdn"]["ingestionInfo"]["streamName"].ToString();
            Debug.Log("\n直播 url : "+"https://youtu.be/"+m_youtubeLiveBroadcast["id"].ToString());
            Debug.Log("rtmp url :" + server_url);
        }).Catch(err => {
            Debug.Log("Error : "+err.Message);
        });
    }

    protected void apiGetChatroomMessages()
    {
        if (youtubeBinding == null)
            return;
        if (youtubeBinding["snippet"] == null)
            return;
        if (youtubeBinding["snippet"]["liveChatId"] == null)
            return;

        Debug.Log("apiGetChatroomMessages start...");
        /////////////////////////////////////////////
        // get chatroom messages
        /////////////////////////////////////////////

        RestClient.Get(new RequestHelper {
            Uri = "https://www.googleapis.com/youtube/v3/liveChat/messages",
            Headers = new Dictionary<string, string> {
                { "Authorization", PlayerPrefs.GetString("Youtube_Auth_token_type")+" "+PlayerPrefs.GetString("Youtube_Auth_access_token") },
                {"Content-Type", "application/json"}
            },
            Params = new Dictionary<string, string> {
                { "liveChatId", youtubeBinding["snippet"]["liveChatId"].ToString()},
                { "part", "id,snippet,authorDetails"}
            },
        }).Then(response => {
            JObject chatMessages = JObject.Parse(response.Text);
            string sOneMessage = "";
            foreach (var item in chatMessages["items"]) {
                sOneMessage += item["snippet"]["publishedAt"].ToString()+" : ";
                sOneMessage += item["authorDetails"]["displayName"].ToString()+" : ";
                sOneMessage += item["snippet"]["displayMessage"].ToString();
                sOneMessage += "\n";
            }
            MessageBoard.text = sOneMessage;
        }).Catch(err => {
            Debug.Log("Error : "+err.Message);
        });
    }

    public void apiPostChatroomMessages(string sMessage)
    {
        if (youtubeBinding == null)
            return;
        if (youtubeBinding["snippet"] == null)
            return;
        if (youtubeBinding["snippet"]["liveChatId"] == null)
            return;

        /////////////////////////////////////////////
        // get chatroom messages
        /////////////////////////////////////////////

        var chatMessage = new LiveChatroomMessage();
        chatMessage.snippet.liveChatId = youtubeBinding["snippet"]["liveChatId"].ToString();
        chatMessage.snippet.type = "textMessageEvent";
        chatMessage.snippet.textMessageDetails.messageText = sMessage;

        RestClient.Post(new RequestHelper {
            Uri = "https://www.googleapis.com/youtube/v3/liveChat/messages",
            Headers = new Dictionary<string, string> {
                { "Authorization", PlayerPrefs.GetString("Youtube_Auth_token_type")+" "+PlayerPrefs.GetString("Youtube_Auth_access_token") },
                {"Content-Type", "application/json"}
            },
            Params = new Dictionary<string, string> {
                { "part", "snippet"}
            },
                BodyString = JsonConvert.SerializeObject(chatMessage)
        }).Then(response => {
            JObject chatMessages = JObject.Parse(response.Text);
            MessageBoard.text = "";
            foreach (var item in chatMessages["items"]) {
                string sOneMessage = "";
                sOneMessage += item["snippet"]["publishedAt"].ToString();
                sOneMessage += " : "+item["authorDetails"]["displayName"].ToString();
                sOneMessage += " : "+item["snippet"]["displayMessage"].ToString();
            }
        }).Catch(err => {
            Debug.Log("Error : "+err.Message);
        });
    }
}
