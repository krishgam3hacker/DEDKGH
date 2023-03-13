using UnityEngine.SceneManagement;
using UnityEngine;

public class ObjectManager : MonoBehaviour
{
    private static ObjectManager instance;

    private void Awake()
    {
        // If an instance of this script already exists, destroy this new instance
        if (instance != null)
        {
            Destroy(gameObject);
            return;
        }

        // Otherwise, set this instance as the only instance
        instance = this;
        DontDestroyOnLoad(gameObject);

        // Subscribe to the scene unloaded event to destroy any newly created objects
        SceneManager.sceneUnloaded += DestroyNewObjects;
    }

    private void DestroyNewObjects(Scene scene)
    {
        // Find all gameobjects with the tag "NewObject"
        GameObject[] newObjects = GameObject.FindGameObjectsWithTag("GameController");

        // Destroy all new objects
        foreach (GameObject newObject in newObjects)
        {
            Destroy(newObject);
        }
    }
}
