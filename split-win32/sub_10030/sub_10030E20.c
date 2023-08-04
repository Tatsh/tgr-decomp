#include "../../types-win32.h"
//----- (10030E20) --------------------------------------------------------
int __cdecl sub_10030E20(int a1, int a2, float a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11)
{
  int result; // eax

  sub_100309A0(a1, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  *(_BYTE *)(a2 + 8) = sub_10030DE0(*(float *)a1);
  *(_BYTE *)(a2 + 9) = sub_10030DE0(*(float *)(a1 + 16));
  *(_BYTE *)(a2 + 10) = sub_10030DE0(*(float *)(a1 + 32));
  *(_BYTE *)(a2 + 24) = sub_10030DE0(*(float *)(a1 + 4));
  *(_BYTE *)(a2 + 25) = sub_10030DE0(*(float *)(a1 + 20));
  result = sub_10030DE0(*(float *)(a1 + 36));
  *(_BYTE *)(a2 + 26) = result;
  return result;
}
