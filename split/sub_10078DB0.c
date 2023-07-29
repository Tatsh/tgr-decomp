//----- (10078DB0) --------------------------------------------------------
int sub_10078DB0()
{
  LPDIRECTINPUTA dida; // eax
  void *v1; // esi
  IDirectInputAVtbl *didaVtbl; // ecx

  if ( !--mouseCreated )
  {
    dida = g_DirectInputDeviceA;
    if ( g_DirectInputDeviceA )
    {
      v1 = dword_10AA2E80;
      if ( dword_10AA2E80 )
      {
        sub_100602B0(dword_10AA2E80);
        operator delete(v1);
        dida = g_DirectInputDeviceA;
      }
      didaVtbl = dida->lpVtbl;
      dword_10AA2E80 = 0;
      didaVtbl->Release(dida);
      g_DirectInputDeviceA = 0;
    }
  }
  return 1;
}
// 100602B0: using guessed type int __thiscall sub_100602B0(_DWORD);
// 118ABDE8: using guessed type int mouseCreated;
