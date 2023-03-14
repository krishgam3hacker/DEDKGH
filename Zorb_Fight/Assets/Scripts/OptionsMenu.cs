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
   [SerializeField] private bool optionmenuopen = false;
    public GameObject creditsMenuUI;

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
        Debug.Log(volume);
        mixer.SetFloat("volumeMaster", volume);

    }

    [SerializeField] private UniversalRenderPipelineAsset _myPipeline;
    public void SetQuality(int qualityIndex)
    {
        QualitySettings.SetQualityLevel(qualityIndex);
        Debug.Log(qualityIndex);

        _myPipeline.shadowDistance = 10;
        
    }

    public void SetFullScreen(bool isFullscreen)
    {
        Screen.fullScreen = isFullscreen;
    }

    public void SetResolution(int resolutionIndex)
    {
        Resolution resoltuion = resolutions[resolutionIndex];
        Screen.SetResolution(resoltuion.width, resoltuion.height, Screen.fullScreen);
    }

    public void CloseOptions()
    {
        optionsMenuUI.SetActive(false);

    }
    public void OpenOptions()
    {
        optionsMenuUI.SetActive(true);

    }

    public void CloseCredits()
    {
        creditsMenuUI.SetActive(false);

    }
    public void OpenCredits()
    {
        creditsMenuUI.SetActive(true);

    }

    public void PlayGame()
    {
        SceneManager.LoadSceneAsync("MainGame");
    }
    public void QuitGame()
    {
        Debug.Log("quit game");
        Application.Quit();
    }
}
