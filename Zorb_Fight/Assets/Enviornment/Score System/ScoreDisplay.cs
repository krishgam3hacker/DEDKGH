using UnityEngine;
using TMPro;

public class ScoreDisplay : MonoBehaviour
{
    public ScoreManager scoreManager;
    public TextMeshProUGUI redScoreText;
    public TextMeshProUGUI blueScoreText;

    private void Update()
    {
        // Update the score display with the current scores
        redScoreText.text = "Red: " + scoreManager.redScore;
        blueScoreText.text = "Blue: " + scoreManager.blueScore;
    }
}
