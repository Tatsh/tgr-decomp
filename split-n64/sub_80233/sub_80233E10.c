#include "../../types-n64.h"
//----- (80233E10) --------------------------------------------------------
__int64 __fastcall sub_80233E10(float *a1, int a2, __int64 a3)
{
  __int64 result; // $v1
  float v4; // $f14
  float v5; // $f0
  float v6; // [sp+48h] [-20h]
  float v7; // [sp+4Ch] [-1Ch]
  float v8; // [sp+58h] [-10h] BYREF
  float v9; // [sp+5Ch] [-Ch]
  float v10; // [sp+64h] [-4h]

  sub_80224DDC(&v8, a1, &flt_8031AA50);
  result = a3;
  if ( v10 > 0.001 || v10 < -0.001 )
  {
    v4 = 1.0 / v10;
    v8 = v8 * v4;
    v5 = (float)a2 * v4;
    v6 = v8 + v5;
    v8 = v8 - v5;
    v7 = (float)(v9 * v4) + v5;
    v9 = (float)(v9 * v4) - v5;
    *(_WORD *)HIDWORD(a3) = (int)(float)(v8 * (float)-535412576) - 21972;
    *(_WORD *)(HIDWORD(a3) + 2) = 23260 - (int)(float)(v9 * (float)-442487956);
    *(_WORD *)a3 = (int)(float)(v6 * (float)-535412576) - 21972;
    *(_WORD *)(a3 + 2) = 23260 - (int)(float)(v7 * (float)-442487956);
  }
  return result;
}
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
