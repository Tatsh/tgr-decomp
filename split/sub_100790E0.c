//----- (100790E0) --------------------------------------------------------
int __stdcall sub_100790E0(_DWORD *a1, int a2)
{
  int v2; // esi
  int v4[4]; // [esp+8h] [ebp-10h] BYREF

  v4[0] = a1[1];
  v4[1] = a1[2];
  v4[2] = a1[3];
  v4[3] = a1[4];
  if ( g_DirectInputDeviceA->lpVtbl->CreateDevice(
         g_DirectInputDeviceA,
         (const GUID *const)v4,
         (LPDIRECTINPUTDEVICEA *)&a1,
         0) < 0 )
  {
    OutputDebugStringA(aErrorFailedToC_0);
  }
  else
  {
    v2 = (*(int (__stdcall **)(_DWORD *, GUID *, IDirectInputDevice2A **))*a1)(
           a1,
           &CLSID_IDirectInputDevice2A,
           &g_DirectInputDevice2A);
    (*(void (__stdcall **)(_DWORD *))(*a1 + 8))(a1);
    if ( v2 < 0 )
    {
      OutputDebugStringA(aErrorFailedToO);
      return 0;
    }
    if ( g_DirectInputDevice2A->lpVtbl->SetCooperativeLevel(g_DirectInputDevice2A, g_HWND, a2) < 0 )
    {
      OutputDebugStringA(aErrorFailedToS);
LABEL_8:
      g_DirectInputDevice2A->lpVtbl->Release(g_DirectInputDevice2A);
      g_DirectInputDevice2A = 0;
      return 0;
    }
    if ( g_DirectInputDevice2A->lpVtbl->SetDataFormat(g_DirectInputDevice2A, (LPCDIDATAFORMAT)dword_1007C7A0) < 0 )
    {
      OutputDebugStringA(aErrorFailedToS_0);
      goto LABEL_8;
    }
  }
  return 0;
}
// 1007C7A0: using guessed type int dword_1007C7A0[5];
