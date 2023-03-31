using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenBoxWithLootScript : MonoBehaviour
{
    public Animator boxOB;
    public GameObject keyOBNeeded;
    public GameObject openText;
    public GameObject keyMissingText;
    public AudioSource openSound;

    public GameObject drop1;
    public GameObject drop2;
    public GameObject drop3;
    public GameObject drop4;
    public GameObject drop5;
    public GameObject drop6;

    public bool inReach;
    public bool isOpen;

    public int randomNumber;



    void Start()
    {
        randomNumber = Random.Range(0, 5);
        inReach = false;
        openText.SetActive(false);
        keyMissingText.SetActive(false);
    }


    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = true;
            openText.SetActive(true);

        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            openText.SetActive(false);
            keyMissingText.SetActive(false);
        }
    }


    void Update()
    {
        if (keyOBNeeded.activeInHierarchy == true && inReach && Input.GetButtonDown("Interact"))
        {
            keyOBNeeded.SetActive(false);
            openSound.Play();
            boxOB.SetBool("open", true);
            openText.SetActive(false);
            keyMissingText.SetActive(false);
            isOpen = true;

            if (randomNumber == 0 )
            {
                drop1.SetActive(true);
            }

            if (randomNumber == 1)
            {
                drop2.SetActive(true);
            }

            if (randomNumber == 2)
            {
                drop3.SetActive(true);
            }

            if (randomNumber == 3)
            {
                drop4.SetActive(true);
            }

            if (randomNumber == 4)
            {
                drop5.SetActive(true);
            }

            if (randomNumber == 5)
            {
                drop6.SetActive(true);
            }
        }

        else if (keyOBNeeded.activeInHierarchy == false && inReach && Input.GetButtonDown("Interact"))
        {
            openText.SetActive(false);
            keyMissingText.SetActive(true);
        }

        if(isOpen)
        {
            boxOB.GetComponent<BoxCollider>().enabled = false;
            boxOB.GetComponent<OpenBoxScript>().enabled = false;
            keyMissingText.SetActive(false);
        }
    }
}
