#include "../../types-n64.h"
//----- (80239F28) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_80239F28(int a1, int a2)
{
  int v4; // $v0
  float *v5; // $a3
  int v6; // $f16
  int v7; // $t7
  int v8; // $s0
  int *result; // $v0
  float *v10; // [sp+24h] [-1Ch]
  float *v11; // [sp+28h] [-18h]
  int v12; // [sp+3Ch] [-4h]

  v12 = 8 * a2 - 1;
  v11 = &flt_803634F8[3 * a1];
  v10 = &v11[-3 * a2];
  *v11 = (float)((float)(sub_80225EE4() & v12) + (float)((float)(*v10 + v11[3 * a2]) * 0.5)) - (float)((float)v12 * 0.5);
  v4 = sub_80225EE4();
  v5 = &v11[3 * a2];
  v6 = v4 & v12;
  v7 = a2 >> 1;
  v8 = v7;
  result = &dword_8028C81C;
  v11[1] = (float)((float)v6 + (float)((float)(v10[1] + v5[1]) * 0.5)) - (float)((float)v12 * 0.5);
  v11[2] = (float)(v5[2] + v10[2]) * 0.5;
  if ( v7 )
  {
    dword_8028C81C = 4;
    sub_80239F28(a1 - v7, v7);
    sub_80239F28(a1 + v8, v8);
    result = &dword_8028C81C;
    dword_8028C81C = -4;
  }
  return result;
}
// 8023A0A4: write access to const memory at 8028C81C has been detected
// 8023A084: write access to const memory at 8028C81C has been detected
// 8028C81C: using guessed type int dword_8028C81C;
// 803634F8: using guessed type float flt_803634F8[];
