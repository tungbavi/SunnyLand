using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PlayerName : MonoBehaviour
{
   
    public string nameofplayer;
    public Text loadedname;
    public Text scoretext;
    void Update()
    {

        if (PlayerController.score >= PlayerPrefs.GetInt("highscore", 0))
        {
            PlayerPrefs.SetInt("highscore", PlayerController.score);
            scoretext.text = "High Score: " + PlayerController.score.ToString();
        }
        else scoretext.text = "Score: " + PlayerController.score.ToString();
        nameofplayer = PlayerPrefs.GetString("name", "none");
        loadedname.text = nameofplayer;
    }
    public void playagain()
    {
        SceneManager.LoadScene("MainMenu");
        PlayerController.score = 0;
    }
    public void menu()
    {
        PlayerController.score = 0;
        SceneManager.LoadScene("StartGame");
    }

}
