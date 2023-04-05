using UnityEngine;

using Core.Movement.Data;
using Core.Enums;

namespace Core.Movement.Controller
{
    public class DirectionalMover
    {
        private readonly DirectionalMovementData _directionalMovementData;
        
        private readonly Rigidbody2D _rigidbody;
        private readonly Transform _transform;
        private Vector2 _movement;

        public DirectionalMover(Rigidbody2D rigidbody, Transform transform, 
            DirectionalMovementData directionalMovementData)
        {
            _rigidbody = rigidbody;
            _transform = transform;
            _directionalMovementData = directionalMovementData;
        }
        
        public Direction Direction { get; private set; }
        public bool IsMoving => _movement.magnitude > 0;
        
        public void MoveHorizontally(float direction)
        {
            _movement.x = direction;
            SetDirection(direction);
            Vector2 velocity = _rigidbody.velocity;
            velocity.x = direction * _directionalMovementData.HorizontalSpeed;
            _rigidbody.velocity = velocity;
        }
        
        private void SetDirection(float direction)
        {
            if ((Direction == Direction.Right && direction < 0) ||
                (Direction == Direction.Left && direction > 0))
                Flip();
        }
        
        public void Flip()
        {
            _transform.Rotate(0, 180, 0);
            Direction = Direction == Direction.Right ? Direction.Left : Direction.Right;
        }
    }
}