using System;
using System.Collections.Generic;
using UnityEngine;

namespace Core.Parallax
{
    [Serializable]
    public class ParallaxData
    {
        [field: SerializeField] public List<ParallaxLayer> ParallaxLayers { get; private set; }
        [field: SerializeField] public Transform Target { get; private set; }
            
        [Serializable]
        public class ParallaxLayer
        {
            [field: SerializeField] public Transform Transform { get; private set; }
            [field: SerializeField] public float Speed { get; private set; }
            
        }
    }
}