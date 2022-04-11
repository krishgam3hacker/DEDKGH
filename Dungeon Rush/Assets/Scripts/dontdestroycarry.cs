using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class dontdestroycarry : MonoBehaviour
{
    //public static  GameObject current;
    public string test;
    
    void Awake()
    {
        GameObject[] objs = GameObject.FindGameObjectsWithTag(test); if (objs.Length > 1)
        {
            Debug.Log(test);
            Destroy(this.gameObject);
        }
        DontDestroyOnLoad(this.gameObject);
    }

   

}
