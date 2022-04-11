using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    public Animator transition;
    public string lvl;

    public float transitiontime = 1f;
    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            Debug.Log("lvl change");
            LoadNextLevel();
        }

    }

    public void LoadNextLevel()
    {
        SceneManager.LoadScene(lvl);
        // StartCoroutine(LoadLevel(SceneManager.GetActiveScene().buildIndex + 1));
        
    }

      IEnumerator LoadLevel(int levelIndex)
      {
          transition.SetTrigger("Start");

          yield return new WaitForSeconds(transitiontime);

          SceneManager.LoadScene(levelIndex);


      }
    
}
