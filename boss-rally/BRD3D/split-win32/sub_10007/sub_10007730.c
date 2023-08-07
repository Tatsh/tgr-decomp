#include "../../types-win32.h"
//----- (10007730) --------------------------------------------------------
int __cdecl sub_10007730(int a1, int a2) {
    double v2;  // st7
    double v3;  // st7
    double v4;  // st7
    double v5;  // st7
    int result; // eax

    *(float *)a1 = mult_neg_1_32_32_32(*(_WORD *)a2);
    *(float *)(a1 + 4) = mult_neg_1_32_32_32(*(_WORD *)(a2 + 2));
    *(float *)(a1 + 8) = mult_neg_1_32_32_32(*(_WORD *)(a2 + 4));
    *(float *)(a1 + 12) = mult_neg_1_32_32_32(*(_WORD *)(a2 + 6));
    *(float *)(a1 + 16) = sub_10007310(*(_DWORD *)(a2 + 8) & 0xFFFFFF);
    *(float *)(a1 + 20) = sub_10007310(*(_DWORD *)(a2 + 12) & 0xFFFFFF);
    *(float *)(a1 + 24) = mult_1_128(*(_WORD *)(a2 + 16));
    *(float *)(a1 + 52) = mult_1_8(*(_BYTE *)(a2 + 18));
    *(float *)(a1 + 56) = sub_10007250(*(_BYTE *)(a2 + 19) & 0x3F);
    *(float *)(a1 + 128) = sub_100072E0((*(char *)(a2 + 19) >> 6) & 3);
    v2 = sub_100072A0(*(_BYTE *)(a2 + 11));
    *(float *)(a1 + 64) = v2;
    *(float *)(a1 + 60) = v2;
    v3 = v2 - -35.0;
    if (v3 >= 360.0)
        v3 = v3 - 360.0;
    *(float *)(a1 + 72) = v3;
    *(float *)(a1 + 68) = v3;
    *(float *)(a1 + 76) = (float)(*(_BYTE *)(a2 + 20) >> 7);
    *(float *)(a1 + 92) = (float)((*(_BYTE *)(a2 + 20) >> 4) & 7);
    *(float *)(a1 + 80) = (float)((*(_BYTE *)(a2 + 20) & 8) != 0);
    *(float *)(a1 + 96) = (float)(*(_BYTE *)(a2 + 20) & 7);
    *(float *)(a1 + 84) = (float)(*(_BYTE *)(a2 + 21) >> 7);
    *(float *)(a1 + 100) = (float)((*(_BYTE *)(a2 + 21) >> 4) & 7);
    *(float *)(a1 + 88) = (float)((*(_BYTE *)(a2 + 21) & 8) != 0);
    *(float *)(a1 + 104) = (float)(*(_BYTE *)(a2 + 21) & 7);
    if ((*(_BYTE *)(a2 + 8) & 1) != 0)
        *(_DWORD *)(a1 + 108) = 1124073472;
    else
        *(_DWORD *)(a1 + 108) = 0;
    if ((*(_BYTE *)(a2 + 12) & 2) != 0)
        v4 = 1.0;
    else
        v4 = 0.0;
    *(float *)(a1 + 112) = v4;
    if ((*(_BYTE *)(a2 + 12) & 1) != 0)
        v5 = 1.0;
    else
        v5 = 0.0;
    *(float *)(a1 + 116) = v5;
    *(float *)(a1 + 124) = sub_100072C0(*(_BYTE *)(a2 + 15) & 0x3F);
    *(float *)(a1 + 132) = sub_100072E0(*(_BYTE *)(a2 + 15) >> 6);
    if ((*(_BYTE *)(a2 + 8) & 2) != 0) {
        result = 1124073472;
        *(_DWORD *)(a1 + 136) = 1124073472;
    } else {
        *(_DWORD *)(a1 + 136) = 0;
        result = 1124073472;
    }
    if ((*(_BYTE *)a2 & 1) != 0)
        *(_DWORD *)(a1 + 140) = 1124073472;
    else
        *(_DWORD *)(a1 + 140) = 0;
    if ((*(_BYTE *)(a2 + 2) & 1) != 0)
        *(_DWORD *)(a1 + 144) = 1124073472;
    else
        *(_DWORD *)(a1 + 144) = 0;
    if ((*(_BYTE *)(a2 + 4) & 1) != 0)
        *(_DWORD *)(a1 + 148) = 1124073472;
    else
        *(_DWORD *)(a1 + 148) = 0;
    if ((*(_BYTE *)(a2 + 6) & 1) != 0)
        *(_DWORD *)(a1 + 152) = 1124073472;
    else
        *(_DWORD *)(a1 + 152) = 0;
    if ((*(_BYTE *)(a2 + 8) & 4) != 0)
        *(float *)(a1 + 156) = 128.0;
    else
        *(float *)(a1 + 156) = 0.0;
    return result;
}
// 100072E0: using guessed type double __cdecl sub_100072E0(char);
