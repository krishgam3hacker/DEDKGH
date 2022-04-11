using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weaponstats : MonoBehaviour
{
    [SerializeField]
    private SpriteRenderer rend;
    [SerializeField]
    private TrailRenderer swipe;
    [SerializeField]
    private Sprite weaponSprite;

    



    private Transform player;
    [SerializeField]
    public int weaponDamage = 5;
    [SerializeField]
    public float weaponSpeed = 0.08f;


    private void Awake()
    {

        player = GameObject.FindGameObjectWithTag("Player").transform;
        rend = GameObject.FindGameObjectWithTag("Weapon").GetComponent<SpriteRenderer>();
        swipe = GameObject.FindGameObjectWithTag("Weapon").GetComponent<TrailRenderer>();
        
    }

    private void Start()
    {
        
        weaponSprite = GetComponent<SpriteRenderer>().sprite;
    }
    public void ChooseWeapon()
    {
        //testing for change sprite
        
        rend.sprite = weaponSprite;
        Debug.Log("changed");
        
     
      //chanign wepaon values
      player.GetComponent<PlayerAttack>().damage = weaponDamage;
      player.GetComponent<PlayerAttack>().startTimeBtwAttack = weaponSpeed;
      swipe.enabled = false;
        rend.enabled = false;
       
    }
}
