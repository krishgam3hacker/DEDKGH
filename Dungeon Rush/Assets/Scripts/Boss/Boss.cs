using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Boss : MonoBehaviour {

     int health;
    public int damage;
    private float timeBtwDamage = 1.5f;
    public GameObject bloodEffect;
    private float dazedTime;
    public float startDazedTime;


    // public Animator camAnim;
    public Slider healthBar;
    private Animator anim;
    public bool isDead;



    private void Awake()
    {
        health = GetComponent<EnemyHealth>().health;
    }
    private void Start()
    {
        anim = GetComponent<Animator>();
    }

    private void Update()
    {
        health = GetComponent<EnemyHealth>().health;

        if (health <= 75) {
            anim.SetTrigger("stageTwo");
        }

        if (health <= 0) {
            anim.SetTrigger("death");
        }

        // give the player some time to recover before taking more damage !
        if (timeBtwDamage > 0) {
            timeBtwDamage -= Time.deltaTime;
        }

        healthBar.value = health;
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // deal the player damage ! 
        if (other.CompareTag("Player") && isDead == false) {
            if (timeBtwDamage <= 0) {
              //  camAnim.SetTrigger("shake");
                other.GetComponent<HealthManager>().currentHealth -= damage;
            }
        } 
    }

    public void TakeDamage(int damage)
    {
       // dazedTime = startDazedTime;
        GameObject blood = Instantiate(bloodEffect, transform.position, Quaternion.identity);
        health -= damage;
        Destroy(blood, 2f);
    }
}
