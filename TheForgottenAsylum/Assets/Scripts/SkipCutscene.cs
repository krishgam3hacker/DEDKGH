using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;

public class SkipCutscene : MonoBehaviour
{




    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Interact"))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }

    
}
