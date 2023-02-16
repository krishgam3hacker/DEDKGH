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
    [SerializeField] private string groundTag = "Ground";
    private bool isGroundedBall;
    public Transform raycastStart;

    // Directions to check for ground
    public Vector3[] groundCheckDirections = { Vector3.down, Vector3.up, Vector3.left, Vector3.right, Vector3.forward, Vector3.back }; 

    #endregion


    void Awake()
    {
        inputActions = new PlayerInputActions();
        rb = GetComponent<Rigidbody>();
        mainCameraTransform = Camera.main.transform;
    }

    void OnEnable()
    {
        inputActions.Enable();
    }

    void OnDisable()
    {
        inputActions.Disable();
    }

    void Update()
    {       
        JumpCheck();
        GroundCheck();
    }

    void FixedUpdate()
    {
        Vector2 direction = inputActions.CharacterControls.Movement.ReadValue<Vector2>();
         MoveBall(direction);
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

        // Apply force once per fixed update
    rb.AddForce(0, Physics.gravity.y * rb.mass, 0, ForceMode.Force);
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
private void GroundCheck()
{
    // use the radius of the sphere collider on the ball
    float radius = GetComponent<SphereCollider>().radius; 
    Vector3 position = transform.position;
    
    bool isGrounded = false;
    for (int i = 0; i < groundCheckDirections.Length; i++)
    {
        Vector3 direction = transform.TransformDirection(groundCheckDirections[i]);
        RaycastHit hitInfo;
        if (Physics.SphereCast(position, radius, direction, out hitInfo, raycastLength))
        {
            Debug.DrawRay(position, direction * hitInfo.distance, Color.red);
           // Debug.Log("Ground hit: " + hitInfo.collider.gameObject.name);
            
            // Check if the ground object has the specified tag
            if (hitInfo.collider.gameObject.CompareTag(groundTag))
            {
                isGrounded = true;
                break;
            }
        }
    }
 
    if (isGrounded)
    {
        isGroundedBall = true;
    }
    else
    {
        isGroundedBall = false;
    }
}





}
