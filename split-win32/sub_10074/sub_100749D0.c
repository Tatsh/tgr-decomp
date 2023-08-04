#include "../../types-win32.h"
//----- (100749D0) --------------------------------------------------------
int __cdecl sub_100749D0(int a1, int a2)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)a1 = 0;
  *(float *)(a1 + 4) = -*(float *)(a2 + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  *(float *)(a1 + 20) = -*(float *)a2;
  *(float *)(a1 + 24) = -*(float *)(a2 + 4);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)a2;
  return result;
}
