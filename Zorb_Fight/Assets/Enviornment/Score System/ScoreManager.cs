using UnityEngine;

public class ScoreManager : MonoBehaviour
{
    public int redScore;
    public int blueScore;

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
