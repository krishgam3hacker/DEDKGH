using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthApply : MonoBehaviour
{

    [SerializeField]
    private int healToGive;

    private HealthManager healthscr;

    public GameObject effect;
    private Transform player;

    private void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").transform;
    }

    public void Use()
    {
     GameObject heal =   Instantiate(effect, player.position, Quaternion.identity);
      Destroy(heal, 3f);

        player.GetComponent<HealthManager>().HealPlayer(healToGive);
        
        Destroy(gameObject);
    }

    

}
