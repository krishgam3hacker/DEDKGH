using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
    
namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(double))]
    public class DoubleDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            double value = EditorGUI.DoubleField(position, label, property.doubleValue);
            if (value != property.doubleValue) property.doubleValue = value;
        }
    }
}