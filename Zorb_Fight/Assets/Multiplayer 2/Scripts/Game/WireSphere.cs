using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace Game
{
public class WireSphere : MonoBehaviour
{

        [SerializeField] private Color _color;
        [SerializeField] private float _radius;
    private void OnDrawGizmos()
    {
        // Draw a yellow sphere at the transform's position
        Gizmos.color = _color;
        Gizmos.DrawWireSphere(transform.position, _radius);
    }

}

}
