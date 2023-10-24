using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using System;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Vector3))]
    public class Vector3Drawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Vector3 value = EditorGUI.Vector3Field(position, label, property.vector3Value);
            if (value != property.vector3Value) property.vector3Value = value;
        }
    }
}