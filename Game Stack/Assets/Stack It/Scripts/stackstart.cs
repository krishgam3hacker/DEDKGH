using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class stackstart : MonoBehaviour
{
    public void PlayGame()
    {
        SceneManager.LoadScene(9);
    }

    public void Menu()
    {
        SceneManager.LoadScene(1);
    }
    public void GoBack()
    {
        SceneManager.LoadScene(8);
    }

    public void QuitGame()
    {
        Debug.Log("Quit!");
        Application.Quit();
    }
}
