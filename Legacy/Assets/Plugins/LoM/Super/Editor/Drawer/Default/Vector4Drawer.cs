using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using System;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Vector4))]
    public class Vector4Drawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Vector4 value = EditorGUI.Vector4Field(position, label, property.vector4Value);
            if (value != property.vector4Value) property.vector4Value = value;
        }
    }
}