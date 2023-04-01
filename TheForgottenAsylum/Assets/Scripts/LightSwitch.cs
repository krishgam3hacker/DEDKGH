using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightSwitch : MonoBehaviour
{
    public GameObject onOB;
    public GameObject offOB;

    public GameObject lightsText;


    public GameObject lightOB;


    public AudioSource switchClick;

    public bool lightsAreOn;
    public bool lightsAreOff;
    public bool inReach;


    void Start()
    {
        inReach = false;
        lightsAreOn = false;
        lightsAreOff = true;
        onOB.SetActive(false);
        offOB.SetActive(true);
        lightOB.SetActive(false);
    }



    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = true;
            lightsText.SetActive(true);
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            lightsText.SetActive(false);
        }
    }



    void Update()
    {
        if(lightsAreOn && inReach && Input.GetButtonDown("Interact"))
        {
            lightOB.SetActive(false);
            onOB.SetActive(false);
            offOB.SetActive(true);
            switchClick.Play();
            lightsAreOff = true;
            lightsAreOn = false;
        }

        else if (lightsAreOff && inReach && Input.GetButtonDown("Interact"))
        {
            lightOB.SetActive(true);
            onOB.SetActive(true);
            offOB.SetActive(false);
            switchClick.Play();
            lightsAreOff = false;
            lightsAreOn = true;
        }


    }
}
