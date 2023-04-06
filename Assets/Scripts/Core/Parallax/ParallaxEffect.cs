using System;
using System.Collections.Generic;
using Core.Services.Updater;
using UnityEngine;

namespace Core.Parallax
{
    public class ParallaxEffect : MonoBehaviour, IDisposable
    {
        [SerializeField] private ParallaxData _parallaxData;

        private float _previousTargetPosition;

        public void Dispose()
        {
            ProjectUpdater.Instance.LateUpdateCalled -= OnLateUpdate;
        }
        private void Start()
        {
            _previousTargetPosition = _parallaxData.Target.position.x;
            ProjectUpdater.Instance.LateUpdateCalled += OnLateUpdate;
        }

        private void OnLateUpdate()
        {
            float deltaMovement = _previousTargetPosition - _parallaxData.Target.position.x;
            foreach (var layer in _parallaxData.ParallaxLayers)
            {
                Vector2 layerPosition = layer.Transform.position;
                layerPosition.x = layerPosition.x + deltaMovement * layer.Speed;
                layer.Transform.position = layerPosition;
            }
            _previousTargetPosition = _parallaxData.Target.position.x;
        }
        
    }
    
}