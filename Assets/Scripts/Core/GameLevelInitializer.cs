using System.Collections.Generic;
using Core.Services.Updater;
using UnityEngine;
using Player;
using InputReader;

namespace Core
{
    public class GameLevelInitializer : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        [SerializeField] private GUIInputView _guiInputView;
        
        private ExternalDevicesInputReader _externalDevicesInput;
        private PlayerSystem _playerSystem;
        private ProjectUpdater _projectUpdater;
        
        private bool _onPause;
        private void Awake()
        {
            if (ProjectUpdater.Instance == null)
                _projectUpdater = new GameObject().AddComponent<ProjectUpdater>();
            else
                _projectUpdater = ProjectUpdater.Instance as ProjectUpdater;
            
            _externalDevicesInput = new ExternalDevicesInputReader();
            _playerSystem = new PlayerSystem(_playerEntity, new List<IEntityInputSource>()
            {
                _guiInputView,
                _externalDevicesInput
            });
        }
        
    }
}