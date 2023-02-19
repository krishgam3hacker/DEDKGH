using UnityEngine;
using Cinemachine;
using Unity.Netcode;
using QFSW;
using QFSW.QC;

public class MultiCamController : NetworkBehaviour
{
    public CinemachineFreeLook freelookCam;
    public GameObject cam;
    public float cameraHeight = 10f;
    public float cameraDistance = 20f;

    private void Start()
    {
        CamFind();
            
        PlayerFind();
  
    }


    [Command]
    private void CamFind()
    {
        if (freelookCam == null)
        {
            cam = GameObject.FindWithTag("CM");
        }
        freelookCam = cam.GetComponent< CinemachineFreeLook>();
    }


    [Command]
    public void PlayerFind()
    {

      
            Debug.Log("cam start");
            // Find the player object
            GameObject player = NetworkManager.Singleton.ConnectedClients[NetworkManager.Singleton.LocalClientId].PlayerObject.gameObject;
            if (player != null)
            {
            Debug.Log("player found");
            // Set the camera's follow target to the player object
            freelookCam.Follow = player.transform;
            freelookCam.LookAt = player.transform;

             
            }
            else
            {
                Debug.Log("player nada");
            }

    }
}
