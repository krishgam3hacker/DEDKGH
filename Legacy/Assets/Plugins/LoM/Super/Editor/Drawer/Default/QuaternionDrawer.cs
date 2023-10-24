using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using System;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Quaternion))]
    public class QuaternionDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Quaternion value = Quaternion.Euler(EditorGUI.Vector3Field(position, label, property.quaternionValue.eulerAngles));
            if (value != property.quaternionValue) property.quaternionValue = value;
        }
    }
}