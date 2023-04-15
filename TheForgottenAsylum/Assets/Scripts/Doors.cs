using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class Doors : MonoBehaviour
{
    public Animator door;
    public GameObject openText;
    public GameObject closeText;
   [SerializeField] private GameObject _keypadObj;

    public AudioSource openSound;
    public AudioSource closeSound;


    public bool inReach;
    private bool doorisOpen;
    private bool doorisClosed;
    [SerializeField] private bool _isUsingKeypad;
    public bool _keypadLocked;





    void Start()
    {
        inReach = false;
        doorisClosed = true;
        doorisOpen = false;
        closeText.SetActive(false);
        openText.SetActive(false);

        if (_keypadObj == null)
        {
            _isUsingKeypad = false;
            _keypadLocked = false;
        }
        else
        {
            _isUsingKeypad = true;
            _keypadLocked = true;
        }
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Reach" && doorisClosed)
        {
            inReach = true;
            openText.SetActive(true);
        }

        if (other.gameObject.tag == "Reach" && doorisOpen)
        {
            inReach = true;
            closeText.SetActive(true);
        }
    }

    void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Reach")
        {
            inReach = false;
            openText.SetActive(false);
            closeText.SetActive(false);
        }
    }





    void Update()
    {
        if (_isUsingKeypad == true && _keypadLocked == false)
        {
            
            if (inReach && doorisClosed && Input.GetButtonDown("Interact"))
            {

                door.SetBool("Open", true);
                door.SetBool("Closed", false);
                openText.SetActive(false);
                openSound.Play();
                doorisOpen = true;
                doorisClosed = false;
                Debug.Log("door opened");
            }
            else if (inReach && doorisOpen && Input.GetButtonDown("Interact"))
            {
                door.SetBool("Open", false);
                door.SetBool("Closed", true);
                closeText.SetActive(false);
                closeSound.Play();
                doorisClosed = true;
                doorisOpen = false;
                Debug.Log("door closed");
            }
        }
        else if (_isUsingKeypad == false)
        {
            if (inReach && doorisClosed && Input.GetButtonDown("Interact"))
            {

                door.SetBool("Open", true);
                door.SetBool("Closed", false);
                openText.SetActive(false);
                openSound.Play();
                doorisOpen = true;
                doorisClosed = false;
            }
            else if (inReach && doorisOpen && Input.GetButtonDown("Interact"))
            {
                door.SetBool("Open", false);
                door.SetBool("Closed", true);
                closeText.SetActive(false);
                closeSound.Play();
                doorisClosed = true;
                doorisOpen = false;
            }
        }
        


    }
}
