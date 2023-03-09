using System.Collections.Generic;
using System.Diagnostics;
using Unity.Services.Lobbies.Models;

namespace GameFramework.Core.Data
{
    public class LobbyPlayerData
    {
        private string _id;
        private string _gamertag;
        private bool _isReady;
        private bool _isRed;
        public Skins _skin;

        public enum Skins
        {
            Skin1,
            Skin2
        }
        public string Id => _id;
        public string Gamertag => _gamertag;

        

        public bool IsReady
        {
            get => _isReady;
            set => _isReady = value;
        }
        public bool IsRed
        {
            get => _isRed;
            set => _isRed = value;
        }

        public Skins SkinOption
        {
            get => _skin;
            set => _skin = value;
        }

        public void Initialize(string id, string gamertag)
        {
            _id = id;
            _gamertag = gamertag;
        }

        public void Initialize(Dictionary<string, PlayerDataObject> playerData)
        {
            UpdateState(playerData);
        }

        public void UpdateState(Dictionary<string, PlayerDataObject> playerData)
        {
            if (playerData.ContainsKey("Id"))
            {
                _id = playerData["Id"].Value;
            }
            if (playerData.ContainsKey("Gamertag"))
            {
                _gamertag = playerData["Gamertag"].Value;
            }
            if (playerData.ContainsKey("IsReady"))
            {
                _isReady = playerData["IsReady"].Value == "True";
            }
            if (playerData.ContainsKey("IsRed"))
            {
                _isRed = playerData["IsRed"].Value == "True";

            }

            if (playerData.ContainsKey("SkinOption"))
            {
                _skin = (Skins)System.Enum.Parse(typeof(Skins), playerData["SkinOption"].Value);
            }
        }

        public Dictionary<string, string> Serialize()
        {
            return new Dictionary<string, string>()
            {
                {"Id", _id},
                {"Gamertag", _gamertag},
                {"IsReady", _isReady.ToString()},
                {"IsRed", _isRed.ToString()},
                {"SkinOption", _skin.ToString()}
            };
        }
    }
}