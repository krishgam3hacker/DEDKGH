using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.Core;
using Unity.Services.Authentication;
using Unity.Services.Lobbies;
using Unity.Services.Lobbies.Models;

public class test_lobby : MonoBehaviour
{
    
    private async void start()
    {
        // Starts multiplayer shit.
        await UnityServices.InitializeAsync();

        //sign in annoymous
        AuthenticationService.Instance.SignedIn += () => 
         {
          Debug.Log("signed in" + AuthenticationService.Instance.PlayerId);
         };
           await AuthenticationService.Instance.SignInAnonymouslyAsync();
    }


    private async void CreateLobby()
    {
    string lobbyName = "MyLobby";
    int maxPlayers = 6;
    //lobby create command
    Lobby lobby = await LobbyService.Instance.CreateLobbyAsync(lobbyName, maxPlayers);
    Debug.Log("Created Lobby" + lobby.Name + "" + lobby.MaxPlayers);
    } 

public void button()
{
    start();
    CreateLobby();
}









}

