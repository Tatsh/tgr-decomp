#include "types-win32.h"
//----- (1003AD10) --------------------------------------------------------
int __cdecl sub_1003AD10(int a1, float a2) {
  int result; // eax
  double v3;  // st7
  double v4;  // st6

  result = a1;
  v3 = a2 * *(float *)(a1 + 4);
  v4 = a2 * *(float *)(a1 + 8);
  *(float *)a1 = a2 * *(float *)a1;
  *(float *)(a1 + 4) = v3;
  *(float *)(a1 + 8) = v4;
  return result;
}
