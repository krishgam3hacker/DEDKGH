using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyController : MonoBehaviour
{
    int health;
    private Animator myAnim;
  //  private Transform target;
    public GameObject bloodEffect;
  //  public Slider healthBar;
    public bool isDead;

    private float dazedTime;
    public float startDazedTime;

    public Transform homePos;
    private float speed =0f;
    private float maxRange =0f;
    private float minRange =0f;

    private float timeBtwDamage = 1.5f;
    public int damage;

    private void Awake()
    {
        health = GetComponent<EnemyHealth>().health;
    }

    void Start()
    {
        
        myAnim = GetComponent<Animator>();
       // target = FindObjectOfType<Player>().transform;
        
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // deal the player damage ! 
        if (other.CompareTag("Player") && isDead == false)
        {
            if (timeBtwDamage <= 0)
            {
                //  camAnim.SetTrigger("shake");
                other.GetComponent<HealthManager>().currentHealth -= damage;
            }
        }
    }

    void Update()
    {
        health = GetComponent<EnemyHealth>().health;

        if (dazedTime <= 0)
        {
            speed = 2;
        }
        else
        {
            speed = 0;
            dazedTime -= Time.deltaTime;
        }



        

        if (health <= 0)
        {
            Destroy(this.gameObject);
        }

      //  healthBar.value = health;

        /*
        if (Vector3.Distance(target.position, transform.position) <= maxRange && Vector3.Distance(target.position, transform.position) >= minRange)
        {

        FollowPlayer();
        }
        else if(Vector3.Distance(target.position, transform.position) >= maxRange)
        {
            GoHome();
        }
        */
         
    }

    /*
    public void FollowPlayer()
    {
        myAnim.SetBool("isMoving", true);
        myAnim.SetFloat("moveX", (target.position.x - transform.position.x));
        myAnim.SetFloat("moveY", (target.position.y - transform.position.y));
        transform.position = Vector3.MoveTowards(transform.position, target.transform.position, speed *Time.deltaTime);
    }

    public void GoHome()
    {
        myAnim.SetFloat("moveX", (homePos.position.x - transform.position.x));
        myAnim.SetFloat("moveY", (homePos.position.y - transform.position.y));
        transform.position = Vector3.MoveTowards(transform.position, homePos.position, speed * Time.deltaTime);

        if(Vector3.Distance(transform.position , homePos.position) == 0)
        {
            myAnim.SetBool("isMoving", false);
        }
    }

    */
    public void TakeDamage( int damage)
    {
        dazedTime = startDazedTime;
        GameObject blood = Instantiate(bloodEffect, transform.position, Quaternion.identity);
        health -= damage;
        Destroy(blood, 2f);
    }
}
