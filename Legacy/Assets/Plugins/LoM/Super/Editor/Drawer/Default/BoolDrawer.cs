using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(bool))]
    public class BoolDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            bool value = EditorGUI.Toggle(position, label, property.boolValue);
            if (!property.Attributes.IsReadOnly) property.boolValue = value;
        }
    }
}