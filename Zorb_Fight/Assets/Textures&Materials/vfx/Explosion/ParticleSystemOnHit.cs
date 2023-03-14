using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleSystemOnHit : MonoBehaviour
{
    public GameObject particleSystemPrefab; // Prefab for the particle system
    public float particleSystemDuration = 1f; // How long the particle system lasts before destroying itself

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Projectile")
        {
            // Instantiate the particle system prefab at the point of collision
            GameObject particles = Instantiate(particleSystemPrefab, collision.contacts[0].point, Quaternion.identity);

            // Destroy the particle system after the duration has elapsed
            Destroy(particles, particleSystemDuration);

            // Destroy the object that was hit
            Destroy(gameObject);
        }
    }
}