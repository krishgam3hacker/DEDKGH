using System;

namespace LoM.Super 
{
    /// <summary>
    /// Attribute to make a field editable if a condition is met.
    /// </summary>
    /// <param name="fieldName">The name of the field to check.</param>
    /// <param name="value">The value to check for.</param>
    [AttributeUsage(AttributeTargets.Field | AttributeTargets.Property, Inherited = true, AllowMultiple = false)]
    public class EditableIfAttribute : ShowIfAttribute
    {
        /// <summary>
        /// Attribute to make a field editable if a condition is met.
        /// </summary>
        /// <param name="fieldName">The name of the field to check.</param>
        /// <param name="value">The value to check for.</param>
        public EditableIfAttribute(string fieldName, bool value = true) : base(fieldName, value) { }
        
        /// <summary>
        /// Override this method to calculate if the field is active or not.
        /// </summary>
        /// <param name="target">The object to evaluate the condition for.</param>
        /// <returns>True if the field is active; otherwise false.</returns>
        public override bool EvaluateActive(object target) 
        {
            return true;
        }
        
        /// <summary>
        /// Override this method to calculate if the field is read only or not.
        /// </summary>
        /// <param name="target">The object to evaluate the condition for.</param>
        /// <returns>True if the field is read only; otherwise false.</returns>
        public override bool EvaluateReadOnly(object target) 
        {
            return !base.EvaluateActive(target);
        }
    }
}