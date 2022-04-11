using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OnlythisScene : MonoBehaviour
{
    public string lvlname;
    private void Update()
    {
        if (SceneManager.GetActiveScene().name == lvlname)
        {


            this.gameObject.SetActive(false);
        }
        else
           if (SceneManager.GetActiveScene().name != lvlname)
        {
            this.gameObject.SetActive(true);
        }
    }
}
