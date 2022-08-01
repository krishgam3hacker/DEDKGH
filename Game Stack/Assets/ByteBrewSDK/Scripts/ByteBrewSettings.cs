using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class ByteBrewSettings : ScriptableObject
{
    [HideInInspector]
    public bool iosEnabled;
    [HideInInspector]
    public string iosGameID;
    [HideInInspector]
    public string iosSDKKey;

    [HideInInspector]
    public bool androidEnabled;
    [HideInInspector]
    public string androidGameID;
    [HideInInspector]
    public string androidSDKKey;
}

