using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NinjaStart : MonoBehaviour
{
    public void PlayGame()
    {
        SceneManager.LoadScene(5);
    }

    public void Menu()
    {
        SceneManager.LoadScene(1);
    }
    public void GoBack()
    {
        SceneManager.LoadScene(4);
    }

    public void QuitGame()
    {
        Debug.Log("Quit!");
        Application.Quit();
    }



}