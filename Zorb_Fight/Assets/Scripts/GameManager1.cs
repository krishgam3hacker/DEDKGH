using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class GameManager1 : MonoBehaviour
{
    public float respawnDelay = 5f;
    [SerializeField] private static GameManager1 instance;

    private List<PlayerInput> players = new List<PlayerInput>();

    [SerializeField] private PlayerInputManager playerInputManager;


    [SerializeField]
    int fps = 70;

    public Transform[] spawnLocations;

    public List<LayerMask> playerLayers;


    public GameObject goaliPrefab;
    public Transform goaliSpawnLocation;

    void Start()
    {
        // Make the game run as fast as possible
        Application.targetFrameRate = fps;


    }

    void Update()
    {
     
    }

    public void AddPlayer(PlayerInput player)
    {
        players.Add(player);

        Debug.Log("PlayerInput ID: " + player.playerIndex);

        // Set the player ID, add one to the index to start at Player 1
        player.gameObject.GetComponent<PlayerDetails>().playerID = player.playerIndex + 1;

        // Set the start spawn position of the player using the location at the associated element into the array.
        player.gameObject.GetComponent<PlayerDetails>().startPos = spawnLocations[player.playerIndex].position;

        Transform playerParent = player.transform.parent;


        //convert layer mask to int
        int layerToAdd = (int)Mathf.Log(playerLayers[players.Count].value, 2);

        //set layer
        player.GetComponentInChildren<CinemachineFreeLook>().gameObject.layer = layerToAdd;

        //add layer
        player.GetComponentInChildren<Camera>().cullingMask |= 1 << layerToAdd;

        //set the action
        player.GetComponentInChildren<InputHandler>().horizontal = player.actions.FindAction("Looke");






    }

    public void RespawnBallAndPlayers(float respawnDelays)
    {
        respawnDelays = respawnDelay;
        StartCoroutine(Wait(respawnDelays));


        Debug.Log("Round  Reset");

    }

    IEnumerator Wait(float respawnDelays)
    {
        //Wait for the specified delay time before continuing.
        yield return new WaitForSeconds(respawnDelays);
        //Do the action after the delay time has finished.
        Debug.Log("Finished waiting");

        //find all players
        foreach (PlayerInput player in players)
        {
            player.gameObject.GetComponent<PlayerDetails>().SpawnPlayerBall();
            Debug.Log("player rest");
            //players reset to original spawn points
        }

        // goali spawn in SpawnPOint
        Vector3 goaliSpawn = goaliSpawnLocation.position;
        Instantiate(goaliPrefab, goaliSpawn, Quaternion.identity);

    }




}
