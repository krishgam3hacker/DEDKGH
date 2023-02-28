using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Game
{

public class MainMenuController : MonoBehaviour
{
    [SerializeField] private GameObject _mainScreen;
    [SerializeField] private GameObject _joinScreen;
    [SerializeField] private Button _hostButton;
    [SerializeField] private Button _joinButton;

    [SerializeField] private Button _submitCodeButton;
    [SerializeField] private TextMeshProUGUI _codetest;
    // Start is called before the first frame update
    void OnEnable()
    {
        _hostButton.onClick.AddListener(OnHostClicked);
        _joinButton.onClick.AddListener(OnJoinClicked);
        _submitCodeButton.onClick.AddListener(OnSubmitCodeClicked);
    }

    void OnDisable()
    {
        _hostButton.onClick.RemoveListener(OnHostClicked);
        _joinButton.onClick.RemoveListener(OnJoinClicked);
        _submitCodeButton.onClick.RemoveListener(OnSubmitCodeClicked);
    }
    private async void OnHostClicked()
    {
        Debug.Log("Host");
       bool succeeded = await GameLobbyManager.Instance.CreateLobby();
        if(succeeded)
        {
            SceneManager.LoadSceneAsync("Lobby");
        }
    }
    private void OnJoinClicked()
    {
        Debug.Log("Join");
        _mainScreen.SetActive(false);
        _joinScreen.SetActive(true);
    }

    private async void OnSubmitCodeClicked()
    {
        string code = _codetest.text;
        code = code.Substring(0, code.Length - 1);
        bool succeeded = await GameLobbyManager.Instance.JoinLobby(code);
        Debug.Log(code);
        if (succeeded)
        {
            SceneManager.LoadSceneAsync("Lobby");
        }
    }
}

}
