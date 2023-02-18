using UnityEngine;
using Cinemachine;
using Unity.Netcode;
using QFSW;
using QFSW.QC;

public class MultiCamController : NetworkBehaviour
{
    public CinemachineFreeLook freelookCam;
    public float cameraHeight = 10f;
    public float cameraDistance = 20f;

    [Command]
    public void CamFind()
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

                // Set the camera's height and distance from the player
                //Vector3 cameraOffset = new Vector3(0f, cameraHeight, -cameraDistance);
                //freelookCam.transform.position = player.transform.position + cameraOffset;
            }
        Debug.Log("player nada");

    }
}
