using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityStandardAssets.Characters.FirstPerson;

public class PlayerGameManager : MonoBehaviour
{

    [SerializeField] FirstPersonController fpsPlayer;
    [SerializeField] Animator anim;
    [SerializeField] GameObject DeathScreen;
    [SerializeField] PauseMenu Pmenu;
    // Start is called before the first frame update
    void Start()
    {
        fpsPlayer = GetComponent<FirstPersonController>();
 

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Tab))
        {
            PlayerDeath();
        }
    }

    // OnCollisionEnter is called when this collider/rigidbody has begun touching another rigidbody/collider
     void OnTriggerEnter(Collider collision)
    {
        if (collision.gameObject.tag == "Enemy")
        {
            Debug.Log("contact");
            anim.enabled = true;
            Debug.Log(collision.gameObject.name);
            collision.gameObject.SetActive(false);
            fpsPlayer.enabled = false;
            anim.Play("Base Layer.Die", 0, 0.25f);
            StartCoroutine(wait());

        }
    }

    IEnumerator wait()
    {
        yield return new WaitForSeconds(2f);
        PlayerDeath();
    }
    public void PlayerDeath()
    {
        Pmenu.LoadMenu();
       /* Debug.Log("dead");
        Time.timeScale = 0.01f;
        DeathScreen.gameObject.SetActive(true);
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        PauseMenu.GameIsPaused = true;*/

    }

}
