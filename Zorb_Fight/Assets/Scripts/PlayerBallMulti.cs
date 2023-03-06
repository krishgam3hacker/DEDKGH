using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using Unity.Netcode;
using Cinemachine;
using Game;
using UnityEngine;
using UnityEngine.InputSystem;
using Unity.Services.Lobbies.Models;

public class PlayerBallMulti : NetworkBehaviour
{
    [SerializeField] private Rigidbody rb;
    [SerializeField] private PlayerInputActions inputActions;
    [SerializeField] public Transform mainCamera;
    [SerializeField] private GameObject CamSocket;
    [SerializeField] private CinemachineVirtualCamera cvm;

    #region Ground Checks
    [Header("Ground Check")]
    public float raycastLength = 1f;
    [SerializeField] private string groundTag = "Ground";
    [SerializeField] public bool isGroundedBall;
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




    void Start()
    {
        rb = GetComponentInChildren<Rigidbody>();
        rb.isKinematic = false;
        inputActions = new PlayerInputActions();
        inputActions.Enable();
        

        Cursor.lockState = CursorLockMode.Locked;


        GameObject spawnedplayer = this.gameObject;
        
        
            CamSocket.GetComponentInChildren<Camera>().enabled = true;


    }

    private void Update()
    {
        // Set the camera's active state based on whether this player is the local player
        if (IsLocalPlayer)
        {
            Debug.Log("Enabling camera for local player");
            GetComponentInChildren<Camera>().enabled = true;
        }
        else
        {
            Debug.Log("Disabling camera for remote player");
            GetComponentInChildren<Camera>().enabled = false;
            GetComponentInChildren<Camera>().gameObject.SetActive(false);
            GetComponentInChildren<CinemachineFreeLook>().gameObject.SetActive(false);

        }
    }
    void FixedUpdate()
    {
        Vector2 direction = inputActions.CharacterControls.Movement.ReadValue<Vector2>();

        if (IsServer && IsLocalPlayer)
        {
            GroundCheck();
            MoveBall(direction);


        }
        else if (IsLocalPlayer)
        {
            if (inputActions.CharacterControls.Movement.inProgress)
            {

                GroundCheck();
                
                MoveBallServerRPC(direction);
            }
        }

        CamSocket.GetComponentInChildren<Camera>().enabled = true;
    }

    private void MoveBall(Vector2 direction)
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
                moveDirection = mainCamera.TransformDirection(moveDirection);
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
            }
        }
    }

    [ServerRpc]
    private void MoveBallServerRPC(Vector2 direction)
    {
        MoveBall(direction);
    }

    public override void OnNetworkSpawn()
    {
         cvm = CamSocket.gameObject.GetComponentInChildren<CinemachineVirtualCamera>();

        if (IsOwner)
        {
            cvm.Priority = 1;
        }
        else
        {
            cvm.Priority = 0;
        }
    }
}
