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
    private float lobbyUpdateTimer;
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
HandleLobbyPollForUpdates();
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

//calling updates of server manualy
private async void HandleLobbyPollForUpdates(){
if (joinedLobby != null){
    lobbyUpdateTimer -= Time.deltaTime;
    if(lobbyUpdateTimer < 0f){
        float lobbyUpdateTimerMax = 1.1f;
        lobbyUpdateTimer = lobbyUpdateTimerMax;

      Lobby lobby =  await LobbyService.Instance.GetLobbyAsync(joinedLobby.Id);
      joinedLobby = lobby;
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


// to check what players are in lobby
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

// set up a new player name
private  async void UpdatePlayerName(string newPlayerName){
    try{
    PlayerName = newPlayerName;
   await LobbyService.Instance.UpdatePlayerAsync(joinedLobby.Id, AuthenticationService.Instance.PlayerId, new UpdatePlayerOptions{
     Data = new Dictionary<string, PlayerDataObject>{
        {"PlayerName", new PlayerDataObject (PlayerDataObject.VisibilityOptions.Member, PlayerName)}
     }
    });
    }catch(LobbyServiceException e){Debug.Log(e);}
}

private void LeaveLobby(){
    try{
    LobbyService.Instance.RemovePlayerAsync(joinedLobby.Id, AuthenticationService.Instance.PlayerId);
    }catch(LobbyServiceException e){Debug.Log(e);}
}

[Command]
private void KickPlayer(){
        try{
    LobbyService.Instance.RemovePlayerAsync(joinedLobby.Id, joinedLobby.Players[1].Id);
    }catch(LobbyServiceException e){Debug.Log(e);}
}


private async void MigrateLobbyHost(){
     try{

    hostLobby = await Lobbies.Instance.UpdateLobbyAsync(hostLobby.Id, new UpdateLobbyOptions{
        HostId = joinedLobby.Players[1].Id
    });
    joinedLobby  = hostLobby;
    PrintPlayers(hostLobby);
    }catch(LobbyServiceException e){Debug.Log(e);}
}

[Command]
private async void DeleteLobby(){
    try{
    await LobbyService.Instance.DeleteLobbyAsync(joinedLobby.Id);
        }catch(LobbyServiceException e){Debug.Log(e);}
}



}

