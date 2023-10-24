using System;

namespace LoM.Super.Internal
{
    internal static class IconUtility
    {   
        public static SuperBehaviourIcon GetIconByClass(UnityEngine.Object obj)
        {
            return GetIconByClassName(obj.GetType().Name);
        }
        public static SuperBehaviourIcon GetIconByClassName(string className)
        {            
            if (className.Contains("Test"))
            {
                return SuperBehaviourIcon.Test;
            }
            
            if (className.Contains("GameManager"))
            {
                return SuperBehaviourIcon.GameManager;
            }
            
            if (className.Contains("SceneManager"))
            {
                return SuperBehaviourIcon.SceneManager;
            }
            
            if (className.Contains("PlayerController"))
            {
                return SuperBehaviourIcon.PlayerController;
            }
            
            if (className.Contains("PlayerMove"))
            {
                return SuperBehaviourIcon.PlayerMovement;
            }
            
            if (className.Contains("Sound") || className.Contains("Audio") || className.Contains("Music"))
            {
                return SuperBehaviourIcon.Sound;
            }
            
            if (className.Contains("Manager"))
            {
                return SuperBehaviourIcon.Manager;
            }
            
            if (className.Contains("Controller"))
            {
                return SuperBehaviourIcon.Controller;
            }
            
            if (className.Contains("Generator"))
            {
                return SuperBehaviourIcon.Generator;
            }
            
            if (className.Contains("GameState"))
            {
                return SuperBehaviourIcon.GameState;
            }
            
            if (className.Contains("Spawn"))
            {
                return SuperBehaviourIcon.Spawn;
            }
            
            if (className.Contains("Settings"))
            {
                return SuperBehaviourIcon.Settings;
            }
            
            if (className.Contains("Animator") || className.Contains("Animation"))
            {
                return SuperBehaviourIcon.Animation;
            }
            
            if (className.Contains("Trigger"))
            {
                return SuperBehaviourIcon.Trigger;
            }
            
            if (className.Contains("Loader"))
            {
                return SuperBehaviourIcon.Loader;
            }
            
            if (className.EndsWith("Data") || className.EndsWith("Store"))
            {
                return SuperBehaviourIcon.Data;
            }
            
            if (className.EndsWith("State"))
            {
                return SuperBehaviourIcon.State;
            }
            
            if (className.Contains("Menu"))
            {
                return SuperBehaviourIcon.Menu;
            }
            
            if (className.EndsWith("Control"))
            {
                return SuperBehaviourIcon.Control;
            }
            
            if (className.Contains("Input"))
            {
                return SuperBehaviourIcon.Input;
            }
            
            if (className.Contains("Debug"))
            {
                return SuperBehaviourIcon.Debug;
            }
            
            if (className.Contains("Gizmo"))
            {
                return SuperBehaviourIcon.Gizmo;
            }
            
            return SuperBehaviourIcon.Default;
        }
    }
}