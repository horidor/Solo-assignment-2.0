using System.Collections.Generic;
using UnityEngine;
using Player;

namespace Core
{
    public class GameLevelInitializer : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        [SerializeField] private GUIInputView _guiInputView;
        
        private ExternalDevicesInputReader _externalDevicesInput;
        private PlayerBrain _playerBrain;
        private bool _onPause;
        private void Awake()
        {
            _externalDevicesInput = new ExternalDevicesInputReader();
            _playerBrain = new PlayerBrain(_playerEntity, new List<IEntityInputSource>()
            {
                _guiInputView,
                _externalDevicesInput
            });
        }

        private void Update()
        {
            if (_onPause)
                return;
            
            _externalDevicesInput.OnUpdate();
        }

        private void FixedUpdate()
        {
            if (_onPause)
                return;
            
            _playerBrain.OnFixedUpdate();
        }
    }
}