using Cinemachine;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class GameManager1 : MonoBehaviour
{

   [SerializeField] private static GameManager1 instance;

    private List<PlayerInput> players = new List<PlayerInput>();
    [SerializeField]
    private List<Transform> startingPoints;
    [SerializeField]
    private List<LayerMask> playerLayers;

    [SerializeField] private PlayerInputManager playerInputManager;


    [SerializeField]
    int fps = 70;

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

        //
        Transform playerParent= player.transform.parent;
        playerParent.position = startingPoints[players.Count - 1].position;
    }








}
