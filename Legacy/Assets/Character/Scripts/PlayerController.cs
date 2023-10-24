using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Rendering;

[RequireComponent(typeof(CharacterController))]
public class PlayerController : MonoBehaviour
{
    [Header("Systems")]
    [SerializeField] PlayerStats pStats;
    [SerializeField] public float playerHealth = 100f;


    [Header("General")]
    [SerializeField] Animator animator;
    [SerializeField] PlayerInput input;
    Vector2 movement;
    public bool runPressed;

    [SerializeField] private CharacterController controller;


    private Vector3 playerVelocity;

    private bool groundedPlayer;



    [Header("Speed")]
    private float playerSpeed = 2.0f;
    [SerializeField] float runSpeed = 10.0f;
    [SerializeField] private float jumpHeight = 1.0f;
    [SerializeField] private float gravityValue = -9.81f;

    [SerializeField] private Transform cameraMain;
    [SerializeField] private float rotationSpeed = 4f;

   void Awake()
    {
        pStats = GetComponent<PlayerStats>();


        input = new PlayerInput();

        //store value of input in cM and check mP if input is there
        input.CharacterControls.Movement.performed += ctx =>
        {
            movement = ctx.ReadValue<Vector2>();
          //movementPressed = currentMovement.x != 0 || currentMovement.y != 0;

        };
        input.CharacterControls.Run.started += ctx =>
        {
            runPressed = ctx.ReadValueAsButton();
        };

        input.CharacterControls.Run.canceled += ctx =>
        {
            runPressed = false;
        };
    }


    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        controller = GetComponent<CharacterController>();
        cameraMain = Camera.main.transform;
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        HealthCheck();
       
  
        groundedPlayer = controller.isGrounded;
        if (groundedPlayer && playerVelocity.y < 0)
        {
            playerVelocity.y = 0f;
        }

        Vector3 move = new Vector3(movement.x, 0, movement.y);

        move = cameraMain.forward * move.z + cameraMain.right * move.x;
        move.y= 0f;

        controller.Move(move * Time.deltaTime * playerSpeed);

        // Changes the height position of the player..
        if (input.CharacterControls.Jump.triggered && groundedPlayer)
        {
            animator.SetTrigger("Jump");
            playerVelocity.y += Mathf.Sqrt(jumpHeight * -3.0f * gravityValue);
        }

        if (runPressed == true)
        {
            animator.SetBool("isRunning", true);
            playerSpeed = runSpeed;
        }
        else
        {
            animator.SetBool("isRunning", false);
            playerSpeed = 2.0f;
        }
        playerVelocity.y += gravityValue * Time.deltaTime;
        controller.Move(playerVelocity * Time.deltaTime);

        if (movement != Vector2.zero)
        {
            float targetAngle = Mathf.Atan2(movement.x, movement.y) * Mathf.Rad2Deg + cameraMain.eulerAngles.y;
            Quaternion rotation = Quaternion.Euler(0f,targetAngle, 0f); 
            transform.rotation = Quaternion.Lerp(transform.rotation, rotation, Time.deltaTime * rotationSpeed);
        }

        //---------------

        animator.SetFloat("VelocityA", move.magnitude);

       // Debug.Log(move.magnitude);
    }


    void HealthCheck()
    {
     if(playerHealth <= 0)
     {
        Debug.Log("Player ded");
     }

     if(playerHealth >= pStats.maxHealth)
     {
        playerHealth = pStats.maxHealth;
     }


    }

    void TakeDamage()
    {
     playerHealth -= 10f;
     Debug.Log(playerHealth);
    }

    private void LateUpdate()
    {
       // Debug.Log(movement);
    if (Input.GetKeyDown(KeyCode.F))
     {
        TakeDamage();
     } 
    }



    void OnEnable()
    {
        input.CharacterControls.Enable();

    }
    void OnDisable()
    {
        input.CharacterControls.Disable();

    }
}
