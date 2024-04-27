using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class ButtonRightHandle : MonoBehaviour ,IPointerDownHandler,IPointerUpHandler
{
    public void OnPointerDown(PointerEventData eventData)
    {
        StartCoroutine(DelayToMovingFalse());
    }
    
    public void OnPointerUp(PointerEventData eventData)
    {
        StopCoroutine(DelayToMovingFalse());
        PlayerController.instance.moveRight = false;
        Debug.Log("abc");
    }
    
    IEnumerator DelayToMovingFalse()
    {
        PlayerController.instance.moveRight = true;
        while (PlayerController.instance.moveRight)
        {
            yield return null;
        }
    }
}
