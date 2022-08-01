using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScene : MonoBehaviour
{
   
    public void LevelSelect1()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void QuitGame()
    {
        
        Application.Quit();
    }

  
    public void MainScene()
    {
        SceneManager.LoadScene(1);
    }
}
