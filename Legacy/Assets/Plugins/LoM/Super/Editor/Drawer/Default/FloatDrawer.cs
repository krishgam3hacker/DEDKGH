using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
    
namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(float))]
    public class FlaotDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            float value = EditorGUI.FloatField(position, label, property.floatValue);
            if (value != property.floatValue) property.floatValue = value;
        }
    }
}