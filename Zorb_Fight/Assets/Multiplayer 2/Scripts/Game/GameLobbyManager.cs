using GameFramework.Core;
using GameFramework.Core.Data;
using GameFramework.Events;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Unity.Services.Authentication;
using Unity.Services.Lobbies.Models;
using UnityEngine;
using GameFramework.Core.GameFramework.Manager;
using System.Runtime.InteropServices.WindowsRuntime;

namespace Game 
{

public class GameLobbyManager : Singleton<GameLobbyManager>
{

    private List<LobbyPlayerData> _lobbyPlayerDatas = new List<LobbyPlayerData>();

    private LobbyPlayerData _localLobbyPlayerData;

    private void OnEnable()
    {
        LobbyEvents.OnLobbyUpdated += OnLobbyUpdated;
    }

    private void OnDisable()
    {
        LobbyEvents.OnLobbyUpdated -= OnLobbyUpdated;
    }





    public async Task<bool> CreateLobby()
    {
        LobbyPlayerData playerData = new LobbyPlayerData();
        playerData.Initialize(AuthenticationService.Instance.PlayerId, "HostPlayer");


        bool succeeded = await LobbyManager.Instance.CreateLobby(4, true, playerData.Serialize());
        return succeeded;

    }

    public string GetLobbyCode()
    {
        return LobbyManager.Instance.GetLobbyCode();
    }

    public async Task<bool> JoinLobby(string code)
    {
        LobbyPlayerData playerData = new LobbyPlayerData();
        playerData.Initialize(AuthenticationService.Instance.PlayerId, "JoinPlayer");



        bool succeded = await LobbyManager.Instance.JoinLobby(code, playerData.Serialize());
        return succeded;
    }

    private void OnLobbyUpdated(Lobby lobby)
    {
        List<Dictionary<string, PlayerDataObject>> playerData = LobbyManager.Instance.GetPlayersData();
        _lobbyPlayerDatas.Clear();

        foreach(Dictionary<string, PlayerDataObject> data in playerData)
        {
            LobbyPlayerData lobbyPlayerData = new LobbyPlayerData();
            lobbyPlayerData.Initialize(data);

            if(lobbyPlayerData.Id == AuthenticationService.Instance.PlayerId)
            {
                _localLobbyPlayerData = lobbyPlayerData;

            }

            //stored data 
            _lobbyPlayerDatas.Add(lobbyPlayerData);
        }

            LobbyEvents.OnLobbyUpdated?.Invoke(lobby);

    }

    public  List<LobbyPlayerData> GetPlayers()
    {
            return _lobbyPlayerDatas;
    }

    public async  Task<bool> SetPlayerReady()
    {
        _localLobbyPlayerData.IsReady = true;
        return await LobbyManager.Instance.UpdatePlayerData(_localLobbyPlayerData.Id, _localLobbyPlayerData.Serialize());
    }


    }

}


