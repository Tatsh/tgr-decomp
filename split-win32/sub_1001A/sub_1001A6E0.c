#include "../../types-win32.h"
//----- (1001A6E0) --------------------------------------------------------
int __cdecl sub_1001A6E0(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  __unk0 *v8; // edi
  _DWORD *v9; // ebx
  int v10; // esi
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  __unk0 *v14; // eax

  v8 = (__unk0 *)a1;
  if ( !a1 )
    return 0;
  if ( !a7 )
    return 0;
  v9 = a8;
  if ( !a8 )
    return 0;
  v10 = sub_1001B690((_DWORD *)a1, a2, &a1, 0);
  if ( !v10 )
  {
    v10 = a1;
    if ( !a1 )
      return 0;
  }
  v11 = a3;
  if ( !a3 || (v12 = a4) == 0 || (v13 = a5) == 0 )
  {
    v11 = 640;
    v12 = 480;
    v13 = 16;
  }
  v14 = sub_1001B880(v8, v11, v12, v13, a6, v10, &a8, 0);
  if ( !v14 )
  {
    v14 = (__unk0 *)a8;
    if ( !a8 )
      return 0;
  }
  *a7 = v14;
  *v9 = v10;
  return 1;
}
