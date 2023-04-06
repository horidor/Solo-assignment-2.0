using System;
using UnityEngine;

namespace Core.Movement.Data
{
    [Serializable]
    public class JumperData
    {
        [field: SerializeField] public float JumpForce { get; private set; }
        [field: SerializeField] public float GravityScale { get; private set; }
        [field: SerializeField] public LayerMask JumpableGround { get; private set; }
    }
}