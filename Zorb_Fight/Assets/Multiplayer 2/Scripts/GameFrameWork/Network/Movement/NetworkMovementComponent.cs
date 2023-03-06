using System;
using System.Collections.Generic;
using System.Linq;
using Unity.Netcode;
using Unity.VisualScripting;
using UnityEngine;

namespace GameFramework.Network.Movement
{
    public class NetworkMovementComponent : NetworkBehaviour
    {
        [SerializeField] private CharacterController _cc;


        [SerializeField] private float _turnSpeed;
        [SerializeField] private Rigidbody rb;
        [SerializeField] private Transform _camSocket;
        [SerializeField] private GameObject _vcam;


        [SerializeField] private Color _color;

        private Transform _vcamTransform;
        [SerializeField] public Transform mainCameraTransform;


        #region GroundCheck
        [Header("Ground Check")]
        public float raycastLength = 1f;
        [SerializeField] private string groundTag = "Ground";
        private bool isGroundedBall;
        public Transform raycastStart;

        // Directions to check for ground
        public Vector3[] groundCheckDirections = { Vector3.down, Vector3.up, Vector3.left, Vector3.right, Vector3.forward, Vector3.back };

        #endregion

        #region Ball Controls
        [Header("Ball Controls")]
        [SerializeField] private float _speed = 10.0f; // Speed of the ball
        public float drag = 5.0f; // Drag force to apply when not moving
        public float yForce = 500.0f;
        #endregion



        private int _tick = 0;
        private float _tickRate = 1f / 60f;
        private float _tickDeltaTime = 0f;

        private const int BUFFER_SIZE = 1024;
        private InputState[] _inputStates = new InputState[BUFFER_SIZE];
        private TransformState[] _transformStates = new TransformState[BUFFER_SIZE];

        public NetworkVariable<TransformState> ServerTransformState = new NetworkVariable<TransformState>();
        public TransformState _previousTransformState;
        
        private int _lastProcessedTick = -0;

        private void OnEnable()
        {
            ServerTransformState.OnValueChanged += OnServerStateChanged;
        }

        public override void OnNetworkSpawn()
        {
            base.OnNetworkSpawn();
            _vcamTransform = _vcam.transform;
        }

        private void OnServerStateChanged(TransformState previousvalue, TransformState serverState)
        {
            if(!IsLocalPlayer) return;

            if (_previousTransformState == null)
            {
                _previousTransformState = serverState;
            }

            TransformState calculatedState = _transformStates.First(localState => localState.Tick == serverState.Tick);
            if (calculatedState.Position != serverState.Position)
            {
                Debug.Log("Correcting client position");
                //Teleport the player to the server position
                TeleportPlayer(serverState);
                //Replay the inputs that happened after
                IEnumerable<InputState> inputs = _inputStates.Where(input => input.Tick > serverState.Tick);
                inputs = from input in inputs orderby input.Tick select input;
                
                foreach (InputState inputState in inputs)
                {
                    MovePlayer(inputState.MovementInput);
                    RotatePlayer(inputState.LookInput);

                    TransformState newTransformState = new TransformState()
                    {
                        Tick = inputState.Tick,
                        Position = transform.position,
                        Rotation = transform.rotation,
                        HasStartedMoving = true
                    };

                    for (int i = 0; i < _transformStates.Length; i++)
                    {
                        if (_transformStates[i].Tick == inputState.Tick)
                        {
                            _transformStates[i] = newTransformState;
                            break;
                        }
                    }
                }
            }
        }

        private void TeleportPlayer(TransformState state)
        {
            _cc.enabled = false;
            transform.position = state.Position;
            transform.rotation = state.Rotation;
            _cc.enabled = true;

            for (int i = 0; i < _transformStates.Length; i++)
            {
                if (_transformStates[i].Tick == state.Tick)
                {
                    _transformStates[i] = state;
                    break;
                }
            }
        }

        public void ProcessLocalPlayerMovement(Vector2 movementInput, Vector2 lookInput)
        {
            _tickDeltaTime += Time.deltaTime;
            if (_tickDeltaTime > _tickRate)
            {
                int bufferIndex = _tick % BUFFER_SIZE;

                if (!IsServer)
                {
                    MovePlayerServerRpc(_tick, movementInput, lookInput);
                    MovePlayer(movementInput);
                    RotatePlayer(lookInput);
                    SaveState(movementInput, lookInput, bufferIndex);
                }
                else
                {
                    MovePlayer(movementInput);
                    RotatePlayer(lookInput);

                    TransformState state = new TransformState()
                    {
                        Tick = _tick,
                        Position = transform.position,
                        Rotation = transform.rotation,
                        HasStartedMoving = true
                    };

                    SaveState(movementInput, lookInput, bufferIndex);

                    _previousTransformState = ServerTransformState.Value;
                    ServerTransformState.Value = state;
                }
                
                _tickDeltaTime -= _tickRate;
                _tick++;
            }
        }

        public void ProcessSimulatedPlayerMovement()
        {
            _tickDeltaTime += Time.deltaTime;
            if (_tickDeltaTime > _tickRate)
            {
                if (ServerTransformState.Value.HasStartedMoving)
                {
                    transform.position = ServerTransformState.Value.Position;
                    transform.rotation = ServerTransformState.Value.Rotation;
                }

                _tickDeltaTime -= _tickRate;
                _tick++;
            }
        }

        private void SaveState(Vector2 movementInput, Vector2 lookInput, int bufferIndex)
        {
            InputState inputState = new InputState()
            {
                Tick = _tick,
                MovementInput = movementInput,
                LookInput = lookInput
            };

            TransformState transformState = new TransformState()
            {
                Tick = _tick,
                Position = transform.position,
                Rotation = transform.rotation,
                HasStartedMoving = true
            };

            _inputStates[bufferIndex] = inputState;
            _transformStates[bufferIndex] = transformState;
        }

        private void MovePlayer(Vector2 direction)
        {
            if (direction.magnitude > 0)
            {
                if (!isGroundedBall)
                {


                    // Debug.Log("Inair");
                    // add air control
                    Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);
                    moveDirection.y = _speed;
                    moveDirection = moveDirection.normalized;

                    rb.AddForce(moveDirection.x * _speed / 2, 0, moveDirection.z * _speed / 2);


                    //to add air resistance
                    rb.AddForce(-rb.velocity.x * drag / 2, 0, -rb.velocity.z * drag / 2);

                    // Increase the fall speed while in air
                    rb.AddForce(0, -_speed, 0);

                }
                else
                {
                    Vector3 moveDirection = new Vector3(direction.x, 0, direction.y);

                    // Rotate the direction vector to match the forward direction of the camera
                    moveDirection = mainCameraTransform.TransformDirection(moveDirection);
                    moveDirection.y = rb.velocity.y;
                    moveDirection = moveDirection.normalized;

                    // Move the ball in the direction
                    rb.AddForce(moveDirection.x * _speed, 0, moveDirection.z * _speed);
                }

            }

        }


         private void RotatePlayer(Vector2 lookInput)
        {
            _vcamTransform.RotateAround(_vcamTransform.position, _vcamTransform.right, -lookInput.y * _turnSpeed * _tickRate);
            transform.RotateAround(transform.position, transform.up, lookInput.x * _turnSpeed * _tickRate);
        }

        [ServerRpc]
        private void MovePlayerServerRpc(int tick, Vector2 movementInput, Vector2 lookInput)
        {
            if (_lastProcessedTick + 1 != tick)
            {
                Debug.Log("I missed a tick");
                Debug.Log($"Received Tick {tick}");
            }

            _lastProcessedTick = tick;
            MovePlayer(movementInput);
            RotatePlayer(lookInput);

            TransformState state = new TransformState()
            {
                Tick = tick,
                Position = transform.position,
                Rotation = transform.rotation,
                HasStartedMoving = true
            };
            

            _previousTransformState = ServerTransformState.Value;
            ServerTransformState.Value = state;
        }

        private void OnDrawGizmos()
        {
            if (ServerTransformState.Value != null)
            {
                Gizmos.color = _color;

            }
        }

        private void GroundCheck()
        {
            // use the radius of the sphere collider on the ball
            float radius = GetComponentInChildren<SphereCollider>().radius;
            Vector3 position = transform.position;

            bool isGrounded = false;
            for (int i = 0; i < groundCheckDirections.Length; i++)
            {
                Vector3 direction = transform.TransformDirection(groundCheckDirections[i]);
                RaycastHit hitInfo;
                if (Physics.SphereCast(position, radius, direction, out hitInfo, raycastLength))
                {
                    Debug.DrawRay(position, direction * hitInfo.distance, Color.red);
                    // Debug.Log("Ground hit: " + hitInfo.collider.gameObject.name);

                    // Check if the ground object has the specified tag
                    if (hitInfo.collider.gameObject.CompareTag(groundTag))
                    {
                        isGrounded = true;
                        break;
                    }
                }
            }

            if (isGrounded)
            {
                isGroundedBall = true;
            }
            else
            {
                isGroundedBall = false;
            }
        }



    }



}