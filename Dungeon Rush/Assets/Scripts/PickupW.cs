using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PickupW : MonoBehaviour
{
    private Inventory inventory;
    public GameObject itemButton;
    [SerializeField]
    private Sprite spritee;
    [SerializeField]
    private int weaponDamager = 15;
    [SerializeField]
    private float weaponSpeedr = 0.12f;
    private void Start()
    {
        inventory = GameObject.FindGameObjectWithTag("Player").GetComponent<Inventory>();
        spritee = GetComponent<SpriteRenderer>().sprite;
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            for(int i=0; i < inventory.slots.Length; i++)
            {
                if(inventory.isFull[i]== false)
                {
                    inventory.isFull[i] = true;
                   GameObject stor = Instantiate(itemButton, inventory.slots[i].transform, false);
                   stor.GetComponent<SpriteRenderer>().sprite = spritee;
                    Debug.Log("got sword");
                    stor.GetComponent<Image>().sprite = spritee;
                    stor.GetComponent<weaponstats>().weaponSpeed = weaponSpeedr;
                    stor.GetComponent<weaponstats>().weaponDamage = weaponDamager;
                    Destroy(gameObject);
                    break;
                }
            }
        }   
    }



}
