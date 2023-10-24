using System.Collections;
using System.Collections.Generic;
using LoM.Super;
using UnityEngine;

namespace LoM.Super
{
    /// <summary>
    /// A singleton MonoBehaviour that inherits from SuperBehaviour.
    /// </summary>
    /// <typeparam name="T">The type of the singleton.</typeparam>
    public class SingletonBehaviour<T> : SuperBehaviour where T : SuperBehaviour
    {
        // Private static s_lock
        protected static readonly object s_lock = new object();
        protected static T s_instance;
        
        /// <summary>
        /// Returns if Instance is not null.
        /// </summary>
        public static bool Exists => s_instance != null;
        
        /// <summary>
        /// The singleton instance of this class.
        /// </summary>
        public static T Instance 
        {
            get
            {
                if (s_instance == null)
                {
                    T[] instances = FindObjectsOfType<T>();
                    if (instances.Length == 1)
                    {
                        s_instance = instances[0];
                    }
                }
                return s_instance;
            }
        }

        /// <summary>
        /// Awake sets the singleton instance, and should therefore not be overridden or hidden.
        /// </summary>
        private void Awake() 
        {
            lock (s_lock)
            {
                if (s_instance == null) 
                {
                    s_instance = this as T;
                    AfterAwake();
                } 
                else if (s_instance != this)
                {
                    Debug.LogWarning($"Trying to create a second instance of {typeof(T)} [{gameObject.name}] singleton. Destroying this instance.");
                    Destroy(gameObject);
                }
            }
        }
        
        /// <summary>
        /// Override this method to do something after singleton Awake() is called.
        /// </summary>
        protected virtual void AfterAwake() { }
        
        /// <summary>
        /// OnDestroy destroys the singleton instance, and should therefore not be overridden or hidden.
        /// </summary>
        private void OnDestroy() 
        {
            lock (s_lock)
            {
                if (s_instance == this) 
                {
                    s_instance = null;
                }
            }
            OnAfterDestroy();
        }
        
        /// <summary>
        /// Override this method to do something after singleton OnDestroy() is called.
        /// </summary>
        protected virtual void OnAfterDestroy() { }
    }
}