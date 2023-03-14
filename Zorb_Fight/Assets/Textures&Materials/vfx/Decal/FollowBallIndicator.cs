using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowBallIndicator : MonoBehaviour
{
    public Transform ballTransform;
    public float decalOffset = 0.1f;
    public LayerMask groundLayer;

    private Transform _decalTransform;

    void Start()
    {
        _decalTransform = transform.GetChild(0);
    }

    void Update()
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
