using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Movement : MonoBehaviour
{
    [SerializeField]
    InputManager inputManager;
    private bool isJumping;
    private Rigidbody rb;



    public float xForce = 10.0f;  
    public float zForce = 10.0f;  
    public float yForce = 500.0f; 

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        inputManager = GetComponent<InputManager>();
    }

    void Update()
    {
        //move forward
        float x= 0.0f;
        x = -inputManager.movementInput.y;
        //move sides
        float z= 0.0f;
        z = inputManager.movementInput.x;
        //jump force
        float y= 0.0f;
        if (inputManager.playerControls.CharacterControls.Jump.triggered)
        {
          y = yForce;
          GetComponent<Rigidbody>().AddForce (x, y, z);   
        }

        //ads force from values above
        GetComponent<Rigidbody>().AddForce (x, y, z);   
        


      
    }



    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            // set isJumping flag to false
            isJumping = false;
        }
    }
}