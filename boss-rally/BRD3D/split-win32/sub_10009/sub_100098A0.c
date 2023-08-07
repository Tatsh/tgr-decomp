#include "../../types-win32.h"
//----- (100098A0) --------------------------------------------------------
char *__cdecl sub_100098A0(_WORD *out_a1, unsigned __int8 *out_a2, int a3, int a4) {
    DDPIXELFORMAT *pixelFormat; // edi
    int b_bitCount;             // ebx
    int alpha_bitCount;         // eax
    unsigned __int8 out_a2_i1;  // dl
    unsigned __int8 *v9;        // ebp
    unsigned __int8 v10;        // dl
    int v11;                    // edx
    int v12;                    // edx
    int v13;                    // esi
    int v14;                    // edx
    int v15;                    // esi
    int v16;                    // edx
    int v17;                    // esi
    int v18;                    // edx
    _WORD *v19;                 // ecx
    unsigned __int8 v21;        // [esp+8h] [ebp-18h]
    unsigned int v22;           // [esp+Ch] [ebp-14h]
    int r_bitCount;             // [esp+10h] [ebp-10h]
    int g_bitCount;             // [esp+14h] [ebp-Ch]
    DWORD v25;                  // [esp+18h] [ebp-8h]
    char *out_a1_1;             // [esp+1Ch] [ebp-4h]
    unsigned __int8 out_a2a;    // [esp+28h] [ebp+8h]
    unsigned __int8 v28;        // [esp+2Ch] [ebp+Ch]
    unsigned __int8 a1a;        // [esp+30h] [ebp+10h]

    out_a1_1 = (char *)out_a1;
    pixelFormat = GetDDPixelFormatPtr(a4);
    v25 = pixelFormat->dwRGBBitCount >> 3;
    r_bitCount = CountBits(pixelFormat->dwRBitMask) - 8;
    g_bitCount = CountBits(pixelFormat->dwGBitMask) - 8;
    b_bitCount = CountBits(pixelFormat->dwBBitMask) - 8;
    alpha_bitCount = CountBits(pixelFormat->dwRGBAlphaBitMask) - 8;
    if (a3 > 0) {
        v22 = (unsigned int)(a3 + 3) >> 2;
        while (1) {
            out_a2_i1 = out_a2[1];
            a1a = *out_a2;
            v9 = out_a2 + 2;
            v28 = out_a2_i1;
            v10 = v9[1];
            out_a2a = *v9;
            out_a2 = v9 + 2;
            v21 = v10;
            v11 = r_bitCount < 0 ? a1a >> -(char)r_bitCount : a1a << r_bitCount;
            v12 = pixelFormat->dwRBitMask & v11;
            v13 = g_bitCount < 0 ? v28 >> -(char)g_bitCount : v28 << g_bitCount;
            v14 = pixelFormat->dwGBitMask & v13 | v12;
            v15 = b_bitCount < 0 ? out_a2a >> -(char)b_bitCount : out_a2a << b_bitCount;
            v16 = pixelFormat->dwBBitMask & v15 | v14;
            v17 = alpha_bitCount < 0 ? v21 >> -(char)alpha_bitCount : v21 << alpha_bitCount;
            v18 = pixelFormat->dwRGBAlphaBitMask & v17 | v16;
            if (v25 == 1)
                break;
            if (v25 == 2) {
                *out_a1 = v18;
                v19 = out_a1 + 1;
                goto LABEL_21;
            }
            if (v25 == 4) {
                *(_DWORD *)out_a1 = v18;
                v19 = out_a1 + 2;
                goto LABEL_21;
            }
        LABEL_22:
            if (!--v22)
                return (char *)((char *)out_a1 - out_a1_1);
        }
        *(_BYTE *)out_a1 = v18;
        v19 = (_WORD *)((char *)out_a1 + 1);
    LABEL_21:
        out_a1 = v19;
        goto LABEL_22;
    }
    return (char *)((char *)out_a1 - out_a1_1);
}
