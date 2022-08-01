using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Devour : MonoBehaviour
{
    void OnCollisionEnter2D(Collision2D col)
    {
        Destroy(col.gameObject);
    }

}
