using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;


public class PlayGames : MonoBehaviour
{
    [SerializeField] public Text playerScore;
    [SerializeField]  string leaderboardID = "CgkImKyWv7EFEAIQAg";
   [SerializeField] string achievementID = "CgkImKyWv7EFEAIQAw";
    public static PlayGamesPlatform platform;

    void awake()
    {
        if (platform == null)
        {
            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;
            platform = PlayGamesPlatform.Activate();
        }

        Social.Active.localUser.Authenticate(success =>
        {
            if (success)
            {
                Debug.Log("Logged in successfully");
            }
            else
            {
                Debug.Log("Login Failed");
            }
        });
        UnlockAchievement();
    }

    public void AddScoreToLeaderboard()
    {
        if (Social.Active.localUser.authenticated)
        {
            Social.ReportScore(int.Parse(playerScore.text), leaderboardID, success => { });
        }
    }

    public void OnShowLeaderBoard()
    {
        //        Social.ShowLeaderboardUI (); // Show all leaderboard
        ((PlayGamesPlatform)Social.Active).ShowLeaderboardUI(leaderboardID); // Show current (Active) leaderboard
    }



    public void ShowLeaderboard()
    {
        if (Social.Active.localUser.authenticated)
        {
            platform.ShowLeaderboardUI();
        }
        platform.ShowLeaderboardUI();
        Social.ShowLeaderboardUI();
    }

    public void ShowAchievements()
    {
        Social.ShowAchievementsUI();


       /* if (Social.Active.localUser.authenticated)
        {
            platform.ShowAchievementsUI();
        }
       */
    }

    public void UnlockAchievement()
    {
        if (Social.Active.localUser.authenticated)
        {
            Social.ReportProgress(achievementID, 100f, success => {


                if (success)
                {
                    Debug.Log("successfully unlocked achievemnts");
                }
                else
                {

                    Debug.Log("no achivemnet for u nooob");

                }




            });
        }
    }
}