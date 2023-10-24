using System.Collections;
using System.Collections.Generic;
using LoM.Super;
using UnityEngine;

namespace LoM.Super
{
    /// <summary>
    /// A singleton MonoBehaviour that inherits from SuperBehaviour.<br/> 
    /// <i>NOTE: This will create a new instance if one does not exist.</i>
    /// </summary>
    /// <typeparam name="T">The type of the singleton.</typeparam>
    public class LazySingletonBehaviour<T> : SingletonBehaviour<T> where T : SuperBehaviour
    {
        /// <summary>
        /// The singleton instance of this class.<br/>
        /// <i>NOTE: This will create a new instance if one does not exist.</i>
        /// </summary>
        public static new T Instance
        {
            get
            {
                lock (s_lock)
                {
                    if (s_instance == null)
                    {
                        s_instance = FindObjectOfType<T>();
                        if (s_instance == null)
                        {
                            GameObject singleton = new GameObject();
                            s_instance = singleton.AddComponent<T>();
                            singleton.name = $"{typeof(T)} [Singleton]";
                        }
                    }
                    return s_instance;
                }
            }
        }
    }
}