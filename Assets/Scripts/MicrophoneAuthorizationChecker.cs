using System.Collections;
using System.Linq;
using UnityEngine;

public class MicrophoneAuthorizationChecker : MonoBehaviour
{
    private IEnumerator Start()
    {
        // �ˬd�O�_�����J���v���A�_�h���X�v���ШD
        Debug.Log("Microphone Authorization : "+ Application.HasUserAuthorization(UserAuthorization.Microphone));
        yield return Application.RequestUserAuthorization(UserAuthorization.Microphone);
        /*
        if (!Application.HasUserAuthorization(UserAuthorization.Microphone))
        {
            yield return Application.RequestUserAuthorization(UserAuthorization.Microphone);
        }

        // �A���ˬd�A�p���M�L�v���h�N�C������
        if (Application.HasUserAuthorization(UserAuthorization.Microphone))
        {
            Debug.Log("Device: " + Microphone.devices.Select(x => x.ToString()));
        }
        else
        {
            Application.Quit();
        }*/
    }
}