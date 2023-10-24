using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using LoM.Super.Serialization;
using UnityEditorInternal;

namespace LoM.Super.Editor.Drawer
{
    [CustomSuperPropertyDrawer(typeof(LayerMask))]
    public class LayerMaskDrawer : SuperPropertyDrawer
    {
        public override void OnGUI(Rect position, SuperSerializedProperty property, GUIContent label)
        {
            LayerMask value = EditorGUI.MaskField(position, label, property.intValue, InternalEditorUtility.layers);
            if (value != property.intValue) property.intValue = value;
        }
    }
}