using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScoreManager : MonoBehaviour
{
    public int redScore;
    public int blueScore;

    public float timeLimit = 60f; // The time limit for the timer
    public TextMeshProUGUI timerText; // The Text component to display the timer
    private GameObject MT;

    private float currentTime; // The current time remaining on the timer

    private void Start()
    {
        currentTime = timeLimit;
    }


    private void Update()
    {

        if(timerText == null)
        {
            MT = GameObject.FindGameObjectWithTag("MatchTimer");
            timerText = MT.GetComponent<TextMeshProUGUI>();
        }


        // Update the timer and display the time remaining
        currentTime -= Time.deltaTime;
        int seconds = (int)currentTime % 60;
        int minutes = (int)currentTime / 60;
        timerText.text = minutes.ToString("00") + ":" + seconds.ToString("00");

        // If the timer runs out, stop the timer and do something (e.g. end the game)
        if (currentTime <= 0f)
        {
            currentTime = 0f;
            OnTimerEnd();
        }
    }

    private void OnTimerEnd()
    {
        // Do something when the timer runs out (e.g. end the game)
        Debug.Log("Time's up!");
        SceneManager.LoadScene("Test");
    }

    public void IncrementScore(string team)
    {
        if (team == "Red")
        {
            redScore++;
        }
        else if (team == "Blue")
        {
            blueScore++;
        }
    }

    public void ResetScore()
    {
        redScore = 0;
        blueScore = 0;
    }



}
