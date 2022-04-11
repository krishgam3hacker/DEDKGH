
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using Cinemachine;
using System.Collections;

public class GameManager : MonoBehaviour
{
	
	public static GameManager current;
	public CinemachineVirtualCamera myCinemachine;

	public float deathSequenceDuration = 1.5f;	

	private GameObject cam;
	//spawn particle   -v-
	//public GameObject spawnPrefab;
	public Transform playerPrefab;
	public Transform spawnPoint;
	public int spawnDelay = 2;
	private GameObject point;

	float totalGameTime;						//Length of the total game time
	bool isGameOver;                            //Is the game currently over?
	[SerializeField]
	GameObject livePlayer;
	
	Player player;




	void Awake()
	{
		
		player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		
	}

	public IEnumerator RespawnPlayer()
	{
		Debug.Log("Respawning Soon");
		yield return new WaitForSeconds(spawnDelay);
		var newPlayer = Instantiate(playerPrefab, spawnPoint.position, spawnPoint.rotation);
		//GameObject clone = Instantiate(spawnPrefab, spawnPoint.position, spawnPoint.rotation) as GameObject;        spawn particle
		//mainsrc.PlayOneShot(RespawnSound);
		//Destroy(clone, 2f);          destroy spawn particle

		myCinemachine.m_Follow = newPlayer;
	}
	public void FixedUpdate()
    {
		if ( livePlayer == null)
        {
			livePlayer = GameObject.FindGameObjectWithTag("Player");
			Debug.Log("Player Found");
		}

		if (myCinemachine == null)
		{
			Debug.Log("No Player Set");
			cam = GameObject.FindGameObjectWithTag("cinecam");
			myCinemachine = cam.GetComponent<CinemachineVirtualCamera>();
			
			myCinemachine.Follow = livePlayer.transform;
			Debug.Log("Player Set");
			return;
		}


		if (spawnPoint == null)
		{
			point = GameObject.FindGameObjectWithTag("Respawn");
			spawnPoint = point.GetComponent<Transform>();
			Debug.Log("spawnpoint set");
			return;
		}
	}

	public  void KillPlayer()
	{
		Debug.Log("killed");
		Destroy(player.gameObject);
		SceneManager.LoadScene(2);
		

	}

	void Update()
	{
		//If the game is over, exit
		if (isGameOver)
			return;

		//Update the total game time and tell the UI Manager to update
		totalGameTime += Time.deltaTime;

		livePlayer = GameObject.FindGameObjectWithTag("Player");
		myCinemachine.Follow = livePlayer.transform;
	}

	public static bool IsGameOver()
	{
		//If there is no current Game Manager, return false
		if (current == null)
			return false;

		//Return the state of the game
		return current.isGameOver;
	}

	
	

	
}
