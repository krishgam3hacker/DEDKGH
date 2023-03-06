using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitParticle : MonoBehaviour
{
    public GameObject particlePrefab;

    private void OnCollisionEnter(Collision collision)
    {
        if (particlePrefab != null)
        {
            // Spawn the particle effect at the collision point
            ContactPoint contact = collision.contacts[0];
            Instantiate(particlePrefab, contact.point, Quaternion.identity);
        }

        // Destroy the object that was hit
        Destroy(particlePrefab);
    }
}