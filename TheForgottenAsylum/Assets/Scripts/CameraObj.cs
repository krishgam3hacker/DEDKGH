using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraObj : MonoBehaviour
{
    public GameObject Camera;

    public AudioSource CameraturnOn;
    public AudioSource CameraturnOff;

    public bool on;
    public bool off;




    void Start()
    {
        off = true;
        Camera.SetActive(false);
    }




    void Update()
    {
        if (off && Input.GetButtonDown("B"))
        {
            Camera.SetActive(true);
            CameraturnOn.Play();
            off = false;
            on = true;
        }
        else if (on && Input.GetButtonDown("B"))
        {
            Camera.SetActive(false);
            CameraturnOff.Play();
            off = true;
            on = false;
        }



    }
}
