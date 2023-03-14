using UnityEngine;
using UnityEngine.SceneManagement;

public class GoalTrigger : MonoBehaviour
{
    public GameObject ball;
    public ScoreManager scoreManager;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject == ball)
        {
            // Increment the score for the team that scored
            if (gameObject.tag == "RedGoal")
            {
                scoreManager.IncrementScore("Blue");
            }
            else if (gameObject.tag == "BlueGoal")
            {
                scoreManager.IncrementScore("Red");
            }

            // Destroy the ball and reset the scene
            Destroy(ball);
        }
    }
}
