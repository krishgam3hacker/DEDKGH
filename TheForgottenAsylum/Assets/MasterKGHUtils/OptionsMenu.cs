using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.Rendering.Universal;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class OptionsMenu : MonoBehaviour
{
    public AudioMixer mixer;

    public TMP_Dropdown resolutionDropdown;

    public GameObject optionsMenuUI;
    public GameObject creditsMenuUI;
    public GameObject mainMenuUI;
    public string SceneName;


    Resolution[] resolutions;

    private void Start()
    {
        resolutions = Screen.resolutions;
        //clear all resolutions
        resolutionDropdown.ClearOptions();

        List<string> options = new List<string>();

        int currectResolutionIndex = 0;
        for(int i = 0; i < resolutions.Length; i++)
        {
            string option = resolutions[i].width + "x" + resolutions[i].height;
            options.Add(option);

            if (resolutions[i].width == Screen.currentResolution.width && resolutions[i].height == Screen.currentResolution.height)
            {
                currectResolutionIndex = i;
            }
        }
        resolutionDropdown.AddOptions(options);
        resolutionDropdown.value = currectResolutionIndex;
        resolutionDropdown.RefreshShownValue();
    }
    public void SetVolume(float volume)
    {
        FindObjectOfType<AudioManager>().Play("Click");

        Debug.Log(volume);
        mixer.SetFloat("volumeMaster", volume);

    }

    [SerializeField] private UniversalRenderPipelineAsset _myPipeline;
    public void SetQuality(int qualityIndex)
    {
        FindObjectOfType<AudioManager>().Play("Click");

        QualitySettings.SetQualityLevel(qualityIndex);
        Debug.Log(qualityIndex);

        _myPipeline.shadowDistance = 10;
        
    }

    public void SetFullScreen(bool isFullscreen)
    {
        Screen.fullScreen = isFullscreen;
        FindObjectOfType<AudioManager>().Play("Click");

    }

    public void SetResolution(int resolutionIndex)
    {
        FindObjectOfType<AudioManager>().Play("Click");

        Resolution resolution = resolutions[resolutionIndex];
        Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
    }

    public void CloseOptions()
    {
        optionsMenuUI.SetActive(false);
        mainMenuUI.SetActive(true);

        FindObjectOfType<AudioManager>().Play("Click");

    }
    public void OpenOptions()
    {
        optionsMenuUI.SetActive(true);
        mainMenuUI.SetActive(false);
        FindObjectOfType<AudioManager>().Play("Click");


    }

    public void CloseCredits()
    {
        creditsMenuUI.SetActive(false);
        mainMenuUI.SetActive(true);
        FindObjectOfType<AudioManager>().Play("Click");

    }
    public void OpenCredits()
    {
        creditsMenuUI.SetActive(true);
        mainMenuUI.SetActive(false);
        FindObjectOfType<AudioManager>().Play("Click");


    }



    public void PlayGame()
    {
        FindObjectOfType<AudioManager>().Play("Click");

        Time.timeScale = 1f;

        StartCoroutine(LoadSceneAsync(SceneName));
        SceneManager.LoadSceneAsync(SceneName);
    }
    public void QuitGame()
    {
        FindObjectOfType<AudioManager>().Play("Click");

        Debug.Log("quit game");
        Application.Quit();
    }


    IEnumerator LoadSceneAsync(string SceneName)
    {
        AsyncOperation operation =  SceneManager.LoadSceneAsync(SceneName);


        while (!operation.isDone)
        {
            float progressValue = Mathf.Clamp01((operation.progress / 0.9f));
            yield return null;
        }
    }
    
}
