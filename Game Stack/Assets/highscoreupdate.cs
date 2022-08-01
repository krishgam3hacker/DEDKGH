using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class highscoreupdate : MonoBehaviour
{

    public Text highscore;
    public string HighScore;
    PlayGames pg;
    
    void Start()
    {
        pg = GetComponent<PlayGames>();
        highscore.text = PlayerPrefs.GetInt(HighScore, 0).ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void updatehighscore()
    {
        highscore.text = pg.playerScore.text;
        pg.AddScoreToLeaderboard();
        pg.ShowLeaderboard();

    }
}
