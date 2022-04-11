using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AudMan : MonoBehaviour
{
    [SerializeField]
    AudioSource mainSrc;
    public AudioClip clickfx;
    public AudioClip coinfx;

    bool isSoundPlay = true;

    public void playGameBgSound()
    {

        if (isSoundPlay)
            stopGameBgSound();
        else
            mainSrc.Play();

        isSoundPlay = !isSoundPlay;
    
    }


    public void stopGameBgSound()
    {
        mainSrc.Stop();
    }
    public void controlvolume(float Value)
    {
        
        mainSrc.volume = Value;
    }


 

    public void ClickSound()
    {
        mainSrc.PlayOneShot(clickfx);
    }

   

    public void coinsound()
    {
        mainSrc.PlayOneShot(coinfx);
    }
}
