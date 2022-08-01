using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public void GameSelect()
    {
        SceneManager.LoadScene(1);

    }
    public void PlayFlappy()
    {
        SceneManager.LoadScene(2);
    }

    public void PlayNinja()
    {
        SceneManager.LoadScene(4);
    }

    public void PlayFlyFree()
    {
        SceneManager.LoadScene(6);
    }

    public void PlayStackIt()
    {
        SceneManager.LoadScene(8);
    }

   public void debugentry()
    {
        SceneManager.LoadScene(10);
    }


    public void QuitGame()
    {
        Debug.Log("Quit!");
        Application.Quit();
    }

}


