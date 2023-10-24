using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Rect))]
    public class RectDrawer : SuperPropertyDrawer
    {
        public override float GetPropertyHeight(SuperSerializedProperty property, GUIContent label)
        {
            return EditorGUIUtility.singleLineHeight * 2 + 3;
        }
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Rect value = EditorGUI.RectField(position, label, property.rectValue);
            if (value != property.rectValue) property.rectValue = value;
        }
    }
}