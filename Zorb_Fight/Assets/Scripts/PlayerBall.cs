using Cinemachine;
using JetBrains.Annotations;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using UnityEngine.InputSystem;

public class PlayerBall : MonoBehaviour
{
    [SerializeField] private Rigidbody rb;

    [SerializeField] public Transform cmcam;
    private Vector2 direction;

    #region Ground Checks
    [Header("Ground Check")]
    public float raycastLength = 1.1f;
    [SerializeField] private string groundTag = "Ground";
    [SerializeField] public bool isGroundedBall = false;
    public Transform raycastStart;
    // Directions to check for ground
    public Vector3[] groundCheckDirections = { Vector3.down, Vector3.up, Vector3.left, Vector3.right, Vector3.forward, Vector3.back };
    #endregion

    #region Ball Controls
    [Header("Ball Controls")]
    [SerializeField] private float speed = 10.0f; // Speed of the ball
    public float drag = 5.0f; // Drag force to apply when not moving
    public float yForce = 500.0f;
    #endregion


    [SerializeField] private PlayerInputActions inputActions;

    [SerializeField] AudioSource playerSpeaker;

    void Start()
    {

        inputActions = new PlayerInputActions();
        inputActions.Enable();

        rb = GetComponentInChildren<Rigidbody>();
        rb.isKinematic = false;

        cmcam = GetComponentInChildren<Camera>().transform;
       // Cursor.lockState = CursorLockMode.Locked;
       Cursor.visible= false;
        
        CinemachineFreeLook cvm = cmcam.gameObject.GetComponentInChildren<CinemachineFreeLook>();

        playerSpeaker = GetComponent<AudioSource>();
    }



    private void Update()
    {

    }
    void FixedUpdate()
    {
        
        GroundCheck();
        JumpCheck();
        MoveBall(direction);
        AudioCheck();
    }

    private void AudioCheck()
    {
        if(rb.velocity == Vector3.zero)
        {
            playerSpeaker.volume = 0f;
        }
        else
        {
            playerSpeaker.volume = 0.3f;
        }
    }

    public void MoveBall(Vector2 direction)
    {

        if (direction.magnitude > 0)
        {
            if (!isGroundedBall)
            {
                // adds air control
                Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);
                moveDirection.y = speed;
                moveDirection = moveDirection.normalized;

                rb.AddForce(moveDirection.x * speed / 2, 0, moveDirection.z * speed / 2);

                //to add air resistance
                rb.AddForce(-rb.velocity.x * drag / 2, 0, -rb.velocity.z * drag / 2);

                // Increase the fall speed while in air
                rb.AddForce(0, -speed, 0);

            }
            else
            {
                Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);

                // Rotate the direction vector to match the forward direction of the camera
                moveDirection = cmcam.TransformDirection(moveDirection);
                moveDirection.y = 0;
                moveDirection = moveDirection.normalized;

                // Move the ball in the direction
                rb.AddForce(moveDirection * speed);
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

    private void GroundCheck()
    {
        foreach (Vector3 direction in groundCheckDirections)
        {
            RaycastHit hitInfo;
            if (Physics.Raycast(raycastStart.position, direction, out hitInfo, raycastLength))
            {
                Debug.DrawRay(raycastStart.position, direction * raycastLength, Color.green);
                if (hitInfo.collider.CompareTag(groundTag))
                {
                    isGroundedBall = true;
                    break;
                }
            }
            else
            {
                Debug.DrawRay(raycastStart.position, direction * raycastLength, Color.red);
                isGroundedBall = false;
            }
        }
    }

    private void JumpCheck()
    {
        //check if player is jumping
        if (inputActions.CharacterControls.Jump.triggered)
        {
            if (isGroundedBall)
            {
                Debug.Log(isGroundedBall);
                Vector3 jumpDirection = rb.velocity.normalized;
                jumpDirection.y = yForce;
                GetComponentInChildren<Rigidbody>().AddForce(jumpDirection);
            }
            else
            {
                Debug.Log(isGroundedBall + "should not jump");
                return;
            }
        }

    }

    public void OnMovement(InputAction.CallbackContext value)
    {
        direction = value.ReadValue<Vector2>();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            FindObjectOfType<AudioManager>().Play("PlayerHit");
            Debug.Log("collider");
        }
    }



}
