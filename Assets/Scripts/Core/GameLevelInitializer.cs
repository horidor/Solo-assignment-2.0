using System;
using System.Collections.Generic;
using Core.Parallax;
using Core.Services.Updater;
using UnityEngine;
using Player;
using InputReader;
using UnityEngine.UIElements;

namespace Core
{
    public class GameLevelInitializer : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        [SerializeField] private GUIInputView _guiInputView;
        
        private ExternalDevicesInputReader _externalDevicesInput;
        private ParallaxEffect _parallaxEffect;
        private PlayerSystem _playerSystem;
        private ProjectUpdater _projectUpdater;
        private List<IDisposable> _disposables;
        
        private bool _onPause;
        private void Awake()
        {
            _disposables = new List<IDisposable>();

            _parallaxEffect = gameObject.AddComponent<ParallaxEffect>();
            _disposables.Add(_parallaxEffect);
            
            if (ProjectUpdater.Instance == null)
                _projectUpdater = new GameObject().AddComponent<ProjectUpdater>();
            else
                _projectUpdater = ProjectUpdater.Instance as ProjectUpdater;
            
            _externalDevicesInput = new ExternalDevicesInputReader();
            _disposables.Add(_externalDevicesInput);
            
            _playerSystem = new PlayerSystem(_playerEntity, new List<IEntityInputSource>()
            {
                _guiInputView,
                _externalDevicesInput
            });
            
            _disposables.Add(_playerSystem);
        }

        private void OnDestroy()
        {
            foreach (var disposable in _disposables)
                disposable.Dispose();
        }
        
    }
}