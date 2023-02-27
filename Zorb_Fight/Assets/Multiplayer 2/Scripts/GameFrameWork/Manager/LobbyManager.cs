using Mono.CSharp.yyParser;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Threading.Tasks;
using Unity.Services.Authentication;
using Unity.Services.Lobbies;
using Unity.Services.Lobbies.Models;
using Unity.VisualScripting;
using UnityEngine;

namespace GameFramework.Core.GameFramework.Manager
{
    public class LobbyManager : Singleton<LobbyManager>
    {
        private Lobby _lobby;
        private Coroutine _heartbeatCouroutine;
        private Coroutine _refreshLobbyCouroutine;




        public async Task<bool> CreateLobby(int maxPlayers, bool isPrivate, Dictionary<string, string> data)
     {
            Dictionary<string, PlayerDataObject> playerData = SerializePlayerData(data);
            Player player = new Player(AuthenticationService.Instance.PlayerId, null, playerData);
            //creates lobby with options
            CreateLobbyOptions options = new CreateLobbyOptions()
            {
                IsPrivate = isPrivate,
                Player = player
            };

            //catch exceptions
            try
            {

            _lobby = await LobbyService.Instance.CreateLobbyAsync("Lobby", maxPlayers);
            }
            catch(System.Exception e) 
            {
                Debug.Log(e);
                return false;
                    
            };


            
            Debug.Log($"Lobby created with lobby id {_lobby.Id}");

            _heartbeatCouroutine = StartCoroutine(HeartBeatLobbyCoroutine(_lobby.Id, 6f));
            _refreshLobbyCouroutine = StartCoroutine(RefreshLobbyCoroutine(_lobby.Id, 1f));
            return true;
     }
        //sends a ping to keep lobby alive
        private IEnumerator HeartBeatLobbyCoroutine(string lobbyId, float waitTimeSeconds)
        {
            while(true)
            {
                Debug.Log("Heartbeat");
                LobbyService.Instance.SendHeartbeatPingAsync(lobbyId);
                yield return new WaitForSecondsRealtime(waitTimeSeconds);
            }

        }


        private IEnumerator RefreshLobbyCoroutine(string lobbyId, float waitTimeSeconds)
        {
            while (true)
            {
                
               Task<Lobby> task = LobbyService.Instance.GetLobbyAsync(lobbyId);
                yield return new WaitUntil(() => task.IsCompleted);
                Lobby newLobby = task.Result;
                if(newLobby.LastUpdated > _lobby.LastUpdated)
                {
                    _lobby = newLobby;
                }
                yield return new WaitForSecondsRealtime(waitTimeSeconds);
            }

        }

        private Dictionary<string, PlayerDataObject> SerializePlayerData(Dictionary<string, string> data)
        {
            Dictionary<string, PlayerDataObject> playerData = new Dictionary<string, PlayerDataObject>();
            foreach(var (key,value) in data)
            {
                playerData.Add(key, new PlayerDataObject(
                    visibility: PlayerDataObject.VisibilityOptions.Member,
                    value: value));
            }

            return playerData;
        }


        public void OnApplicationQuit()
        {
            if(_lobby != null && _lobby.HostId == AuthenticationService.Instance.PlayerId) 
            {
                LobbyService.Instance.DeleteLobbyAsync(_lobby.HostId);
            }
        }

        public string GetLobbyCode()
        {
            return _lobby?.LobbyCode;
        }

        public async Task<bool> JoinLobby(string code, Dictionary<string, string> playerData)
        {
            JoinLobbyByCodeOptions options = new JoinLobbyByCodeOptions();
            Player player = new Player(AuthenticationService.Instance.PlayerId, null, SerializePlayerData(playerData));
            options.Player = player;
            try
            {

          _lobby =  await LobbyService.Instance.JoinLobbyByCodeAsync(code, options);
            }catch(System.Exception e) {
                Debug.Log(e);
            return false;
            }

            _refreshLobbyCouroutine = StartCoroutine(RefreshLobbyCoroutine(_lobby.Id, 1f));
            return true;



        }
    }





}