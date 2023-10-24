using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
    
namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(ulong))]
    [CustomSuperPropertyDrawer(typeof(long))]
    public class LongDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            long value = EditorGUI.LongField(position, label, property.longValue);
            if (property.longValue != value) property.longValue = value;
        }
    }
}