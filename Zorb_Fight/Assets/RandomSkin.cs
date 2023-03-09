using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSkin : MonoBehaviour
{

    public Material[] materials;



    void Start()
    {
        int randomIndex = Random.Range(0, materials.Length);
        Renderer renderer = GetComponent<Renderer>();
        renderer.material = materials[randomIndex];
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
