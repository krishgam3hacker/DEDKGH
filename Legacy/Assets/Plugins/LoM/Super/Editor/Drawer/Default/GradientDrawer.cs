using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(Gradient))]
    public class GradientDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            Gradient value = EditorGUI.GradientField(position, label, property.gradientValue);
            if (value != property.gradientValue) property.gradientValue = value;
        }
    }
}