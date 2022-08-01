using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlyFreeSpawner : MonoBehaviour
{
    public GameObject[] enemy;
    public float minTime;
    public float maxTime;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("SpawnEnemy", Random.Range (minTime, maxTime), Random.Range (minTime,maxTime));
    }


    void SpawnEnemy()
    {
        Instantiate(enemy[Random.Range(0, enemy.Length)], transform.position, transform.rotation);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
