using UnityEngine;
using System.Collections;

public class RotateObject : MonoBehaviour
{

    public Vector3 RotateAmount;  // degrees per second to rotate in each axis. Set in inspector.
    // Update is called once per frame
    void Update()
    {
        RotateAmount.x = 25;
        transform.Rotate(RotateAmount * Time.deltaTime);
    }
}