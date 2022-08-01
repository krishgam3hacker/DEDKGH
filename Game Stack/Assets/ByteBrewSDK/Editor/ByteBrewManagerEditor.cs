using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace ByteBrewSDK
{
    [System.Serializable]
    [CustomEditor(typeof(ByteBrewSettings))]
    public class ByteBrewEditor : Editor
    {
        
        private bool androidEnabled = false;
        private bool iosEnabled = false;

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            serializedObject.Update();
            ByteBrewSettings manager = AssetDatabase.LoadAssetAtPath<ByteBrewSettings>("Assets/ByteBrewSDK/Resources/ByteBrewSettings.asset");

            Texture bytebrewLogo = (Texture)AssetDatabase.LoadAssetAtPath("Assets/ByteBrewSDK/Images/bytebrewfulllogo.png", typeof(Texture));

            GUI.DrawTexture(new Rect(15f, 30f, 275f, 75f), bytebrewLogo);

            GUILayout.Space(100f); //2
            EditorGUILayout.HelpBox("Go to your games setting in the ByteBrew Dashboard to get the right keys.", MessageType.Info);
            GUILayout.Label("ByteBrew App Settings", EditorStyles.boldLabel);

            GUILayout.Space(15f);

            if (!manager.androidEnabled)
            {
                GUILayout.BeginVertical();
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();
                if (GUILayout.Button("Enable Android Settings", GUILayout.Width(300f)))
                {
                    manager.androidEnabled = true;
                }
                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
                GUILayout.EndVertical();
            }
            else
            {
                GUILayout.Label("Android Settings", EditorStyles.centeredGreyMiniLabel);
                GUILayout.Space(5f);
                GUILayout.Label("Android Game ID");
                manager.androidGameID = GUILayout.TextField(manager.androidGameID, GUILayout.Width(250f));
                GUILayout.Space(10f);
                GUILayout.Label("Android Game SDK Key");
                manager.androidSDKKey = GUILayout.TextField(manager.androidSDKKey, GUILayout.Width(250f));

                GUILayout.Space(5f);
                GUILayout.BeginVertical();
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();
                if (GUILayout.Button("Remove Android Settings", GUILayout.Width(300f)))
                {
                    manager.androidGameID = "";
                    manager.androidSDKKey = "";
                    manager.androidEnabled = false;
                }
                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
                GUILayout.EndVertical();
            }


            GUILayout.Space(15f);

            if (!manager.iosEnabled)
            {
                GUILayout.BeginVertical();
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();
                if (GUILayout.Button("Enable iOS Settings", GUILayout.Width(300f)))
                {
                    manager.iosEnabled = true;
                }
                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
                GUILayout.EndVertical();
            }
            else
            {
                GUILayout.Label("iOS Settings", EditorStyles.centeredGreyMiniLabel);
                GUILayout.Space(5f);
                GUILayout.Label("iOS Game ID");
                manager.iosGameID = GUILayout.TextField(manager.iosGameID, GUILayout.Width(250f));
                GUILayout.Space(10f);
                GUILayout.Label("iOS Game SDK Key");
                manager.iosSDKKey = GUILayout.TextField(manager.iosSDKKey, GUILayout.Width(250f));

                GUILayout.Space(5f);
                GUILayout.BeginVertical();
                GUILayout.BeginHorizontal();
                GUILayout.FlexibleSpace();
                if (GUILayout.Button("Remove iOS Settings", GUILayout.Width(300f)))
                {
                    manager.iosGameID = "";
                    manager.iosSDKKey = "";
                    manager.iosEnabled = false;
                }
                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
                GUILayout.EndVertical();
            }

            GUILayout.Space(20f); //2
            GUILayout.Label("ByteBrew Extra Help", EditorStyles.boldLabel);
            GUILayout.Space(10f);
            GUILayout.BeginVertical();
            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();

            if (GUILayout.Button("ByteBrew Dashboard", GUILayout.Width(300f)))
            {
                Help.BrowseURL("https://dashboard.bytebrew.io");
            }
            GUILayout.FlexibleSpace();
            GUILayout.EndHorizontal();
            GUILayout.EndVertical();

            GUILayout.Space(10f);
            GUILayout.BeginVertical();
            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();

            if (GUILayout.Button("ByteBrew Docs", GUILayout.Width(300f)))
            {
                Help.BrowseURL("https://docs.bytebrew.io");
            }
            GUILayout.FlexibleSpace();
            GUILayout.EndHorizontal();
            GUILayout.EndVertical();

            EditorUtility.SetDirty(manager);
            serializedObject.ApplyModifiedProperties();
        }
    }

}

