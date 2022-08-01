using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallControl : MonoBehaviour
{
    public float power;
    private int sign = 1;
    private Rigidbody2D Body;
    private bool st;
    private SpriteRenderer mySpriteRenderer;
    void Awake()
    {
        Body = GetComponent<Rigidbody2D>();
        
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            sign *= -1;
            st = !st;
        }
        Body.AddForce(transform.right*sign*power); //flip

        GetComponent<SpriteRenderer>().flipX = st;

    }

}
