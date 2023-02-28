using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager1 : MonoBehaviour
{

   [SerializeField] private static GameManager1 instance;

    [SerializeField] GameObject Manager;


    [SerializeField]
    int fps = 70;
    // Start is called before the first frame update
    void Start()
    {
        // Make the game run as fast as possible
        Application.targetFrameRate = fps;
    }

    private void Awake()
    {


        // Otherwise, set this instance as the only instance
      /*  instance = this;
        DontDestroyOnLoad(Manager);*/


    }

    // Update is called once per frame
    void Update()
    {
        
    }









}
