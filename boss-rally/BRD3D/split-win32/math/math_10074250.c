#include "types-win32.h"
//----- (10074250) --------------------------------------------------------
void __cdecl math_10074250(float *a1) {
  long double v2; // st6
  long double v3; // rt1
  double v4;      // st6
  float v5;       // [esp+0h] [ebp-Ch]
  float v6;       // [esp+10h] [ebp+4h]

  v5 = a1[1] * a1[1] + a1[2] * a1[2] + *a1 * *a1;
  v2 = 1.0 / sqrt_(v5);
  v6 = v2;
  v3 = v2 * a1[1];
  v4 = v6 * a1[2];
  *a1 = *a1 * v6;
  a1[1] = v3;
  a1[2] = v4;
}
