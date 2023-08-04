#include "../../types-n64.h"
//----- (80221E0C) --------------------------------------------------------
int __fastcall sub_80221E0C(int a1)
{
  float v2; // $f8
  float v3; // $f16
  float v4; // $f4
  float v5; // $a1
  int result; // $v0
  float v7; // $f4
  float v8; // $f8
  float v9; // $f18
  float v10[16]; // [sp+50h] [-C0h] BYREF
  float v11[16]; // [sp+90h] [-80h] BYREF
  float v12[16]; // [sp+D0h] [-40h] BYREF

  sub_80260BC0(v11, *(float *)(a1 + 796), 1.0, 0.0, 0.0);
  sub_80260940(v11, (float *)(a1 + 516), a1);
  v2 = *(float *)(a1 + 1612);
  v3 = *(float *)(a1 + 2132);
  v4 = *(float *)(a1 + 2652);
  v5 = *(float *)(a1 + 1316);
  *(float *)(a1 + 1092) = *(float *)(a1 + 1092) + 0.25400001;
  *(float *)(a1 + 1612) = v2 + 0.25400001;
  *(float *)(a1 + 2132) = v3 + 0.25400001;
  *(float *)(a1 + 2652) = v4 + 0.25400001;
  sub_80260BC0(v11, v5, 0.0, 1.0, 0.0);
  sub_80260940(v11, (float *)(a1 + 516), a1 + 192);
  sub_802587E8((float *)(a1 + 240), (float *)(a1 + 516), (float *)(a1 + 1084));
  sub_80260BC0(v11, *(float *)(a1 + 2356), 0.0, 1.0, 0.0);
  sub_80260940(v11, (float *)(a1 + 516), a1 + 256);
  sub_802587E8((float *)(a1 + 304), (float *)(a1 + 516), (float *)(a1 + 2124));
  sub_80260BC0(v12, *(float *)(a1 + 1836), 0.0, 1.0, 0.0);
  sub_80260BC0(v10, *(float *)(a1 + 1816) * 114.59155, 0.0, 0.0, 1.0);
  sub_80260940(v12, v10, (int)v11);
  sub_80260940(v11, (float *)(a1 + 516), a1 + 128);
  sub_802587E8((float *)(a1 + 176), (float *)(a1 + 516), (float *)(a1 + 1604));
  sub_80260BC0(v12, *(float *)(a1 + 2876), 0.0, 1.0, 0.0);
  sub_80260BC0(v10, *(float *)(a1 + 2856) * 114.59155, 0.0, 0.0, 1.0);
  sub_80260940(v12, v10, (int)v11);
  sub_80260940(v11, (float *)(a1 + 516), a1 + 64);
  result = sub_802587E8((float *)(a1 + 112), (float *)(a1 + 516), (float *)(a1 + 2644));
  v7 = *(float *)(a1 + 2132);
  v8 = *(float *)(a1 + 2652);
  v9 = *(float *)(a1 + 1612) - 0.25400001;
  *(float *)(a1 + 1092) = *(float *)(a1 + 1092) - 0.25400001;
  *(float *)(a1 + 1612) = v9;
  *(float *)(a1 + 2132) = v7 - 0.25400001;
  *(float *)(a1 + 2652) = v8 - 0.25400001;
  return result;
}
