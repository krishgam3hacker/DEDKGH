using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using System;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Enum))]
    public class EnumDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            // Check if has Flag attribute
            bool isFlag = property.Type.GetCustomAttributes(typeof(FlagsAttribute), false).Length > 0;
            
            if (isFlag)
            {
                // Draw flag enum
                EditorGUI.BeginChangeCheck();
                Enum enumValue = (Enum)Enum.ToObject(property.Type, property.enumValueFlag);
                enumValue = EditorGUI.EnumFlagsField(position, label, enumValue);
                if (EditorGUI.EndChangeCheck())
                {
                    property.enumValueFlag = Convert.ToInt32(enumValue);
                }
            }
            else
            {
                // Draw normal enum
                EditorGUI.BeginChangeCheck();
                Enum enumValue = (Enum)Enum.ToObject(property.Type, property.enumValueIndex);
                enumValue = EditorGUI.EnumPopup(position, label, enumValue);
                if (EditorGUI.EndChangeCheck())
                {
                    property.enumValueIndex = Convert.ToInt32(enumValue);
                }
            }
        }
    }
}