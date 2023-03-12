using Cinemachine;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class GameManager1 : MonoBehaviour
{

   [SerializeField] private static GameManager1 instance;

    private List<PlayerInput> players = new List<PlayerInput>();

    [SerializeField] private PlayerInputManager playerInputManager;


    [SerializeField]
    int fps = 70;

    public Transform[] spawnLocations;

    public List<LayerMask> playerLayers;


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








}
