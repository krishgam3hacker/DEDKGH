using System.Collections;
using System.Collections.Generic;
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
}
