using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Bounds))]
    public class BoundsDrawer : SuperPropertyDrawer
    {
        public override float GetPropertyHeight(SuperSerializedProperty property, GUIContent label)
        {
            return EditorGUIUtility.singleLineHeight * 3 + 5;
        }
        
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Bounds value = EditorGUI.BoundsField(position, label, property.boundsValue);
            if (value != property.boundsValue) property.boundsValue = value;
        }
    }
}