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
using Unity.Services.Relay.Models;
using Unity.Netcode.Transports.UTP;
using System.Threading.Tasks;
using Unity.Networking.Transport.Relay;

public class MultiplayerManager : MonoBehaviour
{
    public static MultiplayerManager Instance { get; private set; }


    [SerializeField] private Transform spawnedObjectPrefab;
    private Transform spawnedObjectTransform;
    [SerializeField] private Transform spawnLocation;

    [SerializeField] private int MaxConnections = 2;

    //autheticates player
    private  void Awake()
    {
        Instance = this;
        
    }

    [Command]
    public async Task<string> CreateRelay()
    {
        try
        {
        Allocation allocation = await RelayService.Instance.CreateAllocationAsync(MaxConnections);

          string joinCode = await  RelayService.Instance.GetJoinCodeAsync(allocation.AllocationId);

            Debug.Log(joinCode);
            //sets data for relay
            RelayServerData relayServerData = new RelayServerData(allocation, "dtls");

            NetworkManager.Singleton.GetComponent<UnityTransport>().SetRelayServerData(relayServerData);
            //starts host
            NetworkManager.Singleton.StartHost();

            return joinCode;

        } catch (RelayServiceException e)
        {
            Debug.Log(e);
            return null;
        }

    }

    [Command]
    public async void JoinRelay(string joinCode)
    {
        try
        {
            Debug.Log("Joining Relay with" + joinCode);

          JoinAllocation joinAllocation =  await RelayService.Instance.JoinAllocationAsync(joinCode);

            RelayServerData relayServerData = new RelayServerData(joinAllocation, "dtls");


            NetworkManager.Singleton.GetComponent<UnityTransport>().SetRelayServerData(relayServerData);

            NetworkManager.Singleton.StartClient();

           

    } catch (RelayServiceException e)
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
