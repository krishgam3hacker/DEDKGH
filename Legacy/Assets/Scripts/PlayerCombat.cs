using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCombat : MonoBehaviour
{
    [SerializeField] Animator animator;
    public GameObject magicBulletPrefab;
    public Transform bulletSpawnPoint;
    public float bulletOffset = 1f;

    void Start()
    {
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            animator.SetTrigger("MAtk");
            ShootMagicBullet();
        }
    }

    void ShootMagicBullet()
    {
        Vector3 spawnPosition = bulletSpawnPoint.position + bulletSpawnPoint.forward * bulletOffset;
        GameObject magicBullet = Instantiate(magicBulletPrefab, spawnPosition, bulletSpawnPoint.rotation);
    }
    // Start is called before the first frame update

}
