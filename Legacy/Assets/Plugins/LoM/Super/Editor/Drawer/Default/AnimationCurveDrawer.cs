using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(AnimationCurve))]
    public class AnimationCurveDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            AnimationCurve value = EditorGUI.CurveField(position, label, property.animationCurveValue);
            if (value != property.animationCurveValue) property.animationCurveValue = value;
        }
    }
}