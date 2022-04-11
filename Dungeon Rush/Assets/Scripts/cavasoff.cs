using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cavasoff : MonoBehaviour
{
    
    Canvas canva;
    [SerializeField]
    Canvas cnva;

    void Awake()
    {
        canva = GameObject.FindGameObjectWithTag("Inventory").GetComponent<Canvas>();
    }
  public void offcanvas()
    {

    canva.enabled = false;
    cnva.enabled = false;
    }
   public void oncanvas()
    {

        canva.enabled = true;
        cnva.enabled = true;
    }

}
