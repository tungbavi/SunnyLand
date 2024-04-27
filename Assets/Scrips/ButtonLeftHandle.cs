using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonLeftHandle : MonoBehaviour,IPointerDownHandler,IPointerUpHandler
{
    public void OnPointerDown(PointerEventData eventData)
    {
        StartCoroutine(DelayToMovingFalse());
    }
    
    public void OnPointerUp(PointerEventData eventData)
    {
        StopCoroutine(DelayToMovingFalse());
        PlayerController.instance.moveLeft = false;
        Debug.Log("abc");
    }
    
    IEnumerator DelayToMovingFalse()
    {
        PlayerController.instance.moveLeft = true;
        while (PlayerController.instance.moveLeft)
        {
            yield return null;
        }
    }
}
