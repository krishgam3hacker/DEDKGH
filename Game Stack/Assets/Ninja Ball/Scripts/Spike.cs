using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spike : MonoBehaviour
{
    public GameManager gameManager;
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Spike")  //collide with only spike
        {

        Debug.Log("Hit");
            Sound_Script.PlaySound("Death");
            Handheld.Vibrate();
        gameManager.GameOver();
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //score trigger
        Score.scoreval++;
    }

    
}

