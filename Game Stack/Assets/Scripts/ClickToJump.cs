using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClickToJump : MonoBehaviour
{
    public GameManager gameManager;
    public float velocity = 1;
    private Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            //jump
            rb.velocity = Vector2.up * velocity;
           
            
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        Sound_Script.PlaySound("Death");
        Handheld.Vibrate();
        gameManager.GameOver();
    }


}
