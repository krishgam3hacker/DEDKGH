using System;

namespace LoM.Super
{
    /// <summary>
    /// Use this attribute to add a space between properties in the inspector.
    /// </summary>
    [AttributeUsage(AttributeTargets.Property, Inherited = true, AllowMultiple = false)]
    public class PropertySpaceAttribute : Attribute
    {
        public PropertySpaceAttribute() { }
    }
}