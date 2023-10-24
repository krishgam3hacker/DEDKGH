using UnityEngine;
using UnityEditor;
using LoM.Super.Editor;

namespace LoM.Super.Internal
{
    [CustomEditor(typeof(SuperBehaviour), true)]
    public class SuperBehaviourInspector : SuperEditor<SuperBehaviour>
    {
        public override void OnInspectorFieldsGUI()
        {
            base.OnInspectorFieldsGUI();
        }
    }
}