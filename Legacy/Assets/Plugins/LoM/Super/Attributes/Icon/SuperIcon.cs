using System;
using System.Reflection;
using UnityEngine;

namespace LoM.Super.Internal
{
    [AttributeUsage(AttributeTargets.Class, AllowMultiple = false, Inherited = true)]
    public class SuperIcon : IconAttribute
    {        
        public SuperIcon(SuperBehaviourIcon icon) : base(GetPath(icon)) { }
        
        private static string GetPath(SuperBehaviourIcon icon)
        {
            return $"Assets/Plugins/LoM/Super/Icons/{icon.ToString()}.png";
        }
    }
}