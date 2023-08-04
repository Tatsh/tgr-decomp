#include "../../types-win32.h"
//----- (1003E9E0) --------------------------------------------------------
int __cdecl sub_1003E9E0(float *a1)
{
  float *v1; // ebx
  int v2; // edi
  __int64 v3; // rax
  int v4; // ebp
  unsigned int i; // esi
  void (__thiscall *v8)(float *, int, int, int); // [esp+14h] [ebp+4h]

  v1 = a1;
  v2 = (__int64)a1[15];
  v3 = (__int64)a1[16];
  v4 = v3 + 19;
  v8 = *(void (__thiscall **)(float *, int, int, int))(*(_DWORD *)a1 + 20);
  ((void (__fastcall *)(float *, _DWORD, int, int, _DWORD))v8)(a1, HIDWORD(v3), 116, v2, v3 + 19);
  for ( i = 0; i < dword_10B4E70C; v2 += 12 )
  {
    v8(v1, 117, v2, v4);
    ++i;
  }
  return 1;
}
// 10B4E70C: using guessed type int dword_10B4E70C;
