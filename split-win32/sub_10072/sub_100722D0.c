#include "../../types-win32.h"
//----- (100722D0) --------------------------------------------------------
int __cdecl sub_100722D0(int *a1)
{
  int *v1; // ebp
  int v2; // eax
  int v3; // ecx
  int *v4; // ebx
  int v5; // esi
  int v6; // eax
  int result; // eax
  void *v8; // [esp+70h] [ebp-34h] BYREF
  int v9; // [esp+74h] [ebp-30h] BYREF
  char v10[4]; // [esp+78h] [ebp-2Ch] BYREF
  int v11; // [esp+7Ch] [ebp-28h] BYREF
  int v12; // [esp+80h] [ebp-24h]
  int v13; // [esp+84h] [ebp-20h]
  int v14; // [esp+88h] [ebp-1Ch]
  int v15; // [esp+8Ch] [ebp-18h]
  int v16; // [esp+90h] [ebp-14h] BYREF
  char v17; // [esp+94h] [ebp-10h]

  v11 = 0;
  v1 = a1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v2 = a1[10];
  v11 = 20;
  v8 = 0;
  v9 = 0;
  v12 = 65762;
  if ( v2 )
    v12 = 82146;
  v3 = a1[1];
  v15 = a1[2];
  v4 = a1 + 39;
  v13 = v3;
  v5 = g_DSound->lpVtbl->CreateSoundBuffer(g_DSound, (LPCDSBUFFERDESC)&v11, (LPDIRECTSOUNDBUFFER *)(a1 + 39), 0);
  if ( v5 )
    goto LABEL_9;
  v5 = (*(int (__stdcall **)(int, _DWORD, int, void **, char *, int *, int **, _DWORD))(*(_DWORD *)*v4 + 44))(
         *v4,
         0,
         v1[1],
         &v8,
         v10,
         &v9,
         &a1,
         0);
  if ( v5 )
    goto LABEL_9;
  qmemcpy(v8, (const void *)*v1, v1[1]);
  v5 = (*(int (__stdcall **)(int, void *, int, _DWORD, _DWORD))(*(_DWORD *)*v4 + 76))(*v4, v8, v1[1], 0, 0);
  if ( v5
    || (v8 = 0, (v5 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)*v4 + 60))(*v4, 0)) != 0)
    || (v5 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)*v4 + 64))(*v4, 0)) != 0
    || (v6 = *v4,
        v16 = 20,
        result = (*(int (__stdcall **)(int, int *))(*(_DWORD *)v6 + 12))(v6, &v16),
        (v5 = result) != 0) )
  {
LABEL_9:
    if ( v8 )
    {
      v5 = (*(int (__stdcall **)(int, void *, int, _DWORD, _DWORD))(*(_DWORD *)*v4 + 76))(*v4, v8, v1[1], 0, 0);
      v8 = 0;
    }
    if ( *v4 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)*v4 + 8))(*v4);
      *v4 = 0;
      return v5;
    }
  }
  else
  {
    if ( (v17 & 4) != 0 )
    {
      v1[9] = 1;
      return result;
    }
    v1[9] = 0;
  }
  return v5;
}
