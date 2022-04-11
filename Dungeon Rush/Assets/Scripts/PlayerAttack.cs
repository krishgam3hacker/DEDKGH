using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAttack : MonoBehaviour
{
    private SpriteRenderer rendr;
    private TrailRenderer swiper;
    private float timeBtwAttack;
    public float startTimeBtwAttack;
    private Animator myAnim;

    public Transform attackPos;
    public float attackRange;
    public LayerMask whatIsEnemy;
    public int damage;

    private float attackTime = .34f;
    private float attackCounter = .25f;

    private bool isAttacking;

    private void Start()
    {
        myAnim = GetComponent<Animator>();
        rendr = GameObject.FindGameObjectWithTag("Weapon").GetComponent<SpriteRenderer>();
        swiper = GameObject.FindGameObjectWithTag("Weapon").GetComponent<TrailRenderer>();
    }
    private void FixedUpdate()
    {
        if(timeBtwAttack <= 0)
        {
            if (Input.GetButton("Fire1"))
            {
                attackCounter = attackTime;
                myAnim.SetBool("isAttacking", true);
                rendr.enabled = true;
                swiper.enabled = true;
                isAttacking = true;
                Collider2D[] enemiesToDamage = Physics2D.OverlapCircleAll(attackPos.position, attackRange, whatIsEnemy);
                for (int i = 0; i < enemiesToDamage.Length; i++)
                {
                    enemiesToDamage[i].GetComponent<EnemyHealth>().TakeDamage(damage);
                                     


                }

               
            }
            timeBtwAttack = startTimeBtwAttack;
        }
        else
        {
            timeBtwAttack -= Time.deltaTime;
        }

        if (isAttacking)
        {
            attackCounter -= Time.deltaTime;
            if (attackCounter <= 0)
            {
                myAnim.SetBool("isAttacking", false);
                isAttacking = false;
                rendr.enabled = false;
                swiper.enabled = false;
            }
        }
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(attackPos.position, attackRange);
    }
}
