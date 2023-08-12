#include "types-win32.h"
//----- (1006F540) --------------------------------------------------------
int __cdecl sub_1006F540(int a1) {
  float *v1;  // edx
  int i;      // ebp
  int v3;     // ecx
  int v4;     // eax
  __int16 v5; // di
  double v6;  // st7
  double v7;  // st7
  double v8;  // st6
  int result; // eax

  v1 = *(float **)(a1 + 24);
  for (i = 0; i < 4; ++i) {
    v1[3] = 0.0;
    v1[2] = 0.0;
    if (i) {
      if (i == 1) {
        v3 = *(_DWORD *)(a1 + 8);
      } else if (i == 2) {
        v3 = *(_DWORD *)(a1 + 12);
      } else {
        v3 = *(_DWORD *)(a1 + 16);
      }
    } else {
      v3 = *(_DWORD *)(a1 + 4);
    }
    v4 = *(_DWORD *)(v3 + 436);
    v5 = *(_WORD *)(v3 + 436);
    v6 = *(float *)(v3 + 472);
    if (v4 < 100)
      *(_DWORD *)(v3 + 436) = v4 + 1;
    if (v6 <= -0.3999000134110451) {
      v6 = -0.30000001;
      *(_DWORD *)(v3 + 436) = 0;
    }
    if (v6 > 0.0)
      v6 = 0.0;
    v7 = v6 - -0.30000001;
    if (v7 < 0.0)
      v7 = 0.0;
    if (v7 == 0.0) {
      v8 = 0.0;
    } else if (v7 <= 0.0) {
      v8 = -1.0;
    } else {
      v8 = 1.0;
    }
    v1[4] = v7 * v7 * v8 * *(float *)(a1 + 440);
    result = *(_DWORD *)(v3 + 436);
    v1 = *(float **)v1;
    if (result) {
      if (!v5)
        *(_BYTE *)(a1 + 520) = 0x80;
    }
  }
  return result;
}
