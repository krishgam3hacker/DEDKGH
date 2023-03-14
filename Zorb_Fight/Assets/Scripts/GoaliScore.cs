using Game;
using GameFramework.Core.Data;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using static UnityEngine.ParticleSystem;

public class GoaliScore : MonoBehaviour
{
    [SerializeField] private GameObject GM;
    private GameManager1 gameManager;
    [SerializeField] private ScoreManager scoreManager;


    [SerializeField] private GameObject particleSystemPrefabRed;
    [SerializeField] private GameObject particleSystemPrefabBlue;
    [SerializeField] private float particleDuration = 3f;

    [SerializeField] private GameObject redGoal;
    [SerializeField] private GameObject blueGoal;

    private bool goalScored = false;

    public float respawnDelays = 15f;


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

        redGoal = GameObject.FindGameObjectWithTag("RedGoalPost");
        blueGoal = GameObject.FindGameObjectWithTag("BlueGoalPost");
    }

    private void OnTriggerEnter(Collider other)
    {
            // Increment the score for the  team
            if (other.gameObject.name == "RedGoalPost")
            {

            scoreManager.IncrementScore("Blue");
            goalScored = true;

            GameObject particles = Instantiate(particleSystemPrefabRed, redGoal.transform.position, Quaternion.identity);
            Destroy(particles, particleDuration);

            }
            else if (other.gameObject.name == "BlueGoalPost")
            {

            scoreManager.IncrementScore("Red");
            goalScored = true;

            GameObject particles = Instantiate(particleSystemPrefabBlue, blueGoal.transform.position, Quaternion.identity);
            Destroy(particles, particleDuration);

        }
        
    }

    private void LateUpdate()
    {

        if(goalScored == true)
        {
            Debug.Log("Goal Scored and trigger event for Reset");

            gameManager.RespawnBallAndPlayers(respawnDelays);

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
