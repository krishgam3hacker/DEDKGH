using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Patroll : MonoBehaviour
{
    public float speed;
    private float waitTime;
    public float startWaitTime;

    public Transform[] patrolPoints;
    private int randomSpot;
    //public float minX;
    //public float maxX;
    //public float minY;
    //public float maxY;

    void Start()
    {
         waitTime = startWaitTime;
        //  patrolPoints.position = new Vector2(Random.Range(minX, maxX), Random.Range(minY, maxY));
        randomSpot = Random.Range(0, patrolPoints.Length);
    }

     void Update()
    {
        transform.position = Vector2.MoveTowards(transform.position, patrolPoints[randomSpot].position, speed * Time.deltaTime);

        if(Vector2.Distance(transform.position, patrolPoints[randomSpot].position) < 0.2f)
        {
            if(waitTime <= 0)
            {
                randomSpot = Random.Range(0, patrolPoints.Length);
                // patrolPoints.position = new Vector2(Random.Range(minX, maxX), Random.Range(minY, maxY));
                waitTime = startWaitTime;
            }
            else
            {
                waitTime -= Time.deltaTime;
            }
        }

    }


}
