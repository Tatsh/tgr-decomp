#include "../../types-win32.h"
//----- (100222D0) --------------------------------------------------------
int __cdecl sub_100222D0(int a1, float *a2, int a3, int a4, int a5)
{
  int result; // eax
  double v7; // st7
  float v8; // [esp+14h] [ebp+8h]

  result = a1;
  v8 = 1.0 / a2[6];
  *(float *)(a1 + 32) = v8;
  *(float *)a1 = a2[1] * flt_104BBF08 * v8 + flt_104C0BB0;
  *(float *)(a1 + 4) = a2[2] * flt_104BC198 * *(float *)(a1 + 32) + flt_104C0BB8;
  v7 = a2[3] * flt_100A79E0 * *(float *)(a1 + 32) + flt_100A79E4;
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 12) = a3;
  *(float *)(a1 + 8) = v7;
  return result;
}
// 100A79E0: using guessed type float flt_100A79E0;
// 100A79E4: using guessed type float flt_100A79E4;
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
