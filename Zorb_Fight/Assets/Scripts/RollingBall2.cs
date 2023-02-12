using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class RollingBall2 : MonoBehaviour
{
    public float speed = 10.0f; // Speed of the ball
    public float drag = 5.0f; // Drag force to apply when not moving
    private Rigidbody rb;
    private PlayerInputActions inputActions;
    private Transform mainCameraTransform;

    private bool isGroundedBall;

    public float yForce = 500.0f; 

    void Awake()
    {
        inputActions = new PlayerInputActions();
    }

    void OnEnable()
    {
        inputActions.Enable();
    }

    void OnDisable()
    {
        inputActions.Disable();
    }

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        mainCameraTransform = Camera.main.transform;
    }



private void OnCollisionEnter(Collision col)
{
    if (col.gameObject.tag == "Ground")
    {
        isGroundedBall = true;
        Debug.Log("collided");
    }
}

private void OnCollisionExit(Collision col)
{
    if (col.gameObject.tag == "Ground")
    {
        isGroundedBall = false;
    }
}


    void Update()
    {
        Vector2 direction = inputActions.CharacterControls.Movement.ReadValue<Vector2>();
        MoveBall(direction);
        JumpCheck();




    }

private void MoveBall(Vector2 direction)
{
    if (direction.magnitude > 0)
    {
        if (!isGroundedBall)
        {
           // Debug.Log("Inair");
            // add air control


            //to add air resistance
            rb.AddForce(-rb.velocity.x * drag/2, 0, -rb.velocity.z * drag/2);
            //return;
        }
        else
        {
            Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);

            // Rotate the direction vector to match the forward direction of the camera
            moveDirection = mainCameraTransform.TransformDirection(moveDirection);
            moveDirection.y = rb.velocity.y;
            moveDirection = moveDirection.normalized;

            // Move the ball in the direction
            rb.AddForce(moveDirection.x * speed,0,moveDirection.z * speed);
        }

    }
    else
    {
        // Apply drag force to slow the ball down
        rb.AddForce(-rb.velocity.x * drag, -speed, -rb.velocity.z * drag);
    }
}

private void JumpCheck()
{
//check if player is jumping
        if (inputActions.CharacterControls.Jump.triggered)
         {
            if(isGroundedBall)
            {

              Vector3 jumpDirection = rb.velocity.normalized;
              jumpDirection.y = yForce;
              GetComponent<Rigidbody>().AddForce(jumpDirection);   
            }
            else
            {
                return;
            }
         }

}


}
