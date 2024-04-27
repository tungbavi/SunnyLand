using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class InputName : MonoBehaviour
{
    public string savename;
    public Text inputtext;
   
    // Update is called once per frame
   
    public void setname()
    {
         savename = inputtext.text;
         PlayerPrefs.SetString("name", savename);
         SceneManager.LoadScene("MainMenu");
    }
    

}
