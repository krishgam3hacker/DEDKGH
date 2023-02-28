using UnityEngine;

public class BallScorer : MonoBehaviour
{
    public ScoreManager scoreManager;
    public string redGoalTag = "RedGoal";
    public string blueGoalTag = "BlueGoal";

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("RedGoal") || other.CompareTag("BlueGoal"))
        {
            scoreManager.UpdateScore(other.tag);
        }
    }
  
}

