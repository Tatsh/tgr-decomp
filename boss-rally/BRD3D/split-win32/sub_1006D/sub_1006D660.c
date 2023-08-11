#include "types-win32.h"
//----- (1006D660) --------------------------------------------------------
int __cdecl sub_1006D660(int a1, float *a2, int a3) {
  int v3;    // esi
  float *v4; // ecx
  double v6; // st7
  char v7;   // c0
  int v8;    // ecx
  int v9;    // eax
  int v10;   // esi
  int v12;   // edx
  int v13;   // eax
  int v14;   // ecx
  int v15;   // esi
  int v16;   // ebp
  int v17;   // edx
  int v19;   // [esp+10h] [ebp-10h]
  float v20; // [esp+14h] [ebp-Ch] BYREF
  float v21; // [esp+18h] [ebp-8h]
  float v22; // [esp+1Ch] [ebp-4h]
  int v23;   // [esp+28h] [ebp+8h]
  int v24;   // [esp+2Ch] [ebp+Ch]

  v3 = 3;
  v4 = a2;
  do {
    v6 = *v4;
    if (v7)
        v6 = -v6;
    *(float *)((char *)v4++ + (char *)&v20 - (char *)a2) = v6;
    --v3;
  } while (v3);
  if (v20 <= (double)v22)
    v8 = (v21 <= (double)v22) + 1;
  else
    v8 = v20 <= (double)v21;
  if (a2[v8] >= 0.0) {
    v9 = v8 + 2;
    v10 = (v8 + 1) % 3;
  } else {
    v9 = v8 + 1;
    v10 = (v8 + 2) % 3;
  }
  v12 = v9 % 3;
  v13 = 0;
  v14 = 4 * v10;
  v15 = a1;
  v19 = 0;
  v23 = v12;
  do {
    v16 = v13 + 1;
    v17 = a1 + 12 * ((v13 + 1) % 3);
    v24 = (*(float *)(a3 + v14) < (double)*(float *)(v17 + v14)) -
          (*(float *)(a3 + v14) < (double)*(float *)(v15 + v14));
    if (v24) {
        if (*(float *)(a3 + 4 * v23) < (double)*(float *)(v17 + 4 * v23) ==
            *(float *)(a3 + 4 * v23) < (double)*(float *)(v15 + 4 * v23)) {
            if (*(float *)(v15 + 4 * v23) <= (double)*(float *)(a3 + 4 * v23))
                v19 += v24;
        } else if ((*(float *)(v17 + v14) - *(float *)(v15 + v14)) *
                       (*(float *)(a3 + 4 * v23) - *(float *)(v15 + 4 * v23)) * (double)v24 >=
                   (*(float *)(a3 + v14) - *(float *)(v15 + v14)) *
                       (*(float *)(v17 + 4 * v23) - *(float *)(v15 + 4 * v23)) * (double)v24) {
            v19 += v24;
        }
    }
    ++v13;
    v15 += 12;
  } while (v16 < 3);
  return v19;
}
// 1006D687: variable 'v7' is possibly undefined
