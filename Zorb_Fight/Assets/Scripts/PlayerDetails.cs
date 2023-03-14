using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDetails : MonoBehaviour
{
    public int playerID;
    public Vector3 startPos;
    public GameObject PlayerBall;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = startPos;
        transform.rotation = Quaternion.identity;

    }

   public void SpawnPlayerBall()
    {
        PlayerBall.transform.position = startPos;
        PlayerBall.transform.rotation = Quaternion.identity;
    }
}
