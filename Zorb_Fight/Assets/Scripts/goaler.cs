using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class goaler : MonoBehaviour
{
    [SerializeField] private float forceMultiplier = 2.0f;
    private Rigidbody rb;

    public Transform ballTransform;
    public float decalOffset = 0.1f;
    public LayerMask groundLayer;

    [SerializeField] private Transform _decalTransform;

    // Start is called before the first frame update
    void Start() {
        rb = GetComponent<Rigidbody>();
        rb.isKinematic = false;
        _decalTransform = transform.GetChild(0);

    }

    // Update is called once per frame
    void Update() 
    {
        DecalProject();
    }

    // When a collision occurs, double the force applied to the ball
    void OnCollisionEnter(Collision collision) {
        if (collision.gameObject.tag == "Player") {
            Vector3 force = collision.impulse * forceMultiplier;
            rb.AddForce(force, ForceMode.Impulse);
        }
    }

    private void DecalProject()
    {
        Vector3 ballPosition = ballTransform.position;
        RaycastHit hit;
        if (Physics.Raycast(ballPosition, Vector3.down, out hit, Mathf.Infinity, groundLayer))
        {
            Vector3 decalPosition = hit.point + Vector3.up * decalOffset;
            _decalTransform.position = decalPosition;
            _decalTransform.rotation = Quaternion.identity;
        }
    }
}
