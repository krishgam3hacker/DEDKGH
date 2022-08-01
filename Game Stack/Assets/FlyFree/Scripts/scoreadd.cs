using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scoreadd : MonoBehaviour
{
    public string tagtext = "score";
    void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == tagtext)  //Trigger in between pipes
        {

            Sound_Script.PlaySound("PointSound");
            Score.scoreval++;

        }
    }

   
}
