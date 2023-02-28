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
    public float respawnDelay = 2f;

    private bool goalScored = false;

    private void OnTriggerEnter(Collider other)
    {
        // Check if the ball collided with a goal post
        if (other.gameObject.CompareTag("GoalPost"))
        {
            // Increment the score for the appropriate team
            if (other.gameObject.name == "RedGoalPost")
            {
                scoreManager.IncrementScore("Blue");
                goalScored = true;
                Invoke("RespawnBallAndPlayers", respawnDelay);
            }
            else if (other.gameObject.name == "BlueGoalPost")
            {
                scoreManager.IncrementScore("Red");
                goalScored = true;
                Invoke("RespawnBallAndPlayers", respawnDelay);
            }
        }
    }

    private void RespawnBallAndPlayers()
    {
        // Respawn the ball and players after a delay
        Invoke("RespawnBall", respawnDelay);
        Invoke("RespawnPlayers", respawnDelay);
    }

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
