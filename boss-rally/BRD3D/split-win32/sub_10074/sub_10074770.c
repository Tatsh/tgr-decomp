#include "types-win32.h"
//----- (10074770) --------------------------------------------------------
float *__cdecl sub_10074770(float *a1, int a2, float *a3) {
  float *result; // eax
  int v4;        // ebp
  float *v5;     // edx
  float *v6;     // ecx
  int v7;        // esi
  double v8;     // st7

  result = a1;
  v4 = 3;
  do {
    *result = 0.0;
    v5 = a3;
    v6 = (float *)((char *)result + a2 - (_DWORD)a1);
    v7 = 3;
    do {
        v8 = *v6 * *v5;
        v6 += 4;
        ++v5;
        --v7;
        *result = v8 + *result;
    } while (v7);
    ++result;
    --v4;
  } while (v4);
  return result;
}
