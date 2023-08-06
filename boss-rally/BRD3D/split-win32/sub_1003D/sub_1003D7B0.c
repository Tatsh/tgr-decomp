#include "../../types-win32.h"
//----- (1003D7B0) --------------------------------------------------------
int __cdecl sub_1003D7B0(_DWORD *a1)
{
  int v1; // esi
  int result; // eax
  int v3; // [esp+10h] [ebp-8h] BYREF
  int v4; // [esp+14h] [ebp-4h] BYREF

  v3 = 0;
  v4 = 0;
  v1 = DirectPlayLobbyCreateA(0, (int)&v3, 0, 0, 0);
  if ( v1 >= 0 && (v1 = (**(int (__stdcall ***)(int, IID *, int *))v3)(v3, &IID_IDirectPlayLobby2A, &v4), v1 >= 0) )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v3 = 0;
    sub_1003D8A0((int)g_HWND, v4);
    result = 0;
    *a1 = v4;
  }
  else
  {
    if ( v3 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    if ( v4 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    result = v1;
  }
  return result;
}
// 10090910: using guessed type IID IID_IDirectPlayLobby2A;
