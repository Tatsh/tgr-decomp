#include "../../types-win32.h"
//----- (10005130) --------------------------------------------------------
int __cdecl sub_10005130(float *a1)
{
  int result; // eax
  int v2; // esi

  if ( a1[30] >= 4188888.0 && flt_10220D68 < 4188888.0 )
  {
LABEL_3:
    qmemcpy(flt_10220CF0, a1, 0xA0u);
    return sub_10004C60(a1);
  }
  if ( ++dword_1022AF40 >= 3 )
  {
    if ( a1[32] < (double)flt_10220E60 )
      a1[32] = flt_10220E60;
    if ( a1[33] < (double)flt_10220E64 )
      a1[33] = flt_10220E64;
    if ( a1[34] < (double)flt_10220E68 )
      a1[34] = flt_10220E68;
    if ( a1[35] < (double)flt_10220E6C )
      a1[35] = flt_10220E6C;
    if ( a1[36] < (double)flt_10220E70 )
      a1[36] = flt_10220E70;
    if ( a1[37] < (double)flt_10220E74 )
      a1[37] = flt_10220E74;
    if ( a1[38] < (double)flt_10220E78 )
      a1[38] = flt_10220E78;
    flt_10220E78 = 0.0;
    flt_10220E74 = 0.0;
    ++dword_10094298;
    flt_10220E70 = 0.0;
    flt_10220E6C = 0.0;
    flt_10220E68 = 0.0;
    flt_10220E64 = 0.0;
    flt_10220E60 = 0.0;
    dword_1022AF40 = 0;
    if ( !(dword_10094298 % 4) )
      goto LABEL_3;
    v2 = sub_10004E50(a1, flt_10220CF0);
    np_sub_100053F0();
    np_sub_10004FC0();
    result = v2;
  }
  else
  {
    if ( flt_10220E60 < (double)a1[32] )
      flt_10220E60 = a1[32];
    if ( flt_10220E64 < (double)a1[33] )
      flt_10220E64 = a1[33];
    if ( flt_10220E68 < (double)a1[34] )
      flt_10220E68 = a1[34];
    if ( flt_10220E6C < (double)a1[35] )
      flt_10220E6C = a1[35];
    if ( flt_10220E70 < (double)a1[36] )
      flt_10220E70 = a1[36];
    if ( flt_10220E74 < (double)a1[37] )
      flt_10220E74 = a1[37];
    if ( flt_10220E78 < (double)a1[38] )
      flt_10220E78 = a1[38];
    result = 1;
  }
  return result;
}
// 10094298: using guessed type int dword_10094298;
// 10220D68: using guessed type float flt_10220D68;
// 10220E60: using guessed type float flt_10220E60;
// 10220E64: using guessed type float flt_10220E64;
// 10220E68: using guessed type float flt_10220E68;
// 10220E6C: using guessed type float flt_10220E6C;
// 10220E70: using guessed type float flt_10220E70;
// 10220E74: using guessed type float flt_10220E74;
// 10220E78: using guessed type float flt_10220E78;
// 1022AF40: using guessed type int dword_1022AF40;
