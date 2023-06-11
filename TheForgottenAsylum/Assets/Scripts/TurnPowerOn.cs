using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class TurnPowerOn : MonoBehaviour
{
    
    public GameObject[] lights;
    public GameObject[] _doors;
    public GameObject[] _dialogues;

    public GameObject text;

    public bool powerIsOn;

    private bool inReach;

    void Start()
    {

        foreach (GameObject ob in lights)
        {
            ob.SetActive(false);
        }

        foreach (GameObject dr in _doors)
        {
            dr.GetComponentInChildren<Doors>().enabled = false;
        }

        foreach(GameObject dia in _dialogues)
        {
            dia.GetComponent<Dialogue>().enabled = false;
        }

        text.SetActive(false);

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach" && !powerIsOn)
        {
            inReach = true;
            text.SetActive(true);
        }

    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            text.SetActive(false);
        }
    }

    void Update()
    {
        if (Input.GetButtonDown("Interact") && inReach)
        {
            powerIsOn = true;
        }

        if(powerIsOn)
        {
            foreach (GameObject ob in lights)
            {
                ob.SetActive(true);
            }

            foreach (GameObject dr in _doors)
            {
                dr.GetComponentInChildren<Doors>().enabled = true;
            }

            foreach (GameObject dia in _dialogues)
            {
                dia.GetComponent<Dialogue>().enabled = true;
            }

            inReach = false;
            text.SetActive(false);
        }

        if (!powerIsOn)
        {
            foreach (GameObject ob in lights)
            {
                ob.SetActive(false);
            }


            foreach (GameObject dr in _doors)
            {
                dr.GetComponentInChildren<Doors>().enabled = false;
            }

            foreach (GameObject dia in _dialogues)
            {
                dia.GetComponent<Dialogue>().enabled = false;
            }
        }

    }
}
