using UnityEngine;

public class GoalDetector : MonoBehaviour
{
    public ScoreManager scoreManager;
    public GameObject ballPrefab;
    public GameObject redPlayer;
    public GameObject bluePlayer;
    public Transform redPlayerSpawnPoint;
    public Transform bluePlayerSpawnPoint;
    public Transform ballSpawnPoint;

   



  /*  private void RespawnBallAndPlayers(float respawnDelay)
    {

        Debug.Log("Scene Restart");



       *//* // Respawn the ball and players after a delay
        Invoke("RespawnBall", respawnDelay);
        Invoke("RespawnPlayers", respawnDelay);*//*
    }*/

    private void RespawnBall()
    {
        // Instantiate a new ball at the spawn point
        GameObject ball = Instantiate(ballPrefab, ballSpawnPoint.position, Quaternion.identity);

        // Reset the velocity of the ball
        ball.GetComponent<Rigidbody>().velocity = Vector3.zero;
        ball.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
    }

    private void RespawnPlayers()
    {
        // Respawn the players at their respective spawn points
        redPlayer.transform.position = redPlayerSpawnPoint.position;
        bluePlayer.transform.position = bluePlayerSpawnPoint.position;
    }
}
