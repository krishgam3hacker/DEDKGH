using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Victim : MonoBehaviour
{
    public GameManager gameManager;
    public SpriteRenderer spr;

    public int Hits = 0;
    void OnCollisionEnter2D(Collision2D other)
    {
        if(other.gameObject.tag == "enemy")
        {
            Sound_Script.PlaySound("Death");
            Handheld.Vibrate();
            gameManager.GameOver();

            /*
            if (Hits == 3)
            {
                Debug.Log("dead");
                spr.color = Color.yellow;
                Sound_Script.PlaySound("Death");
                Handheld.Vibrate();
                gameManager.GameOver();
            }
            else
            {
                Hits++;
            }
            */


        }
    }
}
