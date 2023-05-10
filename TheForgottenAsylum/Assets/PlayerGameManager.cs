using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityStandardAssets.Characters.FirstPerson;

public class PlayerGameManager : MonoBehaviour
{

    [SerializeField] FirstPersonController fpsPlayer;
    [SerializeField] Animator anim;
    [SerializeField] GameObject DeathScreen;
    // Start is called before the first frame update
    void Start()
    {
        fpsPlayer = GetComponent<FirstPersonController>();
 

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // OnCollisionEnter is called when this collider/rigidbody has begun touching another rigidbody/collider
     void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            Debug.Log("contact");
            anim.enabled = true;
           fpsPlayer.enabled = false;
            collision.gameObject.SetActive(false);
            anim.Play("Base Layer.Die", 0, 0.25f);
            DeathScreen.gameObject.SetActive(true); 
            Time.timeScale = 0f;
            PauseMenu.GameIsPaused = true;

        }
    }
}
