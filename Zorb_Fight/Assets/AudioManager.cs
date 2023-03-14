using UnityEngine.Audio;
using UnityEngine;
using System;

public class AudioManager : MonoBehaviour
{
    public Sound[] sounds;
    public AudioMixerGroup mixer;

    void Awake()
    {
        foreach(Sound s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;

            s.source.volume= s.volume;
            s.source.pitch= s.pitch;
            s.source.loop= s.loop;
        }
    }

    private void Start()
    {
        Play("Theme");
    }
    public void Play(string name)
    {
       Sound s = Array.Find(sounds, sound => sound.name == name);
        if (s == null)
        {
            return;
        }
        s.source.outputAudioMixerGroup = mixer;
        s.source.Play();
    }
}
