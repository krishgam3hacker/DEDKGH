using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class GameMaster : MonoBehaviour
{
    public static GameMaster gm;
    public CinemachineVirtualCamera myCinemachine;
    int numberOfDeaths;
    [SerializeField]
    AudioSource mainsrc; 

    void Start()
    {
        if (gm == null)
        {
            gm = GameObject.FindGameObjectWithTag("GM").GetComponent<GameMaster>();
        }

        
    }
    public IEnumerator RespawnPlayer ()
    {
        Debug.Log("Respawning Soon");
        yield return new WaitForSeconds(spawnDelay);
       var newPlayer = Instantiate (playerPrefab, spawnPoint.position, spawnPoint.rotation);
        GameObject clone = Instantiate(spawnPrefab, spawnPoint.position, spawnPoint.rotation) as GameObject;
        mainsrc.PlayOneShot(RespawnSound);
        Destroy(clone, 2f);

        myCinemachine.m_Follow = newPlayer;
    }

    public Transform playerPrefab;
    public Transform spawnPoint;
    public int spawnDelay = 2;
    public GameObject spawnPrefab;
    public AudioClip RespawnSound;
    private GameObject cam;
    private GameObject spec;
    private GameObject point;


 //   public static void KillPlayer (Player player)
 //   {

 //       Destroy(player.gameObject);
 //       gm.StartCoroutine(gm.RespawnPlayer());
       
 //   }

    public void FixedUpdate()
    {
        if (myCinemachine == null)
        {
            Debug.Log("no cinemachine");
            cam = GameObject.FindGameObjectWithTag("cinecam");
            myCinemachine = cam.GetComponent<CinemachineVirtualCamera>();
            return;
        }

        if (mainsrc == null)
        {
            Debug.Log("no speaker");
            spec = GameObject.FindGameObjectWithTag("Speaker");
            mainsrc = spec.GetComponent<AudioSource>();
            return;
        }

        if(spawnPoint == null)
        {
            Debug.Log("no spawnpoint");
            point = GameObject.FindGameObjectWithTag("Respawn");
            spawnPoint = point.GetComponent<Transform>();
            return;
        }

    }

}

