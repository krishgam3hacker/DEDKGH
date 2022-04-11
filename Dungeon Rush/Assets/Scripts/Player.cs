using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    
    public Camera cam;
    private Rigidbody2D myRB;
    private Animator myAnim;
   
    


    [SerializeField]
    private float speed;

   

    /*
        private float attackTime = .34f;
        private float attackCounter = .25f;

        private bool isAttacking;
    */


    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        myRB = GetComponent<Rigidbody2D>();
        myAnim = GetComponent<Animator>();
      
    }
  

    
    // Update is called once per frame
    void FixedUpdate()
    {
        myRB.velocity = new Vector2(Input.GetAxisRaw("Horizontal"), Input.GetAxisRaw("Vertical")).normalized*speed * Time.deltaTime;

        myAnim.SetFloat("MoveX", myRB.velocity.x);
        myAnim.SetFloat("MoveY", myRB.velocity.y);

        if(Input.GetAxisRaw("Horizontal") == 1 || Input.GetAxisRaw("Horizontal") == -1 || Input.GetAxisRaw("Vertical") ==1 || Input.GetAxisRaw("Vertical") == -1)
        {
            myAnim.SetFloat("LastMoveX", Input.GetAxisRaw("Horizontal"));
            myAnim.SetFloat("LastMoveY", Input.GetAxisRaw("Vertical"));
        }
     
}
   public Vector3 GetPosition()
    {
        return transform.position;
    }



    
}
