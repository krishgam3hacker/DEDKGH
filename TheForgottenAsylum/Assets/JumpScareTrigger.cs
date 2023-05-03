using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JumpScareTrigger : MonoBehaviour
{
    public GameObject _JumpScare;
    public AudioSource JumpscareTriggerNoise;
    public float timer = 2f;



    void Start()
    {

    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            _JumpScare.SetActive(true);
            JumpscareTriggerNoise.Play();
            Debug.Log("Jumpscare Activated");
            StartCoroutine(RemoveTrigger());

        }
    }
    
    IEnumerator RemoveTrigger()
    {
        yield return new WaitForSeconds(timer);
        Destroy(gameObject);

    }

}
