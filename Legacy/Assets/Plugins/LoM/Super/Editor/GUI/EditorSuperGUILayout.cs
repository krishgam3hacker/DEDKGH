using System;
using UnityEngine;
using UnityEngine.UIElements;
using UnityEditor;
using LoM.Super.Serialization;
using LoM.Super.Editor.Drawer;

namespace LoM.Super.Editor
{
    /// <summary>
    /// Editor GUI Layout for SuperSerializedProperty. <br/>
    /// All methods are similar to their EditorGUILayout counterparts but take a SuperSerializedProperty instead of a SerializedProperty.
    /// </summary>
    public static class EditorSuperGUILayout
    {
        /// <summary>
        /// Make a field for SerializedProperty. 
        /// </summary>
        /// <param name="property">The SuperSerializedProperty to make the field for.</param>
        /// <param name="label">Optional label to use. If not specified the label of the property itself is used.<br/>Use GUIContent.none to not display a label at all.</param>
        /// <param name="includeChildren">If true the property including children is drawn; otherwise only the control itself (such as only a foldout but nothing below it).</param>
        /// <param name="options">An optional list of layout options that specify extra layout properties. Any values passed in here will override settings defined by the style.<br/> See Also GUILayout.Width, GUILayout.Height, GUILayout.MinWidth, GUILayout.MaxWidth, GUILayout.MinHeight, GUILayout.MaxHeight, GUILayout.ExpandWidth, GUILayout.ExpandHeight.</param>
        /// <returns>True if the property has children and is expanded and includeChildren was set to false; otherwise false.</returns>
        public static bool PropertyField(SuperSerializedProperty property, GUIContent label, bool includeChildren = true, params GUILayoutOption[] options)
        {
            if (!property.Attributes.IsActive) return false;
            bool enabledBefore = GUI.enabled;
            if (property.Attributes.IsReadOnly) GUI.enabled = false;
            
            // Get property drawer
            SuperPropertyDrawer drawer = SuperPropertyDrawerUtility.Instance[property];
            if (drawer != null)
            {
                VisualElement element = drawer.CreatePropertyGUI(property);
                if (element != null)
                {
                    // Draw UI Toolkit GUI
                    float height = drawer.GetPropertyHeight(property, label);
                    Rect position = EditorGUILayout.GetControlRect(true, height, options);
                    element.style.height = height;
                    element.style.width = position.width;
                    element.style.marginLeft = position.xMin;
                    element.style.marginTop = position.yMin;
                    element.style.marginRight = position.xMax;
                    element.style.marginBottom = position.yMax;
                    element.style.position = Position.Absolute;
                    element.MarkDirtyRepaint();
                }
                else
                {
                    // Draw IMGUI GUI
                    float height = drawer.GetPropertyHeight(property, label);
                    Rect position = EditorGUILayout.GetControlRect(true, height, options);
                    drawer.OnGUI(position, property, label);
                }
            }
            else
            {
                if (property.IsField)
                {
                    EditorGUILayout.PropertyField(property.Field, label, includeChildren, options);
                }
                else if (property.Type.IsSubclassOf(typeof(UnityEngine.Object)) || property.Type == typeof(UnityEngine.Object))
                {
                    // Draw default IMGUI GUI
                    UnityEngine.Object val = property.objectReferenceValue;
                    Rect position = EditorGUILayout.GetControlRect(true);
                    property.objectReferenceValue = EditorGUI.ObjectField(position, label, val, property.Type, true);
                }
                else
                {
                    // Draw read only text field
                    GUI.enabled = false;
                    Rect position = EditorGUILayout.GetControlRect(true);
                    EditorGUI.TextField(position, label, $"No property drawer found for {property.type}!");
                }
            }
            
            // Reset GUI enabled
            GUI.enabled = enabledBefore;
            
            return false;
        }
        /// <summary>
        /// Make a field for SerializedProperty.
        /// </summary>
        /// <param name="property">The SuperSerializedProperty to make the field for.</param>
        /// <param name="includeChildren">If true the property including children is drawn; otherwise only the control itself (such as only a foldout but nothing below it).</param>
        /// <param name="options">An optional list of layout options that specify extra layout properties. Any values passed in here will override settings defined by the style.<br/> See Also GUILayout.Width, GUILayout.Height, GUILayout.MinWidth, GUILayout.MaxWidth, GUILayout.MinHeight, GUILayout.MaxHeight, GUILayout.ExpandWidth, GUILayout.ExpandHeight.</param>
        /// <returns>True if the property has children and is expanded and includeChildren was set to false; otherwise false.</returns>
        public static bool PropertyField(SuperSerializedProperty property, bool includeChildren = true, params GUILayoutOption[] options)
        {
            return PropertyField(property, new GUIContent(property.displayName, property.tooltip), includeChildren, options);
        }
        /// <summary>
        /// Make a field for SerializedProperty.
        /// </summary>
        /// <param name="property">The SuperSerializedProperty to make the field for.</param>
        /// <param name="label">Optional label to use. If not specified the label of the property itself is used.<br/>Use GUIContent.none to not display a label at all.</param>
        /// <param name="options">An optional list of layout options that specify extra layout properties. Any values passed in here will override settings defined by the style.<br/> See Also GUILayout.Width, GUILayout.Height, GUILayout.MinWidth, GUILayout.MaxWidth, GUILayout.MinHeight, GUILayout.MaxHeight, GUILayout.ExpandWidth, GUILayout.ExpandHeight.</param>
        /// <returns>True if the property has children and is expanded and includeChildren was set to false; otherwise false.</returns>
        public static bool PropertyField(SuperSerializedProperty property, GUIContent label, params GUILayoutOption[] options)
        {
            return PropertyField(property, label, true, options);
        }
        /// <summary>
        /// Make a field for SerializedProperty.
        /// </summary>
        /// <param name="property">The SuperSerializedProperty to make the field for.</param>
        /// <param name="includeChildren">If true the property including children is drawn; otherwise only the control itself (such as only a foldout but nothing below it).</param>
        /// <returns>True if the property has children and is expanded and includeChildren was set to false; otherwise false.</returns>
        public static bool PropertyField(SuperSerializedProperty property, params GUILayoutOption[] options)
        {
            return PropertyField(property, new GUIContent(property.displayName, property.tooltip), true, options);
        }
    }
}