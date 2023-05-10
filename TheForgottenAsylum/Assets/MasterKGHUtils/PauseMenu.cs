using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
using UnityStandardAssets.Characters.FirstPerson;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;
    public GameObject pauseMenuUI;
    [SerializeField] private PlayerInputActions inputActions;
    [SerializeField] FirstPersonController fpsPlayer;

    // Start is called before the first frame update
    void Start()
    {
        inputActions = new PlayerInputActions();
        inputActions.Enable();
    }

    // Update is called once per frame
    void Update()
    {
        if (inputActions.CharacterControls.Pause.triggered)
        {
            if(GameIsPaused)
            {
                Resume();
            }
            else
            {
                Pause();
            }
        }
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        fpsPlayer.enabled = true;
        Time.timeScale = 1f;
        GameIsPaused = false;
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;

    }

    public void Pause()
    {
        Debug.Log("Pause Game");
        fpsPlayer.enabled = false;
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        GameIsPaused= true;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    public void Restart()
    {
        Debug.Log("GameRestarted");
        SceneManager.LoadScene("Map_kgh");
        Time.timeScale = 1f;
        GameIsPaused = false;
    }

    public void LoadMenu()
    {
        Debug.Log("Loading Menu");
        Time.timeScale = 1f;
        SceneManager.LoadScene("MainMenu");
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    public void QuitGame()
    {
        Debug.Log("quit game");
        Application.Quit();
    }
}
