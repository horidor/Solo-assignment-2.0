using Core.Movement.Data;
using UnityEngine;

namespace Core.Movement.Controller
{
    public class Jumper
    {

        private readonly Rigidbody2D _rigidbody;
        private readonly BoxCollider2D _boxCollider;
        private readonly JumperData _jumpData;

        public Jumper(Rigidbody2D rigidbody, BoxCollider2D boxCollider, JumperData jumpData)
        {
            _rigidbody = rigidbody;
            _boxCollider = boxCollider;
            _jumpData = jumpData;
            _rigidbody.gravityScale = _jumpData.GravityScale;
        }
        
        public void Jump()
        {
            if (IsGrounded())
                _rigidbody.AddForce(Vector2.up * _jumpData.JumpForce);
        }
        
        public bool IsGrounded()
        {
            return Physics2D.BoxCast(_boxCollider.bounds.center, _boxCollider.bounds.size, 
                0f, Vector2.down, 0.01f, _jumpData.JumpableGround);
        }
    }
    
}