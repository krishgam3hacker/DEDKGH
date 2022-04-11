using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DnDestroy : MonoBehaviour
{
    public static Player current;
    private void Awake()
    {
        if (current != null && current != this)
        {
            //...destroy this and exit. There can only be one Game Manager
            Destroy(gameObject);
            return;
        }

        //Set this as the current game manager
        current = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

        //Persis this object between scene reloads
        DontDestroyOnLoad(gameObject);
    }
}
