using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;
using QFSW;
using QFSW.QC;
using UnityEngine.Events;
using Unity.Services.Relay;
using Unity.Services.Core;
using Unity.Services.Authentication;
using System;

public class MultiplayerManager : NetworkBehaviour
{
    // Event that is triggered when a new client connects to the server
    public UnityEvent onPlayerConnect;

    [SerializeField] private Transform spawnedObjectPrefab;
    private Transform spawnedObjectTransform;
    [SerializeField] private Transform spawnLocation;

    //autheticates player
    async void Example_AuthenticatingAPlayer()
    {
        try
        {
            await UnityServices.InitializeAsync();
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
            var playerID = AuthenticationService.Instance.PlayerId;
        }
        catch (Exception e)
        {
            Debug.Log(e);
        }
    }

    [Command]
    void SpawnGoali()
    {
        spawnedObjectTransform = Instantiate(spawnedObjectPrefab, spawnLocation);
        spawnedObjectTransform.GetComponent<NetworkObject>().Spawn(true);
    }



    


}
