#include "types-win32.h"
//----- (1006AFF0) --------------------------------------------------------
float *__cdecl sub_1006AFF0(float *a1, int a2) {
  float *v2;     // edi
  float *v3;     // ebp
  double v4;     // st7
  double v5;     // st6
  float *result; // eax
  int v7;        // ecx
  int v8;        // edx
  double v9;     // st7
  double v10;    // st6
  float v11;     // [esp+8h] [ebp-3Ch] BYREF
  float v12;     // [esp+Ch] [ebp-38h]
  float v13;     // [esp+10h] [ebp-34h]
  float v14;     // [esp+14h] [ebp-30h] BYREF
  float v15;     // [esp+18h] [ebp-2Ch]
  float v16;     // [esp+1Ch] [ebp-28h]
  float v17;     // [esp+20h] [ebp-24h] BYREF
  float v18;     // [esp+24h] [ebp-20h]
  float v19;     // [esp+28h] [ebp-1Ch]
  int v20[3];    // [esp+2Ch] [ebp-18h] BYREF
  int v21[3];    // [esp+38h] [ebp-Ch] BYREF

  v2 = *(float **)(a2 + 24);
  if (v2) {
    v3 = a1 + 47;
    do {
        if (!*((_DWORD *)v2 + 1))
            sub_10074720(&v11, v3, v2 + 2);
        if (*((_DWORD *)v2 + 1) == 1) {
            v11 = v2[2];
            v12 = v2[3];
            v13 = v2[4];
        }
        *(float *)v20 = v11;
        *(float *)&v20[1] = v12;
        v20[2] = 0;
        sub_10074770(&v17, (int)v3, (float *)v20);
        v4 = v12 + *(float *)(a2 + 256);
        v5 = v13 + *(float *)(a2 + 260);
        *(float *)(a2 + 252) = v11 + *(float *)(a2 + 252);
        result = *(float **)(a2 + 436);
        *(float *)(a2 + 256) = v4;
        *(float *)(a2 + 260) = v5;
        if (result) {
            v7 = *(_DWORD *)(a2 + 240);
            v8 = *(_DWORD *)(a2 + 244);
            v21[0] = *(_DWORD *)(a2 + 236);
            v21[1] = v7;
            v21[2] = v8;
            result = sub_10074770(&v14, (int)v3, (float *)v21);
            v9 = v16 * v17 - v14 * v19 + a1[67];
            v10 = v14 * v18 - v15 * v17 + a1[68];
            a1[66] = v15 * v19 - v16 * v18 + a1[66];
            a1[67] = v9;
            a1[68] = v10;
        }
        v2 = *(float **)v2;
    } while (v2);
  }
  return result;
}
