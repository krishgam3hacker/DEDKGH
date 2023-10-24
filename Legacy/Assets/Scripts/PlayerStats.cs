using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : MonoBehaviour
{
    [Header("Health Settings")]
    [SerializeField] public float maxHealth = 100f;




    [Header("Shield Settings")]
    [SerializeField] public float maxShield = 200f;



    [Header("Energy/Mana Settings")]
    [SerializeField] public float maxMana = 50f;

    [Header("Skill Levels")]
    [SerializeField] public float pDamage = 50f;
    [SerializeField] public float pDefense = 50f;
    [SerializeField] public float pCritrate = 10f;
    [SerializeField] public float pCritdamage = 50f;

    [Header("Afflictions")]
    [SerializeField] public bool isOnFire = false;



    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
