using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using System;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Vector2))]
    public class Vector2Drawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Vector2 value = EditorGUI.Vector2Field(position, label, property.vector2Value);
            if (value != property.vector2Value) property.vector2Value = value;
        }
    }
}