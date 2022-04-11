using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HurtPlayer : MonoBehaviour
{
    private HealthManager healthMan;

    [SerializeField]
    private float waitToHurt = 2f;

    [SerializeField]
    private bool isTouching;

    [SerializeField]
    private int damangeToGive = 10;
    // Start is called before the first frame update
    void Start()
    {
        healthMan = FindObjectOfType<HealthManager>();
    }

    // Update is called once per frame
    void Update()
    {
        /*   if(reloading)
          {
              waitToLoad -= Time.deltaTime;
              if(waitToLoad <= 0)
              {
                  SceneManager.LoadScene(SceneManager.GetActiveScene().name);
              }
          }   */

        if (isTouching)
        {
            waitToHurt -= Time.deltaTime;
            if(waitToHurt <= 0)
            {
                healthMan.HurtPlayer(damangeToGive);
                waitToHurt = 2f;
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if(other.collider.tag == "Player")
        {

            //reloading = true;
            // Destroy(other.gameObject);
            // other.gameObject.SetActive(false);
            other.gameObject.GetComponent<HealthManager>().HurtPlayer(10);
            
        }

    }

    private void OnCollisionStay2D(Collision2D other)
    {
        if (other.collider.tag == "Player")
        {
        isTouching = true;
        }

    }

    private void OnCollisionExit2D(Collision2D other)
    {
        if(other.collider.tag == "Player")
        {
            isTouching = false;
            waitToHurt = 2f;
        }
    }

}
