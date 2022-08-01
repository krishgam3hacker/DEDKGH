using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Score : MonoBehaviour
{
    public static int scoreval = 0;
    public Text score;
    public Text highscore;
    public string HighScore;
    PlayGames pg;

    // Start is called before the first frame update
    void Start()
    {
        pg = GetComponent<PlayGames>();
        scoreval = 0;


        highscore.text = PlayerPrefs.GetInt(HighScore, 0).ToString();
        updatehighscore();

    }

    // Update is called once per frame
    void Update()
    {
        score.text = "" + scoreval;
        
        if ( scoreval > PlayerPrefs.GetInt(HighScore, 0))
        {

        PlayerPrefs.SetInt(HighScore, scoreval);
            highscore.text = scoreval.ToString();
            
        }

       

    }

    public void updatehighscore()
    {
        highscore.text = pg.playerScore.text;
        pg.AddScoreToLeaderboard();
        

    }
}
