#include "types-n64.h"
//----- (80221864) --------------------------------------------------------
void __fastcall sub_80221864(int a1) {
    float v2;  // $f0
    float v3;  // $f2
    float v4;  // $f12
    float *v5; // [sp+20h] [-20h]

    *(_DWORD *)(a1 + 7656) = a1 + 7664;
    *(_DWORD *)(a1 + 7660) = a1 + 7664;
    v5 = (float *)(a1 + 7780);
    sub_8022494C((float *)(a1 + 7780), (float *)(a1 + 48), (float *)(a1 + 32), 4.0);
    sub_8022483C(v5, (float *)a1);
    v2 = *(float *)(a1 + 7780);
    v3 = *(float *)(a1 + 7784);
    v4 = *(float *)(a1 + 7788);
    *(float *)(a1 + 7916) = v2;
    *(float *)(a1 + 8096) = v2;
    *(float *)(a1 + 8116) = v2;
    *(float *)(a1 + 7920) = v3;
    *(float *)(a1 + 8100) = v3;
    *(float *)(a1 + 8120) = v3;
    *(float *)(a1 + 7924) = v4;
    *(float *)(a1 + 8104) = v4;
    *(float *)(a1 + 8124) = v4;
    *(float *)(a1 + 8108) = 0.0;
    *(float *)(a1 + 8080) = 2.0;
}
// 8026FF18: using guessed type int dword_8026FF18;
