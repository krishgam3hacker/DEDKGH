using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoToNextScene : MonoBehaviour
{
 [SerializeField] private float _waitTimer = 9f;
 public string loadingScreenSceneName;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(NextScene());
    }



    IEnumerator NextScene()
    {
        yield return new WaitForSeconds(_waitTimer);
        SceneManager.LoadSceneAsync(loadingScreenSceneName, LoadSceneMode.Additive);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
