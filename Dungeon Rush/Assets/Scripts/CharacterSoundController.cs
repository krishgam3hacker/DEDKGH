using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterSoundController : MonoBehaviour
{
    [SerializeField]
    AudioSource audiosource;
    GameObject Speakre;
    public AudioClip stepsound;
    public AudioClip jumpsound;
    
    private void Awake()
    {
        
        audiosource = GetComponent<AudioSource>();
    }

    private void Step()
    {
        audiosource.PlayOneShot(stepsound);
    }

    private void Jump()
    {
        audiosource.PlayOneShot(jumpsound);
    }

    private void FixedUpdate()
    {
        if (audiosource == null)
        {
            Speakre = GameObject.FindGameObjectWithTag("Speaker");
            audiosource = Speakre.GetComponent<AudioSource>();
            return;
        }
    }


}
