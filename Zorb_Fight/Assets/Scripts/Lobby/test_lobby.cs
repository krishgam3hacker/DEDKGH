using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Services.Core;
using Unity.Services.Authentication;
using Unity.Services.Lobbies;
using Unity.Services.Lobbies.Models;
using QFSW.QC;

public class test_lobby : MonoBehaviour
{
    private Lobby hostLobby;
    private Lobby joinedLobby;

    private float heartbeatTimer;
    private string PlayerName;
    private async void Awake()
    {
        // Starts multiplayer shit.
        await UnityServices.InitializeAsync();

        //sign in annoymous
        AuthenticationService.Instance.SignedIn += () => 
         {
          Debug.Log("signed in" + AuthenticationService.Instance.PlayerId);
         };
           await AuthenticationService.Instance.SignInAnonymouslyAsync();
           //assigning playerid while sign in
           PlayerName = "KGH" + UnityEngine.Random.Range(10,99);
           Debug.Log(PlayerName);
    }

private void Update(){
HandleHeartBeat();
}

//we make heart beat to send data to lobby so it doesnt get destroyed
private async void HandleHeartBeat(){
if (hostLobby != null){
    heartbeatTimer -= Time.deltaTime;
    if(heartbeatTimer < 0f){
        float heartbeatTimerMax = 15f;
        heartbeatTimer = heartbeatTimerMax;

        await LobbyService.Instance.SendHeartbeatPingAsync(hostLobby.Id);
    }
}
}


[Command]
    private async void CreateLobby()
    {
        try{

    string lobbyName = "MyLobby";
    int maxPlayers = 6;

CreateLobbyOptions createLobbyOptions = new CreateLobbyOptions{
       IsPrivate = false,
       Player = GetPlayer(),
       Data = new Dictionary<string, DataObject>{
        {"GameMode", new DataObject(DataObject.VisibilityOptions.Public, "1v1")}
       }
        };

    //lobby create command
    Lobby lobby = await LobbyService.Instance.CreateLobbyAsync(lobbyName, maxPlayers, createLobbyOptions);
    hostLobby = lobby;
    joinedLobby = hostLobby;

    //feedback of lobby created
    Debug.Log("Created Lobby" +  lobby.Name + " " +  lobby.MaxPlayers + " " + lobby.Id + " " + lobby.LobbyCode );
    PrintPlayers(hostLobby);
        } catch(LobbyServiceException e){Debug.Log(e);}
    } 
[Command]
    private async void ListLobbies()
    {
        try{
        //finds all Lobbies present
        QueryResponse queryResponse = await Lobbies.Instance.QueryLobbiesAsync();
        Debug.Log("Lobbies Found: " +  queryResponse.Results.Count);
        //shows all results 
        foreach (Lobby lobby in queryResponse.Results){
            Debug.Log(lobby.Name + "  " + lobby.MaxPlayers+ " " + lobby.Data["GameMode"].Value);
        }
        }catch(LobbyServiceException e){ Debug.Log(e);}
    }


//use code for now
[Command]
    private async void JoinLobbyByCode(string lobbyCode){

                try{
                    //used to give options while joining
                    JoinLobbyByCodeOptions joinLobbyByCodeOptions = new JoinLobbyByCodeOptions{
                    Player = GetPlayer()
                    };
       Lobby lobby = await Lobbies.Instance.JoinLobbyByCodeAsync(lobbyCode, joinLobbyByCodeOptions);
       joinedLobby = lobby;
        Debug.Log("Joined Lobby with code" + lobbyCode);
        PrintPlayers(joinedLobby);
        }catch(LobbyServiceException e){ Debug.Log(e);}
    }

[Command]
    private async void JoinLobby(){

                try{
        //finds all Lobbies present
        QueryResponse queryResponse = await Lobbies.Instance.QueryLobbiesAsync();

       await Lobbies.Instance.JoinLobbyByIdAsync(queryResponse.Results[0].Id);
        }catch(LobbyServiceException e){ Debug.Log(e);}
    }

[Command]
    private async void QuickJoinLobby(){
        try{
        await LobbyService.Instance.QuickJoinLobbyAsync();
        }catch(LobbyServiceException e){ Debug.Log(e);}
    
    }

private Player GetPlayer()
    {
    return new Player{
        Data = new Dictionary<string, PlayerDataObject>{
            {"PlayerName", new PlayerDataObject (PlayerDataObject.VisibilityOptions.Member, PlayerName)}
        }
       };
    }

[Command]
    private void PrintPlayers(){
        PrintPlayers(joinedLobby);
    }
private void PrintPlayers(Lobby lobby)
{
    Debug.Log("PLayers in Lobby" + lobby.Name + " " + lobby.Data["GameMode"].Value);
foreach(Player player in lobby.Players){
    Debug.Log(player.Id + " " + player.Data["PlayerName"].Value);
}
}

//updates gamemode after creating lobby
[Command]
private async void UpdateLobbyGameMode(string gameMode){
    try{

    hostLobby = await Lobbies.Instance.UpdateLobbyAsync(hostLobby.Id, new UpdateLobbyOptions{
        Data = new Dictionary<string, DataObject>{
            {"GameMode",new DataObject(DataObject.VisibilityOptions.Public, gameMode)}
        }
    });
    joinedLobby  = hostLobby;
    PrintPlayers(hostLobby);
    }catch(LobbyServiceException e){Debug.Log(e);}
}









}

