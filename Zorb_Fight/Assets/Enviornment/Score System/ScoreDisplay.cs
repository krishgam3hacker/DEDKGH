using UnityEngine;
using TMPro;

public class ScoreDisplay : MonoBehaviour
{
    [SerializeField] private GameObject GM;
    public ScoreManager scoreManager;
    public TextMeshProUGUI redScoreText;
    public TextMeshProUGUI blueScoreText;


    private void Start()
    {
        if (scoreManager == null)
        {
            GM = GameObject.FindGameObjectWithTag("GameController");
            scoreManager = GM.GetComponent<ScoreManager>();
        }

    }
    private void FixedUpdate()
    {
        if (scoreManager == null)
        {
            GM = GameObject.FindGameObjectWithTag("GameController");
            scoreManager = GM.GetComponent<ScoreManager>();
        }
        // Update the score display with the current scores
        redScoreText.text = "" + scoreManager.redScore;
        blueScoreText.text = "" + scoreManager.blueScore;
    }
}
