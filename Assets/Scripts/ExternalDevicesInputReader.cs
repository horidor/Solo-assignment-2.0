using System;
using Player;
using UnityEngine;
using UnityEngine.EventSystems;

public class ExternalDevicesInputReader : IEntityInputSource
{
       public float Direction => Input.GetAxisRaw("Horizontal");

       public bool Jump { get; private set; }
       public bool Attack { get; private set; }
       public void OnUpdate()
       {
              if (Input.GetButtonDown("Jump")) 
                     Jump = true;

              if (!IsPointerOverUI() && Input.GetButtonDown("Fire1"))
                     Attack = true;
       }

       private bool IsPointerOverUI() => EventSystem.current.IsPointerOverGameObject();

       public void ResetOneTimeActions()
       {
              Jump = false;
              Attack = false;
       }
}
