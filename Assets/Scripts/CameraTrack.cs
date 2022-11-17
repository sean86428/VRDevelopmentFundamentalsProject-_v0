using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.WebRTC;

public class CameraTrack : MonoBehaviour
{
    private void Awake()
    {
        // Initialize WebRTC
        WebRTC.Initialize();
        // Create a track from the Camera
        var camera = GetComponent<Camera>();
        var track = camera.CaptureStreamTrack(1280, 720, 0);
        Debug.Log(track);
    }
}
