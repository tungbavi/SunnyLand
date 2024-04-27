using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spin : MonoBehaviour
{
    public int speed;
    public bool clockwise;
    void Update()
    {
        if (clockwise)
        {
            transform.Rotate(Vector3.forward, Time.deltaTime * speed);
        }
        else
        {
            transform.Rotate(Vector3.back, Time.deltaTime * speed);
        }
    }
}
