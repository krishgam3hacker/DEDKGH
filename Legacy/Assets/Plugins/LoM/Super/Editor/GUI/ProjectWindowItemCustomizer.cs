using System;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace LoM.Super.Internal
{
    [InitializeOnLoad]
    internal class ProjectWindowItemCustomizer
    {
        static ProjectWindowItemCustomizer()
        {
            EditorApplication.projectWindowItemOnGUI += ProjectWindowItemOnGUI;
        }

        private static void ProjectWindowItemOnGUI(string guid, Rect selectionRect)
        {
            string assetPath = AssetDatabase.GUIDToAssetPath(guid);
            string assetName = System.IO.Path.GetFileNameWithoutExtension(assetPath);
            
            // Check if is a script
            if (!assetPath.EndsWith(".cs")) return;
            
            // Check if it inherits from SuperBehaviour
            SuperBehaviourIcon overrideIcon = SuperBehaviourIcon.Default;
            if (!IsSuperBehaviour(assetPath))
            {
                if (IsEnum(assetPath)) 
                {
                    overrideIcon = SuperBehaviourIcon.Enum;
                }
                else if (IsInterface(assetPath))
                {
                    overrideIcon = SuperBehaviourIcon.Interface;
                }
                else
                {
                    return;
                }
            }
            
            // Get if single or multiple column layout is used
            // use indent level to determine if multiple column layout is used
            bool isMultipleColumnLayout = EditorGUI.indentLevel > 0;
            
            // Get icon dimensions
            Rect rect = new Rect(selectionRect);
            if (rect.width > rect.height)
            {
                rect.width = rect.height + 4;
            }
            else if (rect.height > rect.width)
            {
                rect.height = rect.width;
            }
            bool isSmall = rect.width < 20;
            
            // If selected change icon color to white
            bool isSelected = Selection.assetGUIDs.Contains(guid);
            if (!isSmall) isSelected = false;
            
            // Draw Icon Background
            //Texture2D fileIcon = AssetDatabase.LoadAssetAtPath<Texture2D>($"Assets/Plugins/LoM/Super/Icons/{(isSmall ? SuperBehaviourIcon.FileSmall : SuperBehaviourIcon.File)}{(isSelected ? "_W" : "")}.png");
            Texture2D fileIcon = AssetDatabase.LoadAssetAtPath<Texture2D>($"Assets/Plugins/LoM/Super/Icons/{SuperBehaviourIcon.FileSmall}{(isSelected ? "_W" : "")}.png");
            GUI.DrawTexture(rect, fileIcon);
            
            // Scale Icon down
            rect.width = (rect.width - 4) * 0.8f;
            rect.height *= 0.8f;
            rect.x += rect.width * 0.1f + 2;
            rect.y += rect.height * 0.1f + 2;
            
            // Get Icon
            SuperBehaviourIcon iconName = overrideIcon != SuperBehaviourIcon.Default ? overrideIcon : IconUtility.GetIconByClassName(assetName);
            Texture2D icon = AssetDatabase.LoadAssetAtPath<Texture2D>($"Assets/Plugins/LoM/Super/Icons/{iconName.ToString()}{(isSelected ? "_W" : "")}.png");
            
            GUI.DrawTexture(rect, icon);
        }
        
        private static bool IsSuperBehaviour(string assetPath)
        {
            MonoScript script = AssetDatabase.LoadAssetAtPath<MonoScript>(assetPath);
            if (script == null) return false;
            System.Type type = script.GetClass();
            if (type == null) return false;
            return type.IsSubclassOf(typeof(SuperBehaviour));
        }
        
        private static bool IsEnum(string assetPath)
        {
            MonoScript script = AssetDatabase.LoadAssetAtPath<MonoScript>(assetPath);
            if (script == null) return false;
            int enumIndex = script.text.IndexOf("public enum");
            int classIndex = script.text.IndexOf("class");
            int structIndex = script.text.IndexOf("struct");
            return enumIndex != -1 && (classIndex == -1 || enumIndex < classIndex) && (structIndex == -1 || enumIndex < structIndex);
        }
        
        private static bool IsInterface(string assetPath)
        {
            MonoScript script = AssetDatabase.LoadAssetAtPath<MonoScript>(assetPath);
            if (script == null) return false;
            string fileName = System.IO.Path.GetFileNameWithoutExtension(assetPath);
            int interfaceIndex = script.text.IndexOf("public interface");
            int classIndex = script.text.IndexOf("class");
            int structIndex = script.text.IndexOf("struct");
            return interfaceIndex != -1 && (classIndex == -1 || interfaceIndex < classIndex) && (structIndex == -1 || interfaceIndex < structIndex) && fileName.StartsWith("I");
        }
    }
}