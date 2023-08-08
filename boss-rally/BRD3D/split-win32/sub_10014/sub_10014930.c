#include "types-win32.h"
//----- (10014930) --------------------------------------------------------
_DWORD *sub_10014930() {
    _DWORD *result;   // eax
    int v1;           // ecx
    double v2;        // st7
    int *v3;          // eax
    int v4;           // ecx
    double v5;        // st7
    int *v6;          // eax
    int v7;           // [esp+Ch] [ebp-108h]
    int v8;           // [esp+Ch] [ebp-108h]
    char Buffer[256]; // [esp+14h] [ebp-100h] BYREF

    result = (_DWORD *)dword_10B501D8;
    if (dword_10B501D8) {
        if (!dword_100AA00C) {
            v1 = dword_100AA008;
            v2 = 0.0;
            if (dword_100AA008 > 0) {
                v3 = dword_10680758;
                do {
                    v7 = *v3++;
                    v2 = v2 + (double)v7;
                    --v1;
                } while (v1);
            }
            flt_100A6CF0 = (double)dword_100AA008 * 1000.0 / v2;
        }
        if (!dword_100B5424) {
            v4 = dword_100B5420;
            v5 = 0.0;
            if (dword_100B5420 > 0) {
                v6 = dword_10B4FFE8;
                do {
                    v8 = *v6++;
                    v5 = v5 + (double)v8;
                    --v4;
                } while (v4);
            }
            flt_100A6CF4 = (double)dword_100B5420 * 1000.0 / v5;
        }
        sprintf(Buffer, "%6.2f FPS", flt_100A6CF4);
        sub_100192F0(15);
        sub_10019270();
        result = sub_10019300((int)Buffer, g_Width / 2, g_Height - 10);
    }
    return result;
}
// 100A6CF0: using guessed type float flt_100A6CF0;
// 100A6CF4: using guessed type float flt_100A6CF4;
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
// 100AA008: using guessed type int dword_100AA008;
// 100AA00C: using guessed type int dword_100AA00C;
// 100B5420: using guessed type int dword_100B5420;
// 100B5424: using guessed type int dword_100B5424;
// 10B501D8: using guessed type int dword_10B501D8;
