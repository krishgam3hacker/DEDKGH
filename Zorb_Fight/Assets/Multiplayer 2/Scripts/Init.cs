using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Init : MonoBehaviour
{
    // Start is called before the first frame update
    async void Start()
    {
        //initializes unity services
        await UnityServices.InitializeAsync();

        if(UnityServices.State == ServicesInitializationState.Initialized) 
        {
            //call OnSignedIn after signing in 
            AuthenticationService.Instance.SignedIn += OnSignedIn;

        await AuthenticationService.Instance.SignInAnonymouslyAsync();



            //after sign in stored user id in player prefs
            if(AuthenticationService.Instance.IsSignedIn)
            {
                string username = PlayerPrefs.GetString(key: "Username");
                if(username != null)
                {
                    username = "Player";
                    PlayerPrefs.SetString("Username", username);
                }

                SceneManager.LoadSceneAsync("MainMenu");
            }
        }
    }

    private void OnSignedIn()
    {
       Debug.Log($"Player Id: {AuthenticationService.Instance.PlayerId}");
        Debug.Log($"Token: {AuthenticationService.Instance.PlayerId}");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
