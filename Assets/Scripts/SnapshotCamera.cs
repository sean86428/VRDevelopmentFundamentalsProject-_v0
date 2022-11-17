using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnapshotCamera : MonoBehaviour
{

    Camera snapCam;
    // Start is called before the first frame update

    int resWidth = 256;
    int resHeight = 256;

    Texture2D snapshot;

    void Awake()
    {
        snapCam = GetComponent<Camera>();
        if(snapCam.targetTexture == null)
        {
            snapCam.targetTexture = new RenderTexture(resWidth, resHeight, 24);
        }
        else
        {
            resWidth = snapCam.targetTexture.width;
            resHeight = snapCam.targetTexture.height;
        }
        //snapCam.gameObject.SetActive(false);
        snapshot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
    }

    void Update()
    {
        snapCam.Render();
        RenderTexture.active = snapCam.targetTexture;
        snapshot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
        string headerStr = string.Format("P6\n{0} {1}\n255\n", resWidth, resHeight);
        Debug.Log("Snapshot");
        //byte[] fileHeader = System.Text.Encoding.ASCII.GetBytes(headerStr);
        //byte[] bytes = snapshot.GetRawTextureData();
        //string fileName = string.Format("{0}/Snapshots/test.png", Application.dataPath);
        //System.IO.File.WriteAllBytes(fileName, bytes);
        /**/
        //Debug.Log("Snapshot taken !");
    }

    // Update is called once per frame
    /*
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            CallTakeSnapshot();
        }
    }

    public void CallTakeSnapshot()
    {
        snapCam.gameObject.SetActive(true);
    }

    void LateUpdate()
    {
        if (snapCam.gameObject.activeInHierarchy)
        {
            Texture2D snapshot = new Texture2D(resWidth, resHeight, TextureFormat.RGB24, false);
            snapCam.Render();
            RenderTexture.active = snapCam.targetTexture;
            snapshot.ReadPixels(new Rect(0, 0, resWidth, resHeight), 0, 0);
            byte[] bytes = snapshot.EncodeToPNG();
            string fileName = string.Format("{0}/Snapshots/test.png",Application.dataPath);
            System.IO.File.WriteAllBytes(fileName, bytes);
            Debug.Log("Snapshot taken !");
            snapCam.gameObject.SetActive(false);
        }    
    }
   */
}
