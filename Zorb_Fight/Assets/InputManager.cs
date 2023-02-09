using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
   public PlayerInputActions playerControls;

public Vector2 movementInput;

  private void OnEnable(){
    if(playerControls == null)
    {
        playerControls = new PlayerInputActions();

    }

    playerControls.Enable();
    playerControls.CharacterControls.Movement.performed += OnMovementPerformed;
    playerControls.CharacterControls.Movement.canceled += OnMovementCancelled;
  }


private void OnMovementPerformed(InputAction.CallbackContext value)
{
  movementInput = value.ReadValue<Vector2>();
}

private void OnMovementCancelled(InputAction.CallbackContext value)
{
  movementInput = Vector2.zero;
}
  private void OnDisable()
  {
    playerControls.Disable();
    playerControls.CharacterControls.Movement.performed -= OnMovementPerformed;
    playerControls.CharacterControls.Movement.canceled -= OnMovementCancelled;
  }



    void Update()
    {
        OnEnable();
    }
}
