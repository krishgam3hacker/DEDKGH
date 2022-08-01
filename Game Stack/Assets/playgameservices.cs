using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;

public class playgameservices : MonoBehaviour
{
    
    [SerializeField] Text debugtext;
    [SerializeField] Text signtext;
    [SerializeField] Text playtext;

    [SerializeField] InputField leaderboard;



    // Start is called before the first frame update
    void Start()
    {
        Initialize();
        Invoke("signinuserwithplaygames", 3f);
        Debug.Log("start done");
        signinuserwithplaygames();
    }
    private void Initialize()
    {
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().EnableSavedGames().RequestEmail().RequestIdToken().Build();

        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
        //newtut
        Social.localUser.Authenticate((bool success) => { 
        
        if (success == true)
            {
                Debug.Log("logged in");
            }
            else
            {

                Debug.LogError("unable to sign in");

            }
        
        
        
        
        });



        debugtext.text = "playgame Initialized";
       
        
    }
    void signinuserwithplaygames()
    {
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptOnce, (success) =>
        {
            switch (success)
            {
                case SignInStatus.Success:
                    signtext.text = "signed in player using play games successfully";
                    break;
                default:
                    signtext.text = "Sign in not Succesfull";
                    break;
            }
        });
        Debug.Log("code run done sign in");
    }

    public void postscoretoleaderboard()
    {
        Social.ReportScore(int.Parse(leaderboard.text), "CgkImKyWv7EFEAIQAg",(bool success)=> 
        {
            if (success)
            {
                debugtext.text = "successfully add score to leaderboard";
            }
            else
            {
                debugtext.text = "not successfull";
            }
        
        
        });
    }


    public void showeleaderboard()
    {
        Social.ShowLeaderboardUI();

    }


    public void achievmentcompleted()
    {
        Social.ReportProgress("CgkImKyWv7EFEAIQAw",100.0f,(bool success)=> {

            if (success)
            {
                debugtext.text = "successfully unlocked achievemnts";
            }
            else
            {

                debugtext.text = "not successful";

            }
        
        
        
        
        });
    }

    public void ShowAchievementsUI()
    {

        Social.ShowAchievementsUI();

    }





    // Update is called once per frame
    void Update()
    {
        
    }
    
}
