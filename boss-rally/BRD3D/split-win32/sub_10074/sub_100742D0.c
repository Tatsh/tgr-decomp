#include "types-win32.h"
//----- (100742D0) --------------------------------------------------------
float *__cdecl sub_100742D0(float *a1) {
  float *result; // eax
  double v2;     // st7
  double v3;     // st1
  double v4;     // st5
  double v5;     // st4
  double v6;     // st6
  double v7;     // st3
  double v8;     // st7
  float v9;      // [esp+0h] [ebp-Ch]
  float v10;     // [esp+4h] [ebp-8h]
  float v11;     // [esp+8h] [ebp-4h]

  result = a1;
  v2 = a1[11] * 0.5;
  v9 = a1[10] * 0.5;
  v10 = v2;
  v3 = a1[12] * 0.5;
  v11 = v3;
  v4 = v9 * a1[8] + v11 * a1[6];
  v5 = v10 * a1[7];
  v6 = v3 * a1[7] + v10 * a1[6] - v9 * a1[9];
  v7 = -(v9 * a1[7]) - v2 * a1[8] - v11 * a1[9];
  v8 = v10 * a1[9] + v9 * a1[6] - v11 * a1[8];
  a1[13] = v7;
  a1[14] = v8;
  a1[15] = v6;
  a1[16] = v4 - v5;
  return result;
}
