using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class GameModeManager : MonoBehaviour
{
    public static GameModeManager instance { get; private set; }

    public event EventHandler OnStateChanged;
    public event EventHandler OnGamePaused;
    public event EventHandler OnGameUnpaused;




    private enum State
    {
        RoundEnd,
        WaitingToStart,
        CountdownToStart,
        GamePlaying,
        GameOver,
    }

    private State state;
    private float waitingToStartTimer = 1f;
    private float countdownToStartTimer = 3f;
    private float gamePlayingTimer;
    private float gamePlayingTimerMax = 180f;
    private bool isGamePaused = false;


    private void Awake()
    {
        instance= this;

        state = State.WaitingToStart;
    }
    private void Update()
    {
        switch (state)
        {
            case State.WaitingToStart:
                waitingToStartTimer -= Time.deltaTime;
                if(waitingToStartTimer < 0f)
                {
                    state = State.CountdownToStart;
                    OnStateChanged?.Invoke(this, EventArgs.Empty);
                }
                break;
            case State.CountdownToStart:
                countdownToStartTimer -= Time.deltaTime;
                if (countdownToStartTimer < 0f)
                {
                    state = State.GamePlaying;
                    OnStateChanged?.Invoke(this, EventArgs.Empty);
                }
                break;
            case State.GamePlaying:
                gamePlayingTimerMax -= Time.deltaTime;
                if (gamePlayingTimerMax < 0f)
                {
                    state = State.GameOver;
                    OnStateChanged?.Invoke(this, EventArgs.Empty);
                }
                break;
                case State.GameOver:
                break;
        }
                Debug.Log(state);
    }
    public bool OnPointScored()
    {
        Debug.Log("point scored");
        return state == State.RoundEnd;

    }

/*    public override void OnNetworkSpawn()
    {
        Debug.Log("Player Spawned");
    }
*/


}
