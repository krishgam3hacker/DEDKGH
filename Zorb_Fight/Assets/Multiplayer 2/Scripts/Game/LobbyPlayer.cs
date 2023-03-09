using GameFramework.Core.Data;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace Game
{
    public class LobbyPlayer : MonoBehaviour
    {
        [SerializeField] private TextMeshPro _playerName;
        [SerializeField] private Renderer _isReadyRenderer;
        [SerializeField] private Renderer _teamRenderer;

        private MaterialPropertyBlock _propertyBlock;
        private MaterialPropertyBlock _propertyBlock1;
        private LobbyPlayerData _data;


        private void Start()
        {
            _propertyBlock= new MaterialPropertyBlock();
            _propertyBlock1 = new MaterialPropertyBlock();
        }

        public void SetData(LobbyPlayerData data)
        {
            _data = data;
            _playerName.text = _data.Gamertag;

            if (_data.IsRed)
            {
                Debug.Log("this is red team");
                if (_isReadyRenderer != null)
                {
                    Debug.Log("red team");
                    _teamRenderer.GetPropertyBlock(_propertyBlock1);
                    _propertyBlock1.SetColor("_BaseColor", Color.red);
                    _teamRenderer.SetPropertyBlock(_propertyBlock1);
                }
            }

            if (_data.IsReady)
            {
                Debug.Log("player is ready");
                if (_isReadyRenderer != null)
                {
                    _isReadyRenderer.GetPropertyBlock(_propertyBlock);
                    _propertyBlock.SetColor("_BaseColor", Color.green);
                    _isReadyRenderer.SetPropertyBlock(_propertyBlock);
                }
            }

            gameObject.SetActive(true);
        }
    }
}

