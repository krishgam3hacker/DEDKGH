using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoaliScore : MonoBehaviour
{
    private GameObject GM;
    [SerializeField] private ScoreManager scoreManager;

    private bool goalScored = false;
    public float respawnDelay = 3f;

    private void Start()
    {
        if(scoreManager == null)
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
    }
    private void OnTriggerEnter(Collider other)
    {
            // Increment the score for the appropriate team
            if (other.gameObject.name == "RedGoalPost")
            {
                scoreManager.IncrementScore("Blue");
                goalScored = true;
            RespawnBallAndPlayers(respawnDelay);
        }
            else if (other.gameObject.name == "BlueGoalPost")
            {
                scoreManager.IncrementScore("Red");
                goalScored = true;
                RespawnBallAndPlayers(respawnDelay);
            }
        
    }

    private void RespawnBallAndPlayers(float respawnDelay)
    {

        Debug.Log("Scene Restart");

        SceneManager.LoadScene("Enviornment_testField");

    }

}
