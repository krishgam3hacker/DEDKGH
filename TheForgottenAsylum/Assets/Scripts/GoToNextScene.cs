using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToNextScene : MonoBehaviour
{
 [SerializeField] private float _waitTimer = 9f;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(NextScene());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator NextScene()
    {
        yield return new WaitForSeconds(_waitTimer);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
