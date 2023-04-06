using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnPowerOff : MonoBehaviour
{
    private GameObject player;

    private GameObject breakerBox;

    public bool destroyAfterUse;


    void Start()
    {
        player = GameObject.FindWithTag("Player");
        breakerBox = GameObject.Find("BreakerBox");
        
    }

    public void OnTriggerEnter(Collider other)
    {

        if (other.gameObject.tag == "Player")
        {

            if (destroyAfterUse)
            {
                breakerBox.GetComponent<TurnPowerOn>().powerIsOn = false;
                Destroy(gameObject);
            }

            if (!destroyAfterUse)
            {
                breakerBox.GetComponent<TurnPowerOn>().powerIsOn = false;
            }
        }
    }
}
