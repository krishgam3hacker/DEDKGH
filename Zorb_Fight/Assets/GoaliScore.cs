using Game;
using GameFramework.Core.Data;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoaliScore : MonoBehaviour
{
    [SerializeField] private GameObject GM;
    private GameManager1 gameManager;
    [SerializeField] private ScoreManager scoreManager;

    private bool goalScored = false;

    public float respawnDelay = 5f;


    private void Start()
    {
        GM = GameObject.FindGameObjectWithTag("GameController");
        goalScored = false;
        gameManager = GM.GetComponent<GameManager1>();

        if (scoreManager == null)
        {
            GM = GameObject.FindGameObjectWithTag("GameController");
            scoreManager = GM.GetComponent<ScoreManager>();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
            // Increment the score for the  team
            if (other.gameObject.name == "RedGoalPost")
            {
                scoreManager.IncrementScore("Blue");
                goalScored = true;

            }
            else if (other.gameObject.name == "BlueGoalPost")
            {
                scoreManager.IncrementScore("Red");
                goalScored = true;

            }
        
    }

    private void LateUpdate()
    {

        if(goalScored == true)
        {
            Debug.Log("Goal Scored and trigger event for Reset");
            gameManager.RespawnBallAndPlayers(respawnDelay);

            //isntantiate particle system 

            //wait and destroy after particle
            Destroy(this.gameObject);

        }



        if (scoreManager == null)
        {
            GM = GameObject.FindGameObjectWithTag("GameController");
            scoreManager = GM.GetComponent<ScoreManager>();
        }
    }

}
