using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDetails : MonoBehaviour
{
    public int playerID;
    public Vector3 startPos;

    // Start is called before the first frame update
    void Start()
    {
        transform.position = startPos;
        transform.rotation = Quaternion.identity;
    }
}
