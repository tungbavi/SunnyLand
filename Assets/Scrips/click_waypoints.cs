using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class click_waypoints : MonoBehaviour
{
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.tag =="Player")
        {
            waypoint_start.check=true;
        }
        

    }
}
