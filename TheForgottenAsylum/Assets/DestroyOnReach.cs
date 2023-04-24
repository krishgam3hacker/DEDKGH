using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyOnReach : MonoBehaviour
{
    public GameObject Hidder;
    public AudioSource SmilerSound;

    public float timer = 4f;



    void Start()
    {
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            SmilerSound.Play();
            StartCoroutine(DeleteItem());
        }
    }

    IEnumerator DeleteItem()
    {
        yield return new WaitForSeconds(timer);
        SmilerSound.Play();
        Destroy(Hidder);

    }
}
