using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static scr_Models;

public class src_CharacterController : MonoBehaviour
{
    private CharacterController characterController;
    private PlayerInputs playerInput;
    public Vector2 input_Movement;
    public Vector2 input_View;

    private Vector3 newCameraRotation;
    private Vector3 newCharacterRotation;

    [Header("References")]
    public Transform cameraHolder;

    [Header("Settings")]
    public PLayerSettingModel playerSettings;
    public float ViewClampYMin = -70;
    public float ViewClampYMax = 80;
    
    [Header("Gravity")]
    public float gravityAmount;
    private float playerGravity;
    public float gravityMin;

    public Vector3 jumpingForce;
    private Vector3 jumpingForceVelocity;

    
    void Awake() 
    {
        playerInput =new PlayerInputs();

        playerInput.PlayerControls.Movement.performed += e => input_Movement = e.ReadValue<Vector2>();
        playerInput.PlayerControls.View.performed += e => input_View = e.ReadValue<Vector2>();
        playerInput.PlayerControls.Jump.performed += e => Jump();

        playerInput.Enable();

        newCameraRotation = cameraHolder.localRotation.eulerAngles;
        newCharacterRotation = transform.localRotation.eulerAngles;
        characterController = GetComponent<CharacterController>();
    }

    private void Update() 
    {
        CalculateView();
        CalculateMovement();
        CalculateJump();
    }

    void CalculateView()
    {
        newCharacterRotation.y += playerSettings.ViewXSensitivity * (playerSettings.ViewXInverted ? -input_View.x : input_View.x) * Time.deltaTime;
        transform.localRotation = Quaternion.Euler(newCharacterRotation);


        newCameraRotation.x += playerSettings.ViewYSensitivity * (playerSettings.ViewYInverted ? input_View.y: -input_View.y) * Time.deltaTime;
        newCameraRotation.x = Mathf.Clamp(newCameraRotation.x,ViewClampYMin, ViewClampYMax);

        cameraHolder.localRotation = Quaternion.Euler(newCameraRotation);
    }

    void CalculateMovement()
    {
        var verticalSpeed = playerSettings.WalkingForwardSpeed * input_Movement.y * Time.deltaTime;
        var horizontalSpeed = playerSettings.WalkingStrafeSpeed * input_Movement.x * Time.deltaTime;

        var newMovementSpeed = new Vector3(horizontalSpeed, 0, verticalSpeed);
        newMovementSpeed = transform.TransformDirection(newMovementSpeed);

        if(playerGravity > gravityMin && jumpingForce.y< 0.01f)
        {
            playerGravity -= gravityAmount * Time.deltaTime;
        }

        playerGravity-= gravityAmount * Time.deltaTime;

        if(playerGravity< -1 && characterController.isGrounded)
        {
            playerGravity = -1;
        }

        if (jumpingForce.y > 0.01f)
        {
            playerGravity = 0;
        }

        newMovementSpeed.y += playerGravity;
        newMovementSpeed += jumpingForce * Time.deltaTime;

        characterController.Move(newMovementSpeed);
    }

    private void CalculateJump()
    {
        jumpingForce = Vector3.SmoothDamp(jumpingForce, Vector3.zero, ref jumpingForceVelocity,playerSettings.JumpingFalloff);
    }

    private void Jump()
    {
        if (!characterController.isGrounded)
        {
            return;
        }
        //jump
        jumpingForce = Vector3.up * playerSettings.JumpingHeight;
    }
}
