using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

    [SerializeField]
    int fps = 60;
    // Start is called before the first frame update
    void Start()
    {
        // Make the game run as fast as possible
        Application.targetFrameRate = fps;
    }

    // Update is called once per frame
    void Update()
    {
        Application.targetFrameRate = fps;
    }
}
