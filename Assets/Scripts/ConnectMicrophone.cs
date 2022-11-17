/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectMicrophone : MonoBehaviour
{
    // Start is called before the first frame update
    AudioSource audioSource;
    void Start()
    {
        Debug.Log("outputSampleRate: " + AudioSettings.outputSampleRate);
        Debug.Log("Microphone devices");

        foreach (var device in Microphone.devices)
        {
            Debug.Log("Name: " + device);
            Microphone.GetDeviceCaps(device, out int minFreq, out int maxFreq);
            Debug.Log("minFreq: " + minFreq);
            Debug.Log("maxFreq: " + maxFreq);
        }
        audioSource = GetComponent<AudioSource>();
        //audioSource.clip = Microphone.Start("Headset Microphone (Oculus Virtual Audio Device)", true, 1000, AudioSettings.outputSampleRate);
        //audioSource.clip = Microphone.Start("���J�� (Realtek(R) Audio)", true, 1000, AudioSettings.outputSampleRate);
        audioSource.clip = Microphone.Start(null, true, 120, AudioSettings.outputSampleRate);
        audioSource.Play();
    }

    // Update is called once per frame
    void Update()
    {
        if (!audioSource.isPlaying)
        {
            audioSource.clip = Microphone.Start(null, true, 60, AudioSettings.outputSampleRate);
            audioSource.Play();
        }
    }
}*/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectMicrophone : MonoBehaviour
{
    // Start is called before the first frame update
    AudioSource audioSource;
    void Start()
    {
        Debug.Log("outputSampleRate: " + AudioSettings.outputSampleRate);
        Debug.Log("Microphone devices");

        foreach (var device in Microphone.devices)
        {
            Microphone.GetDeviceCaps(device, out int minFreq, out int maxFreq);
            Debug.Log("Name: " + device+"     (min/max freq. : "+minFreq+"/"+maxFreq+")");
        }
        audioSource = GetComponent<AudioSource>();
        //audioSource.clip = Microphone.Start("Headset Microphone (Oculus Virtual Audio Device)", true, 1000, AudioSettings.outputSampleRate);
        //audioSource.clip = Microphone.Start("���J�� (Realtek(R) Audio)", true, 1000, AudioSettings.outputSampleRate);
        audioSource.clip = Microphone.Start(Microphone.devices[0], true, 10, 16000);
        GetComponent<AudioSource>().loop = true;
        Debug.Log("WebRTC Microphone Recording...");
        while (!(Microphone.GetPosition(null)>0)) {}
        audioSource.Play();
        Debug.Log("WebRTC Microphone Playing...");
    }

    // Update is called once per frame
    void Update()
    {
        if (!audioSource.isPlaying)
        {
//            audioSource.clip = Microphone.Start(Microphone.devices[1], true, 10, AudioSettings.outputSampleRate);
            audioSource.clip = Microphone.Start(Microphone.devices[0], true, 10, 16000);
            GetComponent<AudioSource>().loop = true;
            Debug.Log("WebRTC Microphone Recording...");
            while (!(Microphone.GetPosition(null)>0)) {}
            audioSource.Play();
            Debug.Log("WebRTC Microphone Playing...");
        }
    }
}
