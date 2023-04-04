using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenKeyPad : MonoBehaviour
{
    public GameObject keypadOB;
    public GameObject keypadText;

    public bool inReach;


    void Start()
    {
        inReach = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = true;
            keypadText.SetActive(true);

        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            keypadText.SetActive(false);

        }
    }




    void Update()
    {
        if(Input.GetButtonDown("Interact") && inReach)
        {
            keypadOB.SetActive(true);
        }
        

    }
}
