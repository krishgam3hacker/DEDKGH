using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpScareTrigger : MonoBehaviour
{
    public GameObject _JumpScare;
    public float timer = 2f;



    void Start()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            _JumpScare.SetActive(true);
            Debug.Log("Jumpscare Activated");

        }
    }

}
