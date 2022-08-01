using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class unlockachiev : MonoBehaviour
{

    PlayGames pg;
    // Start is called before the first frame update
    void Start()
    {
        pg = GetComponent<PlayGames>();
        pg.UnlockAchievement();
    }

    // Update is called once per frame
    void Update()
    {
       
    }
}
