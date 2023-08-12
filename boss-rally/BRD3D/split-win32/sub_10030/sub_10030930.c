#include "types-win32.h"
//----- (10030930) --------------------------------------------------------
WORD *__cdecl sub_10030930(float *a1, WORD *a2, float a3, float a4, float a5, float a7) {
  long double v6; // st7
  long double v7; // st6
  double v8;      // st7
  float v9;       // eax
  WORD *result;   // eax
  float a2a;      // [esp+0h] [ebp-1Ch]
  float a4a;      // [esp+8h] [ebp-14h]
  float a3a;      // [esp+30h] [ebp+14h]
  float a3b;      // [esp+30h] [ebp+14h]

  v6 = tan(a3 * 0.008726646259971648) * a5;
  a3a = v6;
  v7 = v6 * a4;
  v8 = a3a;
  v9 = a3a;
  a3b = v7;
  a4a = -v8;
  a2a = -a3b;
  maybe_guFrustumF(a1, a2a, a3b, a4a, v9, a5, a7);
  result = a2;
  *a2 = 1;
  return result;
}
