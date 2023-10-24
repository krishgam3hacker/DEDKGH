
using System;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using UnityEditor;
using UnityEngine;

namespace LoM.Super.Serialization
{
    /// <summary>
    /// Attributes of a SerializedProperty.<br/>
    /// <i>Use SuperSerializedProperty.Attributes to get the all Super related attributes of a SerializedProperty or SerializedField.</i>
    /// </summary>
    public class SerializedAttributes
    {
        // Member Property Display
        private bool m_isReadOnly;
        private bool m_isActive = true;
        private PropertyRangeAttribute m_range;
        private PropertyTextAreaAttribute m_textArea;
        private bool m_isLayer;
        private bool m_isTag;
        private bool m_isHDRColor;
        private ConditionAttribute[] m_conditions = null;
        private FixedBufferAttribute m_fixedBuffer;
        private string m_label;
        
        // Member Before Property
        private PropertyTooltipAttribute m_tooltip;
        private PropertyHeaderAttribute m_header;
        private bool m_isSpace;
        
        // Getters Property Display
        public bool IsReadOnly => m_isReadOnly;
        public bool IsActive => m_isActive;
        public PropertyRangeAttribute Range => m_range;
        public bool IsRange => m_range != null;
        public PropertyTextAreaAttribute TextArea => m_textArea;
        public bool IsTextArea => m_textArea != null;
        public bool IsLayer => m_isLayer;
        public bool IsTag => m_isTag;
        public bool IsHDRColor => m_isHDRColor;
        public ConditionAttribute[] Conditions => m_conditions;
        public Type FixedBufferType => m_fixedBuffer?.ElementType;
        public int FixedBufferSize => m_fixedBuffer?.Length ?? 0;
        public bool IsFixedBuffer => m_fixedBuffer != null;
        public string Label => m_label;
        
        // Getters Before Property
        public PropertyTooltipAttribute Tooltip => m_tooltip;
        public bool IsTooltip => m_tooltip != null;
        public PropertyHeaderAttribute Header => m_header;
        public bool IsHeader => m_header != null;
        public bool IsSpace => m_isSpace;
        
        // Constructors
        internal SerializedAttributes(PropertyInfo property, object target) 
        {
            m_isReadOnly = property.GetSetMethod(true) == null;
            m_range = property.GetCustomAttribute<PropertyRangeAttribute>();
            m_textArea = property.GetCustomAttribute<PropertyTextAreaAttribute>();
            m_isLayer = property.GetCustomAttribute<PropertyLayerAttribute>() != null;
            m_isTag = property.GetCustomAttribute<PropertyTagAttribute>() != null;
            m_isHDRColor = property.GetCustomAttribute<PropertyHDRColorAttribute>() != null;
            m_conditions = property.GetCustomAttributes<ConditionAttribute>().ToArray();
            m_label = property.GetCustomAttribute<LabelAttribute>()?.Label ?? ObjectNames.NicifyVariableName(property.Name);
            
            m_fixedBuffer = property.GetCustomAttribute<FixedBufferAttribute>();
            
            m_tooltip = property.GetCustomAttribute<PropertyTooltipAttribute>();
            m_header = property.GetCustomAttribute<PropertyHeaderAttribute>();
            m_isSpace = property.GetCustomAttribute<PropertySpaceAttribute>() != null;
            
            
            EvaluateConditions(target);
        }
        internal SerializedAttributes(FieldInfo field, object target)
        {
            m_isReadOnly = field.GetCustomAttribute<ReadOnlyAttribute>() != null;
            m_range = field.GetCustomAttribute<RangeAttribute>() != null ? new PropertyRangeAttribute(field.GetCustomAttribute<RangeAttribute>()) : null;
            m_textArea = field.GetCustomAttribute<TextAreaAttribute>() != null ? new PropertyTextAreaAttribute(field.GetCustomAttribute<TextAreaAttribute>()) : null;
            m_isLayer = field.GetCustomAttribute<LayerAttribute>() != null;
            m_isTag = field.GetCustomAttribute<TagAttribute>() != null;
            m_isHDRColor = field.GetCustomAttribute<HDRColorAttribute>() != null;
            m_conditions = field.GetCustomAttributes<ConditionAttribute>().ToArray();
            m_label = field.GetCustomAttribute<LabelAttribute>()?.Label ?? ObjectNames.NicifyVariableName(field.Name);
            
            m_fixedBuffer = field.GetCustomAttribute<FixedBufferAttribute>();
            
            m_tooltip = field.GetCustomAttribute<TooltipAttribute>() != null ? new PropertyTooltipAttribute(field.GetCustomAttribute<TooltipAttribute>()) : null;
            m_header = field.GetCustomAttribute<HeaderAttribute>() != null ? new PropertyHeaderAttribute(field.GetCustomAttribute<HeaderAttribute>()) : null;
            m_isSpace = field.GetCustomAttribute<SpaceAttribute>() != null;
            
            EvaluateConditions(target);
        }
        
        // Evaluate Conditions
        public void EvaluateConditions(object target)
        {
            foreach (ConditionAttribute condition in m_conditions)
            {
                if (!condition.EvaluateActive(target)) m_isActive = false;
                if (condition.EvaluateReadOnly(target)) m_isReadOnly = true;
            }
        }
    }
}