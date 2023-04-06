using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LookAtObjects : MonoBehaviour
{
    public TextMeshProUGUI textOB;
    public string description = "Description";

    public bool inReach;


    void Start()
    {
        textOB.GetComponent<TextMeshProUGUI>().enabled = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = true;
            textOB.GetComponent<TextMeshProUGUI>().enabled = true;
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            textOB.GetComponent<TextMeshProUGUI>().enabled = false;
            textOB.GetComponent<TextMeshProUGUI>().text = "";
        }
    }

    void Update()
    {
        if (inReach && Input.GetButtonDown("Interact"))
        {
            textOB.text = description.ToString();
        }   

    }
}
