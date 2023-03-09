using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace GameFramework.Core.Data
{
    //creates custom menu
    [CreateAssetMenu(menuName = "Data/MapSelectionData" , fileName = "MapSelectionData")]
    public class MapSelectionData : ScriptableObject
    {
        public List<MapInfo> Maps;
    }
}

[Serializable]
public struct MapInfo
{
    public Color MapThumbnail;
    public Sprite Mapimage;
    public string MapName;
    public string SceneName;
}