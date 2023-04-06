using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUD : MonoBehaviour
{
    public GameObject flashLightON;
    public GameObject flashLightOFF;
    public GameObject flashLightOB;


    public Light light;




    void Start()
    {

        flashLightON.SetActive(false);
        light.enabled = false;
    }




    void Update()
    {
        if (light.enabled == true)
        {
            flashLightON.SetActive(true);
            flashLightOFF.SetActive(false);
        }
        else
        {
            flashLightON.SetActive(false);
            flashLightOFF.SetActive(true);
        }

    }
}
