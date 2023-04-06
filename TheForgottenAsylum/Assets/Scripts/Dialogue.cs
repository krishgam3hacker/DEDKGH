using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Dialogue : MonoBehaviour
{
    public TextMeshProUGUI textOB;
    public GameObject Activator;
    public string dialogue = "Dialogue";

    public float timer = 2f;



    void Start()
    {
        textOB.GetComponent<TextMeshProUGUI>().enabled = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            textOB.GetComponent<TextMeshProUGUI>().enabled = true;
            textOB.text = dialogue.ToString();
            StartCoroutine(DisableText());
        }
    }

    IEnumerator DisableText()
    {
        yield return new WaitForSeconds(timer);
        textOB.GetComponent<TextMeshProUGUI>().enabled = false;
        Destroy(Activator);

    }


}
