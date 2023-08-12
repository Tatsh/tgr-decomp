#include "types-win32.h"
//----- (10024260) --------------------------------------------------------
int __cdecl sub_10024260(int a1) {
  __int16 *v1; // ecx
  int result;  // eax
  float v3;    // [esp+4h] [ebp+4h]
  float v4;    // [esp+4h] [ebp+4h]
  float v5;    // [esp+4h] [ebp+4h]
  float v6;    // [esp+4h] [ebp+4h]

  v1 = *(__int16 **)(a1 + 4);
  result = a1 + 8;
  v3 = (float)*v1;
  flt_104BBF08 = v3 * 0.25;
  v4 = (float)v1[1];
  flt_104BC198 = v4 * -0.25;
  v5 = (float)v1[4];
  flt_104C0BB0 = v5 * 0.25;
  v6 = (float)v1[5];
  flt_104C0BB8 = v6 * 0.25;
  return result;
}
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
