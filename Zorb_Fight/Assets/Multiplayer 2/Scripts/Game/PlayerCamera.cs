using Unity.Netcode;
using UnityEngine;
using Unity.Netcode;

public class PlayerCamera : NetworkBehaviour
{
    [SerializeField] private Camera _camera;

    [ServerRpc]
    public void SendCameraTransformServerRPC(Vector3 position, Quaternion rotation)
    {
        _camera.transform.position = position;
        _camera.transform.rotation = rotation;
    }
}
