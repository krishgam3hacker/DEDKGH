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

    void Update()
    {
        Vector2 direction = inputActions.CharacterControls.Movement.ReadValue<Vector2>();
        MoveBall(direction);

        float x= 0.0f;
        float y= 0.0f;
        float z= 0.0f;
        if (inputActions.CharacterControls.Jump.triggered)
        {
          y = yForce;
          GetComponent<Rigidbody>().AddForce (x, y, z);   
        }
    }

    private void MoveBall(Vector2 direction)
    {
        if (direction.magnitude > 0)
        {
            Vector3 moveDirection = new Vector3(direction.x, rb.velocity.y*2, direction.y);

            // Rotate the direction vector to match the forward direction of the camera
            moveDirection = mainCameraTransform.TransformDirection(moveDirection);
            moveDirection.y = 0;
            moveDirection = moveDirection.normalized;

            // Move the ball in the direction
            rb.AddForce(moveDirection * speed);
        }
        else
        {
            // Apply drag force to slow the ball down
            rb.AddForce(-rb.velocity * drag);
        }
    }
}
