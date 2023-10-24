using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Color))]
    [CustomSuperPropertyDrawer(typeof(Color32))]
    public class ColorDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Color value = EditorGUI.ColorField(position, label, property.colorValue);
            if (property.colorValue != value) property.colorValue = value;
        }
    }
}