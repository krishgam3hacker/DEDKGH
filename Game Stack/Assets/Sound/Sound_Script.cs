using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Sound_Script : MonoBehaviour
{

    public static AudioClip PointSound, DeathSound, ButtonPress;
    static AudioSource audioSrc;
    // Start is called before the first frame update
    void Start()
    {
        PointSound = Resources.Load<AudioClip>("PointSound");
        DeathSound = Resources.Load<AudioClip>("DeathSound");
        ButtonPress = Resources.Load<AudioClip>("ButtonPress");

        audioSrc = GetComponent<AudioSource> ();
    }

    // Update is called once per frame
    void Update()
    {

    }
        public static void PlaySound (string clip)
        { 
        switch (clip)
            {
                case "PointSound":
                    audioSrc.PlayOneShot(PointSound);
                    break;
                case "DeathSound":
                    audioSrc.PlayOneShot(DeathSound);
                    break;
                case "ButtonPress":
                    audioSrc.PlayOneShot(ButtonPress);
                    break;
                
        }
        }
    
}
