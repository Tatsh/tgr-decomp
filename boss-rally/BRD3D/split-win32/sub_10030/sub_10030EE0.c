#include "types-win32.h"
//----- (10030EE0) --------------------------------------------------------
float *__cdecl sub_10030EE0(int a1, float a2, float a3, float a4, float a5) {
  float *result;   // eax
  int *v6;         // esi
  float *v7;       // eax
  int v8;          // edi
  int *v9;         // ecx
  int v10;         // edx
  int v11;         // ebx
  long double v12; // rt1
  int v13;         // [esp+0h] [ebp-CCh]
  long double v14; // [esp+4h] [ebp-C8h]
  int v15[16];     // [esp+Ch] [ebp-C0h] BYREF
  int v16[16];     // [esp+4Ch] [ebp-80h] BYREF
  float v17[16];   // [esp+8Ch] [ebp-40h] BYREF

  if (a3 == 0.0 && a4 == 0.0 && a5 == 0.0) {
    result = (float *)a1;
    *(_DWORD *)a1 = 1065353216;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = 1065353216;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 1065353216;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 60) = 1065353216;
  } else {
    sub_100309A0((int)v16, a3, a4, a5, 0.0, 0.0, 0.0, a4, a5, a3);
    v16[3] = 0;
    v16[7] = 0;
    v16[11] = 0;
    v16[12] = 0;
    v16[13] = 0;
    v16[14] = 0;
    v16[15] = 1065353216;
    v6 = v16;
    v7 = v17;
    v8 = 4;
    do {
      v9 = v6;
      v10 = 4;
      do {
        v11 = *v9;
        v9 += 4;
        *(_DWORD *)v7++ = v11;
        --v10;
      } while (v10);
      ++v6;
      --v8;
    } while (v8);
    v14 = a2 * 0.0174532925199433;
    v15[2] = 0;
    v15[3] = 0;
    v15[6] = 0;
    v15[7] = 0;
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 1065353216;
    v15[11] = 0;
    v15[12] = 0;
    v15[13] = 0;
    v15[14] = 0;
    v15[15] = 1065353216;
    v12 = sin(v14);
    *(float *)&v13 = v12;
    *(float *)&v14 = cos(v14);
    v15[1] = v13;
    *(float *)&v15[4] = -v12;
    v15[0] = LODWORD(v14);
    v15[5] = LODWORD(v14);
    sub_100306C0((float *)v16, (float *)v15, (float *)a1);
    result = sub_100306C0((float *)a1, v17, (float *)a1);
  }
  return result;
}
