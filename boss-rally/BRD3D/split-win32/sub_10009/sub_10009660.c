#include "types-win32.h"
//----- (10009660) --------------------------------------------------------
char *__cdecl sub_10009660(_WORD *arg0, unsigned __int8 *a2, int a3, int a1, int *a5) {
    _WORD *v5;            // ebp
    DDPIXELFORMAT *v6;    // esi
    int v7;               // ebx
    unsigned __int8 v9;   // dl
    unsigned __int8 *v10; // edi
    unsigned __int8 v11;  // al
    unsigned __int8 v12;  // al
    int v13;              // eax
    int v14;              // eax
    int v15;              // edx
    int v16;              // eax
    int v17;              // edx
    int v18;              // eax
    int v19;              // edx
    int v20;              // eax
    unsigned int v22;     // [esp+Ch] [ebp-18h]
    int v23;              // [esp+10h] [ebp-14h]
    int v24;              // [esp+14h] [ebp-10h]
    int v25;              // [esp+18h] [ebp-Ch]
    DWORD v26;            // [esp+1Ch] [ebp-8h]
    unsigned __int8 v28;  // [esp+28h] [ebp+4h]
    unsigned __int8 v29;  // [esp+2Ch] [ebp+8h]
    unsigned __int8 v30;  // [esp+30h] [ebp+Ch]

    v5 = arg0;
    v6 = GetDDPixelFormatPtr(a1);
    v26 = v6->dwRGBBitCount >> 3;
    v23 = math_MinBits(v6->dwRBitMask) - 8;
    v24 = math_MinBits(v6->dwGBitMask) - 8;
    v7 = math_MinBits(v6->dwBBitMask) - 8;
    v25 = math_MinBits(v6->dwRGBAlphaBitMask) - 8;
    *a5 = 1 << math_PopCount(v6->dwGBitMask);
    if (a3 > 0) {
        v22 = (unsigned int)(a3 + 3) >> 2;
        do {
            v9 = a2[1];
            v28 = *a2;
            v10 = a2 + 2;
            v11 = *v10++;
            v30 = v11;
            v12 = *v10;
            a2 = v10 + 1;
            v29 = v12;
            if (v12 < 0x80u) {
                v20 = *a5;
            } else {
                if (v23 < 0)
                    v13 = v28 >> -(char)v23;
                else
                    v13 = v28 << v23;
                v14 = v6->dwRBitMask & v13;
                if (v24 < 0)
                    v15 = v9 >> -(char)v24;
                else
                    v15 = v9 << v24;
                v16 = v6->dwGBitMask & v15 | v14;
                if (v7 < 0)
                    v17 = v30 >> -(char)v7;
                else
                    v17 = v30 << v7;
                v18 = v6->dwBBitMask & v17 | v16;
                if (v25 < 0)
                    v19 = v6->dwRGBAlphaBitMask & (v29 >> -(char)v25);
                else
                    v19 = v6->dwRGBAlphaBitMask & (v29 << v25);
                v20 = v19 | v18;
            }
            switch (v26) {
            case 1u:
                *(_BYTE *)v5 = v20;
                v5 = (_WORD *)((char *)v5 + 1);
                break;
            case 2u:
                *v5++ = v20;
                break;
            case 4u:
                *(_DWORD *)v5 = v20;
                v5 += 2;
                break;
            }
            --v22;
        } while (v22);
    }
    return (char *)((char *)v5 - (char *)arg0);
}
