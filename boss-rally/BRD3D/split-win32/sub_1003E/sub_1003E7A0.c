#include "../../types-win32.h"
//----- (1003E7A0) --------------------------------------------------------
int __cdecl sub_1003E7A0(int a1)
{
  int v1; // esi
  int v2; // edi
  int v3; // ebp
  int v5; // ebx
  int v6; // eax
  int v8; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]
  void (__thiscall *v10)(int, int, int, int); // [esp+24h] [ebp+4h]

  v1 = a1;
  v2 = (__int64)*(float *)(a1 + 12140) - 3;
  v9 = v2;
  v3 = (__int64)*(float *)(a1 + 12144) - 12;
  v5 = *(__int16 *)(a1 + 12134) / 16 + 1;
  v10 = *(void (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 20);
  v10(a1, 61, v2 - 8, v3);
  v6 = 0;
  if ( v5 )
  {
    v8 = v5;
    do
    {
      v10(v1, 59, v2, v3);
      v2 += 16;
      --v5;
    }
    while ( v5 );
    v6 = v8;
    v2 = v9;
  }
  v10(v1, 60, v2 + 16 * v6, v3);
  return 1;
}
