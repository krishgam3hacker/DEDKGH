using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class HitGround : MonoBehaviour
{
    public GameObject particleSystemPrefab;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            Instantiate(particleSystemPrefab, transform.position, Quaternion.identity);
        }
    }
}
