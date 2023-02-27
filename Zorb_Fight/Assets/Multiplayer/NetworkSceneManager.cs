using UnityEngine;
using UnityEngine.SceneManagement;
using System.Threading.Tasks;

public static class NetworkSceneManager
{
    public static async Task LoadSceneAsync(string sceneName)
    {
        var asyncOperation = SceneManager.LoadSceneAsync(sceneName);

        while (!asyncOperation.isDone)
        {
            await Task.Yield();
        }
    }
}