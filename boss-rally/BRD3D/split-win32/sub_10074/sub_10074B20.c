#include "types-win32.h"
//----- (10074B20) --------------------------------------------------------
float *__cdecl sub_10074B20(int a1, int a2, float *a3) {
  float *result; // eax
  int v5;        // esi
  double v6;     // st7
  int v7;        // [esp+1Ch] [ebp+Ch]

  v7 = 3;
  result = a3;
  do {
    v5 = 3;
    do {
        v6 = *(float *)((char *)result + a2 - (_DWORD)a3) - *result;
        ++result;
        --v5;
        *(float *)((char *)result + a1 - (_DWORD)a3 - 4) = v6;
    } while (v5);
    --v7;
  } while (v7);
  return result;
}
