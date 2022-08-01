using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameDone : MonoBehaviour
{
    public GameManager gm;
    void start()
    {
        gm = GetComponent<GameManager>();
    }
    void OnTriggerEnter2D(Collider2D other)
    {
        
        if (other.tag == "Box")
        {

            Debug.Log("Hitting");
            CancelInvoke("Landed");
           // gameOver = false;

            Invoke("RestartGame", 1f);

            Sound_Script.PlaySound("Death");
            Handheld.Vibrate();
            gm.GameOver();


        }
    }
}
