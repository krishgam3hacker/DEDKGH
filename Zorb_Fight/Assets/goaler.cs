using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class goaler : MonoBehaviour
{
  public float forceMultiplier = 2.0f;
    private Rigidbody rb;

    // Start is called before the first frame update
    void Start() {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update() {
        
    }

    // When a collision occurs, double the force applied to the ball
    void OnCollisionEnter(Collision collision) {
        if (collision.gameObject.tag == "Player") {
            Vector3 force = collision.impulse * forceMultiplier;
            rb.AddForce(force, ForceMode.Impulse);
        }
    }
}
