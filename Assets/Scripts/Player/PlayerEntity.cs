using System.Collections;
using System.Collections.Generic;
using Core.Animation;
using Core.Movement.Controller;
using UnityEngine;
using Core.Movement.Data;
using Core.Services.Updater;
using UnityEditor;

namespace Player
{
    public class PlayerEntity : MonoBehaviour
    {
        [SerializeField] private AnimationController _animator;
        
        [SerializeField] private DirectionalMovementData _directionalMovementData;
        [SerializeField] private JumperData _jumpData;

        private Jumper _jumper;
        private DirectionalMover _directionalMover;
       
        private BoxCollider2D _boxCollider;
        private Rigidbody2D _rigidbody;

        private void Start()
        {
            _rigidbody = GetComponent<Rigidbody2D>();
            _directionalMover = new DirectionalMover(_rigidbody, transform, _directionalMovementData);
            _boxCollider = GetComponent<BoxCollider2D>();
            _jumper = new Jumper(_rigidbody, _boxCollider, _jumpData);
        }

        public void MoveHorizontally(float direction) => _directionalMover.MoveHorizontally(direction);
        public void Jump() => _jumper.Jump();

        private void Update()
        {
            UpdateAnimations();
        }

        private void UpdateAnimations()
        {
            _animator.PlayAnimation(AnimationType.Idle, true);
            _animator.PlayAnimation(AnimationType.Run, _directionalMover.IsMoving);
            _animator.PlayAnimation(AnimationType.Jump, !_jumper.IsGrounded());
        }
        public void StartAttack()
        {
            if (!_animator.PlayAnimation(AnimationType.Attack, true))
                return;

            _animator.ActionRequested += Attack;
            _animator.AnimationEnded += AttackEnd;
            
        }
        private void Attack()
        {
            Debug.Log("Attack");
        }

        private void AttackEnd()
        {
            _animator.ActionRequested -= Attack;
            _animator.AnimationEnded -= AttackEnd;
            _animator.PlayAnimation(AnimationType.Attack, false);
        }
    }
}
