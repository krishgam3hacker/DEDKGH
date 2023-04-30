using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CrawlerAi : MonoBehaviour
{
    [SerializeField] private Transform playerTransform;
    
    private NavMeshAgent _navMeshAgent;

    void Start()
    {
        _navMeshAgent = GetComponent<NavMeshAgent>();
    }


    void Update()
    {
        _navMeshAgent.destination = playerTransform.position;
    }
}
