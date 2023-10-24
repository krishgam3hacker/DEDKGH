using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEngine;

namespace LoM.Super.Serialization
{
    /// <summary>
    /// SuperSerializedObject and SuperSerializedProperty are classes for editing serialized field
    /// on Object|Unity objects in a completely generic way. These classes automatically
    /// handle dirtying individual serialized fields so they will be processed by the
    /// Undo system and styled correctly for Prefab overrides when drawn in the Inspector.<br/>
    /// Unlike the SerializedObject and SerializedProperty classes provided by Unity,
    /// this class supports Properties and Fields
    /// </summary>
    public class SuperSerializedObject : SerializedObject
    {
        // Member Variables
        private SuperSerializedProperty[] m_All;
        private SuperSerializedProperty[] m_Fields;
        private SuperSerializedProperty[] m_Properties;
        private Type m_Type;
        private List<PropertyInfo> m_PropertiesInfo;
        private List<FieldInfo> m_FieldsInfo;
        
        // Getters
        public SuperSerializedProperty[] All => m_All;
        public SuperSerializedProperty[] Fields => m_Fields;
        public SuperSerializedProperty[] Properties => m_Properties;
        
        // Constructors
        /// <summary>
        /// Create SerializedObject for inspected object.
        /// </summary>
        public SuperSerializedObject(UnityEngine.Object obj) : base(obj)
        {
            InitProperties(obj);
        }
        /// <summary>
        /// Create SerializedObject for inspected object by specifying a context to be used
        /// to store and resolve ExposedReference types.
        /// </summary>
        public SuperSerializedObject(UnityEngine.Object obj, UnityEngine.Object context) : base(obj, context)
        {
            InitProperties(obj);
        }
        /// <summary>
        /// Create SerializedObject for inspected object.
        /// </summary>
        public SuperSerializedObject(UnityEngine.Object[] objs) : base(objs)
        {
            if (objs.Length > 0) InitProperties(objs[0]);
        }
        /// <summary>
        /// Create SerializedObject for inspected object by specifying a context to be used
        /// to store and resolve ExposedReference types.
        /// </summary>
        public SuperSerializedObject(UnityEngine.Object[] objs, UnityEngine.Object context) : base(objs, context)
        {
            if (objs.Length > 0) InitProperties(objs[0]);
        }
    
        // Methods
        private void InitProperties(UnityEngine.Object obj)
        {
            m_Type = obj.GetType();
            List<SuperSerializedProperty> properties = new List<SuperSerializedProperty>();
                
            // Create all fields
            m_FieldsInfo = new List<FieldInfo>(); 
            List<SerializedProperty> fields = new List<SerializedProperty>();
            var property = base.GetIterator();
            if (property.NextVisible(true))
            {
                do
                {
                    if (property.name == "m_Script") continue;
                    fields.Add(base.FindProperty(property.name));
                }
                while (property.NextVisible(false));
            }
            foreach (SerializedProperty field in fields)
            {
                FieldInfo fieldInfo = m_Type.GetField(field.name, BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
                if (fieldInfo == null) continue;
                m_FieldsInfo.Add(fieldInfo);
                properties.Add(new SuperSerializedProperty(this, field, fieldInfo, obj));
            }
            
            // Create all properties
            m_PropertiesInfo = m_Type
                .GetProperties(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)
                .Where(p => p.GetCustomAttributes(typeof(SerializePropertyAttribute), true).Length > 0)
                .ToList();
            foreach (PropertyInfo propertyInfo in m_PropertiesInfo)
            {
                properties.Add(new SuperSerializedProperty(this, propertyInfo, obj));
            }
            
            // To Array
            m_All = properties.ToArray();
            m_Fields = m_All.Where(p => p.IsField).ToArray();
            m_Properties = m_All.Where(p => !p.IsField).ToArray();
        }
        
        /// <summary>
        /// Update serialized object's representation.
        /// </summary>
        public new void Update() 
        {
            base.Update();
            
            // Reevaluate all properties
            foreach (SuperSerializedProperty property in m_All)
            {
                property.Reevaluate();
            }
        }
    
        // Dispose 
        public new void Dispose() 
        {
            foreach (SuperSerializedProperty property in m_Properties)
            {
                property.Dispose();
            }
            base.Dispose();
        }
    
        [Obsolete("Use FindPropertyByPath instead.", false)]
        public new SerializedProperty FindProperty(string propertyPath) => FindPropertyByPath(propertyPath);
        /// <summary>
        /// Find serialized property by name.
        /// </summary>
        public SuperSerializedProperty FindPropertyByPath(string propertyPath) 
        {
            foreach (SuperSerializedProperty property in m_All)
            {
                if (property.propertyPath == propertyPath) return property;
            }
            return null;
        }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        //! ////////////////////////////////////////////////////////////////////
        //! NOT IMPLEMENTED
        //! ////////////////////////////////////////////////////////////////////
        // Getters
        /// <summary>
        /// Is true when the SerializedObject has a modified property that has not been applied.
        /// </summary>
        public new bool hasModifiedProperties => base.hasModifiedProperties;
        /// <summary>
        /// Defines the maximum size beyond which arrays cannot be edited when multiple objects
        /// are selected.
        /// </summary>
        public new int maxArraySizeForMultiEditing => base.maxArraySizeForMultiEditing;
        /// <summary>
        /// Controls the visibility of the child hidden fields.
        /// </summary>
        public new bool forceChildVisibility => base.forceChildVisibility;
        
        // Methods
        /// <summary>
        /// Apply property modifications.
        /// </summary>
        public new bool ApplyModifiedProperties() => base.ApplyModifiedProperties();
        /// <summary>
        /// Applies property modifications without registering an undo operation.
        /// </summary>
        public new bool ApplyModifiedPropertiesWithoutUndo() => base.ApplyModifiedPropertiesWithoutUndo();
        /// <summary>
        /// Copies a value from a SerializedProperty to the corresponding serialized property
        /// on the serialized object.
        /// </summary>
        public new void CopyFromSerializedProperty(SerializedProperty prop) => base.CopyFromSerializedProperty(prop);
        /// <summary>
        /// Copies a changed value from a SerializedProperty to the corresponding serialized
        /// property on the serialized object.
        /// </summary>
        public new bool CopyFromSerializedPropertyIfDifferent(SerializedProperty prop) => base.CopyFromSerializedPropertyIfDifferent(prop);
        /// <summary>
        /// Get the first serialized property.
        /// </summary>
        public new SerializedProperty GetIterator() => base.GetIterator();
        /// <summary>
        /// Update hasMultipleDifferentValues cache on the next Update() call.
        /// </summary>
        public new void SetIsDifferentCacheDirty() => base.SetIsDifferentCacheDirty();
        /// <summary>
        /// This has been made obsolete. See SerializedObject.UpdateIfRequiredOrScript instead.
        /// </summary>
        [System.Obsolete("UpdateIfDirtyOrScript has been deprecated. Use UpdateIfRequiredOrScript instead.", false)]
        public new void UpdateIfDirtyOrScript() => base.UpdateIfDirtyOrScript();
        /// <summary>
        /// Update serialized object's representation, only if the object has been modified
        /// since the last call to Update or if it is a script.
        /// </summary>
        public new void UpdateIfRequiredOrScript() => base.UpdateIfRequiredOrScript();
        
        
        
        //! ////////////////////////////////////////////////////////////////////
        //! IRRELEVANT
        //! ////////////////////////////////////////////////////////////////////
        /// <summary>
        /// Does the serialized object represents multiple objects due to multi-object editing?
        /// (Read Only)
        /// </summary>
        public new bool isEditingMultipleObjects => base.isEditingMultipleObjects;
        /// <summary>
        /// The context used to store and resolve ExposedReference types. This is set by
        /// the SerializedObject constructor.
        /// </summary>
        public new UnityEngine.Object context => base.context;
        /// <summary>
        /// The inspected objects (Read Only).
        /// </summary>
        public new UnityEngine.Object targetObject => base.targetObject;
        /// <summary>
        /// The inspected object (Read Only).
        /// </summary>
        public new UnityEngine.Object[] targetObjects => base.targetObjects;
        
    }
}