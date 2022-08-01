using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class addscore : MonoBehaviour
{
    public string tagtext = "score";
     void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == tagtext)  //Trigger in between pipes
        {

        Sound_Script.PlaySound("PointSound");
        Score.scoreval++;
            
        }
    }
}
