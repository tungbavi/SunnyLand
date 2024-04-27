using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public Transform target;
    Vector3 offset;

    private float smoothing = 5f;

    void Start()
    {
        offset = new Vector3(0.3f, 0.3f, transform.position.z);
        transform.position = target.position + offset;
    }
    void FixedUpdate()
    {
        Vector3 tagetCamPos = target.position + offset;
        transform.position = Vector3.Lerp(transform.position, tagetCamPos, smoothing * Time.deltaTime);
        

    }
}
