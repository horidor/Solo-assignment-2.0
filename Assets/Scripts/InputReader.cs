﻿using System;
using Player;
using UnityEngine;

public class InputReader : MonoBehaviour
{
       [SerializeField] private PlayerEntity _playerEntity;

       private float _direction;
       
       private void Update()
       {
              _direction = Input.GetAxisRaw("Horizontal");
              
              if (Input.GetButtonDown("Jump"))
                     _playerEntity.Jump();

              if (Input.GetButtonDown("Fire1"))
                     _playerEntity.startAttack();
       }

       private void FixedUpdate()
       {
              _playerEntity.MoveHorizontally(_direction);
       }
}
