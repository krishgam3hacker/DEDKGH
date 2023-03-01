using GameFramework.Core.GameFramework.Manager;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (RelayManager.Instance.IsHost)
        {

        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
