using System.Collections;
using System.Collections.Generic;
using Mono.Cecil.Cil;
using TMPro;
using UnityEngine;

public class ObjectiveUpdate : MonoBehaviour
{
    
    [SerializeField] private TextMeshProUGUI textOb;
    [SerializeField]  private GameObject updater;
    [SerializeField]  private string objective = "find your mom";
    private float timer = 2f;
    // Start is called before the first frame update
    void Start()
    {
        textOb.GetComponent<TextMeshProUGUI>().enabled = true;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Debug.Log("Player detected, objective updated");
            textOb.text = objective.ToString();
            StartCoroutine(DisableText());
        }
    }
    
    
    IEnumerator DisableText()
    {
        yield return new WaitForSeconds(timer);

        Destroy(updater);

    }
}
