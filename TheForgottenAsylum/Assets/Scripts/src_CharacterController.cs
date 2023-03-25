using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static scr_Models;

public class src_CharacterController : MonoBehaviour
{
    private CharacterController characterController;
    private PlayerInputs playerInput;
    private Vector2 input_Movement;
    private Vector2 input_View;

    private Vector3 newCameraRotation;
    private Vector3 newCharacterRotation;

    [Header("References")]
    public Transform cameraHolder;
    public Transform feetTransform;

    [Header("Settings")]
    public PLayerSettingModel playerSettings;
    public float ViewClampYMin = -70;
    public float ViewClampYMax = 80;
    public LayerMask playerMask;
    
    [Header("Gravity")]
    public float gravityAmount;
    private float playerGravity;
    public float gravityMin;

    public Vector3 jumpingForce;
    private Vector3 jumpingForceVelocity;

    [Header("Stance")]
    public PlayerStance playerStance;
    public float playerStanceSmoothing;
    public CharacterStance playerStandStance;
    public CharacterStance playerCrouchStance;
    public CharacterStance playerProneStance;
    private float stanceCheckErrorMargin = 0.05f;
    private float cameraHeight;
    private float cameraHeightVelocity;

    
    private Vector3 stanceCapsuleCenterVelocity;
    private float stanceCapsuleHeightVelocity;
    
    public bool isSprinting;

    
    void Awake() 
    {
        playerInput =new PlayerInputs();

        playerInput.PlayerControls.Movement.performed += e => input_Movement = e.ReadValue<Vector2>();
        playerInput.PlayerControls.View.performed += e => input_View = e.ReadValue<Vector2>();
        playerInput.PlayerControls.Jump.performed += e => Jump();
        playerInput.PlayerControls.Crouch.performed += e => Crouch();
        playerInput.PlayerControls.Prone.performed += e => Prone();
        playerInput.PlayerControls.Sprinting.performed += e => ToogleSprint();

        playerInput.Enable();

        newCameraRotation = cameraHolder.localRotation.eulerAngles;
        newCharacterRotation = transform.localRotation.eulerAngles;
        characterController = GetComponent<CharacterController>();

        cameraHeight = cameraHolder.localPosition.y;
    }

    private void Update() 
    {
        CalculateView();
        CalculateMovement();
        CalculateJump();
        CalculateStance();

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

        if(playerGravity > gravityMin)
        {
            playerGravity -= gravityAmount * Time.deltaTime;
        }

        playerGravity-= gravityAmount * Time.deltaTime;

        if(playerGravity< -0.1f && characterController.isGrounded)
        {
            playerGravity = -0.1f;
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
        playerGravity = 0;
    }
    private void CalculateStance()
    {
        var currentStance  = playerStandStance;

        if (playerStance == PlayerStance.Crouch)
        {
            currentStance = playerCrouchStance;
        }
        else if (playerStance == PlayerStance.Prone)
        {
            currentStance = playerProneStance;
        }



        cameraHeight = Mathf.SmoothDamp(cameraHolder.localPosition.y, currentStance.CameraHeight, ref cameraHeightVelocity, playerStanceSmoothing);
        cameraHolder.localPosition = new Vector3(cameraHolder.localPosition.x, cameraHeight,cameraHolder.localPosition.z);

        characterController.height = Mathf.SmoothDamp(characterController.height, currentStance.StanceColloider.height, ref stanceCapsuleHeightVelocity, playerStanceSmoothing);
        characterController.center = Vector3.SmoothDamp(characterController.center, currentStance.StanceColloider.center, ref stanceCapsuleCenterVelocity, playerStanceSmoothing);
    }

    private void Crouch()
    {
        if (playerStance == PlayerStance.Crouch)
        {
            if (StanceCheck(playerStandStance.StanceColloider.height))
            {
                return;
            }
            playerStance = PlayerStance.Stand;
            return;
        }
        if (StanceCheck(playerCrouchStance.StanceColloider.height))
        {
            return;
        }
        playerStance = PlayerStance.Crouch;
    }

    private void Prone()
    {
        playerStance = PlayerStance.Prone;
    }

    private bool StanceCheck(float stanceCheckheight)
    {
        var start = new Vector3(feetTransform.position.x, feetTransform.position.y + characterController.radius + stanceCheckErrorMargin, feetTransform.position.z);
        var end = new Vector3(feetTransform.position.x, feetTransform.position.y - characterController.radius - stanceCheckErrorMargin + stanceCheckheight, feetTransform.position.z);
        
        return Physics.CheckCapsule(start, end, characterController.radius, playerMask);
    }
    private void ToogleSprint()
    {
        isSprinting =!isSprinting;
    }
}
