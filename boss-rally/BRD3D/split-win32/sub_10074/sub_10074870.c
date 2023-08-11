#include "types-win32.h"
//----- (10074870) --------------------------------------------------------
void __cdecl sub_10074870(int a1) {
  int v1;     // ecx
  int v3;     // edx
  int i;      // eax
  int v5;     // ebx
  int v6;     // eax
  double v7;  // st7
  double v8;  // st6
  double v9;  // st5
  double v10; // rt1
  double v11; // st5
  double v12; // st6
  double v13; // st7
  float v14;  // [esp+18h] [ebp+4h]
  float v15;  // [esp+18h] [ebp+4h]

  v1 = 12;
  v3 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 412) = 0;
  *(_DWORD *)(a1 + 452) = 0;
  *(_DWORD *)(a1 + 448) = 1043475726;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 456) = 1056964608;
  do {
    for (i = 0; i < 3; ++i) {
        v5 = i + v1;
        if (v3 == i)
            *(_DWORD *)(a1 + 4 * v5) = 1065353216;
        else
            *(_DWORD *)(a1 + 4 * v5) = 0;
    }
    v1 += 3;
    ++v3;
  } while (v1 < 21);
  v6 = *(_DWORD *)(a1 + 28);
  if (v6 >= 0 && v6 <= 1) {
    v7 = *(float *)(a1 + 32) * *(float *)(a1 + 32);
    v14 = *(float *)(a1 + 40) * *(float *)(a1 + 40);
    v8 = v14;
    v9 = v7 + v14;
    v15 = *(float *)(a1 + 36) * *(float *)(a1 + 36);
    v10 = v9;
    v11 = (v8 + v15) * *(float *)(a1 + 44);
    v12 = v10 * *(float *)(a1 + 44) * 0.083333336;
    v13 = (v7 + v15) * *(float *)(a1 + 44) * 0.083333336;
    *(float *)(a1 + 48) = v11 * 0.083333336;
    *(float *)(a1 + 64) = v12;
    *(float *)(a1 + 80) = v13;
    nullsub_2();
  }
  if (*(_DWORD *)(a1 + 28) != 2) {
    *(float *)(a1 + 84) = 1.0 / *(float *)(a1 + 48);
    *(float *)(a1 + 100) = 1.0 / *(float *)(a1 + 64);
    *(float *)(a1 + 116) = 1.0 / *(float *)(a1 + 80);
  }
  *(_DWORD *)(a1 + 468) = 0;
  *(_DWORD *)(a1 + 472) = 0;
}
