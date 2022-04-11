using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyHealth : MonoBehaviour
{
    public int health;
    public GameObject bloodEffect;


    public void TakeDamage(int damage)
    {
        // dazedTime = startDazedTime;
        GameObject blood = Instantiate(bloodEffect, transform.position, Quaternion.identity);
        health -= damage;
        Destroy(blood, 2f);
    }
}
