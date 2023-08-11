#include "types-win32.h"
//----- (10074AC0) --------------------------------------------------------
float *__cdecl sub_10074AC0(int a1, int a2, int a3) {
  float *v4;     // ecx
  int v5;        // ebx
  float *result; // eax
  int v7;        // esi
  double v8;     // st6
  double v9;     // st7

  v4 = (float *)(a2 + 4);
  v5 = 3;
  do {
    result = (float *)(a3 + 12);
    v7 = 3;
    do {
        v8 = result[3] * v4[1];
        v9 = *v4 * *result + *(result - 3) * *(v4 - 1);
        ++result;
        a1 += 4;
        --v7;
        *(float *)(a1 - 4) = v9 + v8;
    } while (v7);
    v4 += 3;
    --v5;
  } while (v5);
  return result;
}
