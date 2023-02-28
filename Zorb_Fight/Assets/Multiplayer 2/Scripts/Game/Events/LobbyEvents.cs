using Unity.Services.Lobbies.Models;

namespace Game.Events
{

    public static class LobbyEvents
    {
        public delegate void LobbyUpdated();
        public static LobbyUpdated OnLobbyUpdated;
    }



} 