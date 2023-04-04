using System.Collections;
using System.Collections.Generic;
using Player.PlayerAnimation;
using UnityEngine;

namespace Player
{
    public class PlayerEntity : MonoBehaviour
    {
        [SerializeField] private AnimationController _animator;
        [SerializeField] private float _horizontalSpeed;
        [SerializeField] private float _jumpForce;
        [SerializeField] private float _gravityScale;
        [SerializeField] private bool _faceRight;
        [SerializeField] private LayerMask _jumpableGround;

        private Rigidbody2D _rigidbody;
        private BoxCollider2D _boxcollider;
        private Vector2 _movement;
        private AnimationType _currentAnimationType;
        
        private void Start()
        {
            _movement.y = 0;
            _rigidbody = GetComponent<Rigidbody2D>();
            _boxcollider = GetComponent<BoxCollider2D>();
            _rigidbody.gravityScale = _gravityScale;
        }

        public void MoveHorizontally(float direction)
        {
            _movement.x = direction;
            SetDirection(direction);
            Vector2 velocity = _rigidbody.velocity;
            velocity.x = direction * _horizontalSpeed;
            _rigidbody.velocity = velocity;
        }

        private void SetDirection(float direction)
        {
            if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
                Flip();
        }

        public void Jump()
        {
            if (IsGrounded())
                _rigidbody.AddForce(Vector2.up * _jumpForce);
        }
        
        public void Flip()
        {
            transform.Rotate(0, 180, 0);
            _faceRight = !_faceRight;
        }

        private void Update()
        {
            UpdateAnimations();
        }

        private bool IsGrounded()
        {
            return Physics2D.BoxCast(_boxcollider.bounds.center, _boxcollider.bounds.size, 0f,
                Vector2.down, 0.01f, _jumpableGround);
        }

        private void UpdateAnimations()
        {
            _animator.PlayAnimation(AnimationType.Idle, true);
            _animator.PlayAnimation(AnimationType.Run, _movement.magnitude > 0);
            _animator.PlayAnimation(AnimationType.Jump, !IsGrounded());
        }

        public void startAttack()
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
