using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingScreen : MonoBehaviour
{
    public float delay = 5f;
    public string sceneName;

    void Start()
    {
        Invoke("LoadScene", delay);
    }

    void LoadScene()
    {
        SceneManager.LoadScene(sceneName);
    }
}
