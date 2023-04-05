﻿using System;
using System.Collections.Generic;
using System.Linq;
using Core.Services.Updater;
using InputReader;

namespace Player
{
    public class PlayerBrain : IDisposable
    {
        private readonly PlayerEntity _playerEntity;
        private readonly List<IEntityInputSource> _inputSources;

        public PlayerBrain(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
        {
            _playerEntity = playerEntity;
            _inputSources = inputSources;
            ProjectUpdater.Instance.FixedUpdateCalled += OnFixedUpdate;
        }
        
        public void Dispose()
        {
            ProjectUpdater.Instance.FixedUpdateCalled -= OnFixedUpdate;
        }

        private void OnFixedUpdate()
        {
            _playerEntity.MoveHorizontally(GetDirection());
            if (IsJump)
                _playerEntity.Jump();
            if (IsAttack)
                _playerEntity.StartAttack();
            
            foreach (var inputSource in _inputSources)
                inputSource.ResetOneTimeActions();
        }

        private float GetDirection()
        {
            foreach (var inputSource in _inputSources)
            {
                if (inputSource.Direction == 0)
                    continue;

                return inputSource.Direction;
            }

            return 0;
        }

        private bool IsJump => _inputSources.Any(source => source.Jump);
        private bool IsAttack => _inputSources.Any(source => source.Attack);
    }
}