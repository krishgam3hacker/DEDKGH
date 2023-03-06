using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundCheckBall : MonoBehaviour
{


    [Header("Ground Check")]
    public float raycastLength = 1f;
    [SerializeField] private string groundTag = "Ground";
    [SerializeField] public bool isGroundedBall;
    public Transform raycastStart;

    // Directions to check for ground
    public Vector3[] groundCheckDirections = { Vector3.down, Vector3.up, Vector3.left, Vector3.right, Vector3.forward, Vector3.back };

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        GroundCheck();
        Debug.Log(isGroundedBall);
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
}

