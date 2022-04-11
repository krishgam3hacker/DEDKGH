using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PatrolController : MonoBehaviour
{
    public Animator enemyanim;

    private void OnTriggerEnter2D(Collider2D other)
    {

        if (other.CompareTag("Player"))
        {
            Debug.Log("Player entered area now follwoing");
            enemyanim.SetBool("isPatrolling", false);
            enemyanim.SetBool("isFollowing", true);
        }
         
    }

    void OnTriggerExit2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            Debug.Log("Exited area , no follow only patrol");
            enemyanim.SetBool("isPatrolling", true);
            enemyanim.SetBool("isFollowing", false);

        }
    }
    
       
}
