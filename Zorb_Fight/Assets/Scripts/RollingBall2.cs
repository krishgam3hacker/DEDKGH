using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class RollingBall2 : MonoBehaviour
{
    private Rigidbody rb;
    private PlayerInputActions inputActions;
    private Transform mainCameraTransform;

    #region Ball Controls
    [Header("Ball Controls")]
    public float speed = 10.0f; // Speed of the ball
    public float drag = 5.0f; // Drag force to apply when not moving
    public float yForce = 500.0f; 
    #endregion

    #region GroundCheck
    [Header("Ground Check")]
    public float raycastLength = 1f;
    public LayerMask groundLayers;
    private bool isGroundedBall;
    public Transform raycastStart;
    #endregion


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


    void Update()
    {
        Vector2 direction = inputActions.CharacterControls.Movement.ReadValue<Vector2>();
        MoveBall(direction);
        JumpCheck();
        GroundCheck();




    }

private void MoveBall(Vector2 direction)
{
    if (direction.magnitude > 0)
    {
        if (!isGroundedBall)
        {
           // Debug.Log("Inair");
            // add air control
            Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);
            moveDirection.y = speed;
            moveDirection = moveDirection.normalized;

            rb.AddForce(moveDirection.x * speed/2,0,moveDirection.z * speed/2);


            //to add air resistance
            rb.AddForce(-rb.velocity.x * drag/2, 0, -rb.velocity.z * drag/2);

            // Increase the fall speed while in air
            rb.AddForce(0, -speed, 0);

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



// to add more raycasts on side
private void GroundCheck()
{
 Debug.DrawRay(raycastStart.position, -Vector3.up * raycastLength, Color.red);
        RaycastHit hitInfo;
        if (Physics.Raycast(raycastStart.position, -Vector3.up, out hitInfo, raycastLength, groundLayers))
        {
            Debug.Log("Ground hit: " + hitInfo.collider.gameObject.name);
            isGroundedBall = true;

        }
        else
        {
            Debug.Log("No ground hit");
            isGroundedBall = false;

        }
}


}
