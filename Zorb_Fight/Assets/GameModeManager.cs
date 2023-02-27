using QFSW.QC;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using Unity.Services.Lobbies.Models;
using UnityEngine;

public class GameModeManager : MonoBehaviour
{
    public Transform GoliLocation;

    // Start is called before the first frame update
    void Start()
    {
        MultiplayerManager.Instance.SpawnPlayers();
        MultiplayerManager.Instance.SpawnGoali(GoliLocation);

    }

    // Update is called once per frame
    void Update()
    {

    }

    [Command]
    void PlayerSpawn()
    {
        MultiplayerManager.Instance.SpawnPlayers();
    }
}
