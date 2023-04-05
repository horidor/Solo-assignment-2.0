using System;
using UnityEngine;

namespace Core.Movement.Data
{
    [Serializable]
    public class DirectionalMovementData
    {
        [field: SerializeField] public bool FaceRight { get; private set; }
        [field: SerializeField] public float HorizontalSpeed { get; private set; }
    }
}