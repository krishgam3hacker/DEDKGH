using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CrawlerAi : MonoBehaviour
{
    [SerializeField] private Transform playerTransform;
    
    private NavMeshAgent _navMeshAgent;
    
    public float timer = 14f;

    void Start()
    {
        _navMeshAgent = GetComponent<NavMeshAgent>();
        StartCoroutine(DeleteItem());
    }


    void Update()
    {
        _navMeshAgent.destination = playerTransform.position;
    }
    
    IEnumerator DeleteItem()
    {
        yield return new WaitForSeconds(timer);
        Destroy(gameObject);

    }
}
