#include "../../types-win32.h"
//----- (10022350) --------------------------------------------------------
int __cdecl sub_10022350(float *a1, float *a2)
{
  float v2; // eax
  float v3; // eax
  int result; // eax
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+8h] [ebp+4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]

  if ( dword_104BC190 )
  {
    v5 = a1[5] * flt_104C15DC + a1[6] * flt_104C15E0 + a1[7] * flt_104C15E4;
    if ( v5 < 0.0 )
    {
      result = (int)a2;
      a2[7] = flt_104C15E8;
      a2[8] = flt_104C15EC;
      a2[9] = flt_104C15F0;
    }
    else
    {
      v6 = v5 * flt_104C15D0 + flt_104C15E8;
      v2 = 1.0;
      if ( v6 <= 1.0 )
        v2 = v5 * flt_104C15D0 + flt_104C15E8;
      a2[7] = v2;
      v7 = v5 * flt_104C15D4 + flt_104C15EC;
      v3 = 1.0;
      if ( v7 <= 1.0 )
        v3 = v5 * flt_104C15D4 + flt_104C15EC;
      a2[8] = v3;
      v8 = v5 * flt_104C15D8 + flt_104C15F0;
      *(float *)&result = 1.0;
      if ( v8 <= 1.0 )
        *(float *)&result = v5 * flt_104C15D8 + flt_104C15F0;
      a2[9] = *(float *)&result;
    }
  }
  else
  {
    result = (int)a2;
    a2[7] = flt_104C5154;
    a2[8] = flt_104C5160;
    a2[9] = flt_104C1690;
  }
  return result;
}
// 104BC190: using guessed type int dword_104BC190;
// 104C15D0: using guessed type float flt_104C15D0;
// 104C15D4: using guessed type float flt_104C15D4;
// 104C15D8: using guessed type float flt_104C15D8;
// 104C15DC: using guessed type float flt_104C15DC;
// 104C15E0: using guessed type float flt_104C15E0;
// 104C15E4: using guessed type float flt_104C15E4;
// 104C15E8: using guessed type float flt_104C15E8;
// 104C15EC: using guessed type float flt_104C15EC;
// 104C15F0: using guessed type float flt_104C15F0;
// 104C1690: using guessed type float flt_104C1690;
// 104C5154: using guessed type float flt_104C5154;
// 104C5160: using guessed type float flt_104C5160;
