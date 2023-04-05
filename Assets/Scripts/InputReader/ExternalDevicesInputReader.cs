using System;
using Core.Services.Updater;
using Player;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;

namespace InputReader
{
       public class ExternalDevicesInputReader : IEntityInputSource, IDisposable
       {
              public float Direction => Input.GetAxisRaw("Horizontal");
              public bool Jump { get; private set; }
              public bool Attack { get; private set; }

              public ExternalDevicesInputReader()
              {
                     ProjectUpdater.Instance.UpdateCalled += OnUpdate;
              }
              
              public void ResetOneTimeActions()
              {
                     Jump = false;
                     Attack = false;
              }

              private void OnUpdate()
              {
                     if (Input.GetButtonDown("Jump"))
                            Jump = true;

                     if (!IsPointerOverUI() && Input.GetButtonDown("Fire1"))
                            Attack = true;
              }

              private bool IsPointerOverUI() => EventSystem.current.IsPointerOverGameObject();

              public void Dispose() => ProjectUpdater.Instance.UpdateCalled -= OnUpdate;
       }
}