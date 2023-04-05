using UnityEngine;
using UnityEngine.UI;

namespace InputReader {
    public class GUIInputView: MonoBehaviour, IEntityInputSource
    {
        [SerializeField] private Joystick _joystick;
        [SerializeField] private Button _jumpButton;
        [SerializeField] private Button _attackButton;
        
        public float Direction => _joystick.Horizontal;
        public bool Jump { get; private set; }
        public bool Attack { get; private set; }

        private void Awake()
        {
            _jumpButton.onClick.AddListener(()=> Jump = true);
            _attackButton.onClick.AddListener(()=> Attack = true);
        }

        private void OnDestroy()
        {
            _jumpButton.onClick.RemoveAllListeners();
            _attackButton.onClick.RemoveAllListeners();
        }
        
        public void ResetOneTimeActions()
        {
            Jump = false;
            Attack = false;
        }
    }
}

