using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PatrolBehaviour : StateMachineBehaviour
{
    private Patroll patrol;
    public float speed;
    private int randomSpot;
   
    



    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {

        patrol = GameObject.FindGameObjectWithTag("PatrolSpots").GetComponent<Patroll>();
        randomSpot = Random.Range(0, patrol.patrolPoints.Length);

       
        
    }

    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
     override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
      {
          if (Vector2.Distance(animator.transform.position, patrol.patrolPoints[randomSpot].position) > 0.2f)
          {
              animator.transform.position = Vector2.MoveTowards(animator.transform.position, patrol.patrolPoints[randomSpot].position, speed * Time.deltaTime);
          }
          else
          {
              randomSpot = Random.Range(0, patrol.patrolPoints.Length);
          }

       

        if (Input.GetKeyDown(KeyCode.Space))
          {
              animator.SetBool("isPatrolling", false);
          }
      }
    
    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    //  override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //  {

    //  }

    // OnStateMove is called right after Animator.OnAnimatorMove()
    //override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that processes and affects root motion
    //}

    // OnStateIK is called right after Animator.OnAnimatorIK()
    //override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    // Implement code that sets up animation IK (inverse kinematics)
    //}
}
