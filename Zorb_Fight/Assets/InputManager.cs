using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManager : MonoBehaviour
{
    PlayerInputActions playerControls;

public Vector2 movementInput;
public Vector2 movementInputc;

  private void OnEnable(){
    if(playerControls == null)
    {
        playerControls = new PlayerInputActions();
        playerControls.CharacterControls.Movement.performed += i => movementInput = i.ReadValue<Vector2>();
        playerControls.CharacterControls.Movement.started += i => movementInputc = i.ReadValue<Vector2>();

    }

    playerControls.Enable();
  }

  private void OnDisable()
  {
    playerControls.Disable();
  }


    void Start()
    {
        
    }


    void Update()
    {
        OnEnable();
    }
}
