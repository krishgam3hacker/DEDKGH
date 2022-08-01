using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BoxScript : MonoBehaviour
{
    private float min_X = -3.61f, max_X = 3.61f;

    private bool canMove;
    private float move_Speed = 6f;

    private Rigidbody2D mBody;

    private bool gameOver;
    private bool ignoreCollision;
    private bool ignoreTrigger;

    private void Awake()
    {
        mBody = GetComponent<Rigidbody2D>();
        mBody.gravityScale = 0f;
    }
   
    void Start()
    {
        canMove = true;

        if(Random.Range(0, 2) > 0)
        {
            move_Speed *= -1f;
        }

        GameplayController.instance.currentBox = this;
    }

    // Update is called once per frame
    void Update()
    {
        MoveBox();
    }

    void MoveBox()
    {
        if (canMove)
        {
            Vector3 temp = transform.position;
            temp.x += move_Speed * Time.deltaTime;
            if(temp.x > max_X)
            {
                move_Speed *= -1f;
            }
            else if (temp.x < min_X)
            {
                move_Speed *= move_Speed = -1f;

            }

            transform.position = temp;
        }
    }
    public void DropBox()
    {
        canMove = false;
        mBody.gravityScale = Random.Range(2, 5);
    }
    void Landed()
    {
        if (gameOver)
            return;
        


        ignoreCollision = true;
        ignoreTrigger = true;
        
        
        GameplayController.instance.SpawnNewBox();
        GameplayController.instance.MoveCamera();
    }
    void RestartGame()
    {
        GameplayController.instance.RestartGame();
        
    }

    void OnCollisionEnter2D(Collision2D target) 
    {
        if (ignoreCollision)
            return;
        if(target.gameObject.tag == "Platform")
        {
            
            Invoke("Landed", 2f);
            ignoreCollision = true;
            Score.scoreval++;


        }
        
        if (target.gameObject.tag == "Box")
        {
            
            Invoke("Landed", 1f);
           

            Sound_Script.PlaySound("PointSound");
            Score.scoreval++;

            ignoreCollision = true;
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
       if (ignoreTrigger)
            return;
        if(other.tag == "GameOver")
           
        {
           Debug.Log("Hitting");
           CancelInvoke("Landed");
            gameOver = false;
           ignoreTrigger = true;
            SceneManager.LoadScene(2);

            Invoke("RestartGame", 1f);
            
        }
    }

}
