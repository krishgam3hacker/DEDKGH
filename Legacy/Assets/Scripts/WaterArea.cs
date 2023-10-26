using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaterArea : MonoBehaviour
{
    float damageRate = 1f; // Damage per second

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }



void OnTriggerStay(Collider other)
{
    if (other.gameObject.tag == "Player")
    {
        float damage = damageRate * Time.deltaTime;
        other.gameObject.GetComponent<PlayerStats>().isOnWater = true;
        Debug.Log("player in Water");
    }
}

void OnTriggerExit(Collider other)
{
    other.gameObject.GetComponent<PlayerStats>().isOnWater = false;
}



}
