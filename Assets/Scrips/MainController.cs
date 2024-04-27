using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MainController : MonoBehaviour
{
    public string nameofplayer;
    public Text loadedname;


    void Update()
    {
        nameofplayer = PlayerPrefs.GetString("name", "none");
        loadedname.text = nameofplayer;
    }
    
    public void loadgame()
    {
        SceneManager.LoadScene("SampleScene");
    }
    
    public void loadgame2()
    {
        SceneManager.LoadScene("level2");
    }
    public void loadgame3()
    {
        SceneManager.LoadScene("level3");
    }
    public void loadgame4()
    {
        SceneManager.LoadScene("level4");
    }
    public void back()
    {
        SceneManager.LoadScene("StartGame");
    }
}
