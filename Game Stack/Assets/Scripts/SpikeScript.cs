using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpikeScript : MonoBehaviour
{

    public float maxTime = 1;
    private float timer = 0;
    public GameObject spikes;
    public float gap;
    // Start is called before the first frame update
    void Start()
    {
        GameObject newspikes = Instantiate(spikes);
        newspikes.transform.position = transform.position + new Vector3(0, UnityEngine.Random.Range(-gap, gap), 0);

    }

    // Update is called once per frame
    void Update()
    {
        if (timer > maxTime)
        {
            GameObject newspikes = Instantiate(spikes);
            newspikes.transform.position = transform.position + new Vector3(0, UnityEngine.Random.Range(-gap, gap), 0);
            Destroy(newspikes, 7);
            timer = 0;
        }
        timer += Time.deltaTime;
    }
}
