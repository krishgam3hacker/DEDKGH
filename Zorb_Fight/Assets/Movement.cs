using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    [SerializeField]
    InputManager inputManager;
    public float moveSpeed = 5f;
    public float turnSpeed = 1f;
    public float jumpForce = 5f;

    private bool isJumping;
    private Rigidbody rb;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        inputManager = GetComponent<InputManager>();
    }

    void Update()
    {
        // float horizontal = Input.GetAxis("Horizontal");
        // float vertical = Input.GetAxis("Vertical");

        // move forward/backward
        transform.position += transform.forward * inputManager.movementInput.y * moveSpeed * Time.deltaTime;
        // rotate left/right
        transform.Rotate(Vector3.up, inputManager.movementInput.x * turnSpeed);
      
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