#include "types-win32.h"
//----- (10023CC0) --------------------------------------------------------
_DWORD *__cdecl sub_10023CC0(_DWORD *a1) {
    float *v1;  // esi
    double v2;  // st6
    double v3;  // st7
    double v4;  // st7
    int v5;     // eax
    int *v6;    // ecx
    int v7;     // esi
    _DWORD *v8; // edx
    float *v9;  // edi
    float *v10; // ebx
    float *v11; // esi
    int v12;    // ebp
    int v13;    // ecx
    double v14; // st6
    double v15; // st7
    double v16; // st5
    double v17; // st4
    double v18; // st6
    float v20;  // [esp+18h] [ebp-Ch]
    float v21;  // [esp+1Ch] [ebp-8h]
    float v22;  // [esp+20h] [ebp-4h]
    float v23;  // [esp+20h] [ebp-4h]
    float v24;  // [esp+20h] [ebp-4h]
    float v25;  // [esp+20h] [ebp-4h]
    float v26;  // [esp+20h] [ebp-4h]
    float v27;  // [esp+20h] [ebp-4h]
    float v28;  // [esp+20h] [ebp-4h]
    float v29;  // [esp+20h] [ebp-4h]

    if (!dword_104C5180) {
        if (dword_104BC190) {
            if (dword_100A79DC)
                v1 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
            else
                v1 = 0;
            v22 = (float)LOBYTE(dword_104BBE38[0]);
            v2 = v22;
            v23 = (float)BYTE1(dword_104BBE38[0]);
            v3 = v23;
            v24 = (float)BYTE2(dword_104BBE38[0]);
            flt_104C15D0 = v2 * 0.0039215689;
            flt_104C15D4 = v3 * 0.0039215689;
            flt_104C15D8 = v24 * 0.0039215689;
            v20 = (float)byte_104BBE42;
            v25 = (float)byte_104BBE40;
            v21 = (float)byte_104BBE41;
            flt_104C15DC = (*v1 * v25 + v1[2] * v20 + v1[1] * v21) / 128.0;
            flt_104C15E0 = (v1[4] * v25 + v1[6] * v20 + v1[5] * v21) / 128.0;
            flt_104C15E4 = (v1[10] * v20 + v1[9] * v21 + v1[8] * v25) / 128.0;
            sub_1003AE50(&flt_104C15DC);
            v26 = (float)(unsigned __int8)dword_104BBE48;
            flt_104C15E8 = v26 * 0.0039215689;
            v27 = (float)BYTE1(dword_104BBE48);
            v4 = v27;
            v28 = (float)BYTE2(dword_104BBE48);
            flt_104C15EC = v4 * 0.0039215689;
            flt_104C15F0 = v28 * 0.0039215689;
        }
        dword_104C5180 = 1;
    }
    if (gIndexedPrimitiveIndexCount) {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                   D3DPT_TRIANGLELIST,
                                                   D3DVT_TLVERTEX,
                                                   &gVertices,
                                                   gVertexCount,
                                                   &g_indexedPrimitiveIndices,
                                                   gIndexedPrimitiveIndexCount,
                                                   12);
        v5 = 0;
        if (dword_104C5190 > 0) {
            v6 = dword_104C0BC0;
            do {
                v7 = *v6;
                ++v5;
                ++v6;
                *(_DWORD *)(v7 + 104) = -1;
            } while (v5 < dword_104C5190);
        }
        gIndexedPrimitiveIndexCount = 0;
        gVertexCount = 0;
        dword_104C5190 = 0;
    }
    v8 = a1;
    v9 = (float *)a1[1];
    v10 = &flt_104C16D0[27 * (unsigned __int8)BYTE2(*a1)];
    if ((unsigned __int16)*a1 >> 10) {
        v11 = v10 + 22;
        v12 = (unsigned __int16)*a1 >> 10;
        do {
            *(v11 - 5) =
                flt_104C4D20 * v9[1] + flt_104C4D30 * v9[2] + *v9 * flt_104C4D10 + flt_104C4D40;
            *(v11 - 4) =
                flt_104C4D24 * v9[1] + flt_104C4D34 * v9[2] + *v9 * flt_104C4D14 + flt_104C4D44;
            *(v11 - 3) =
                flt_104C4D28 * v9[1] + flt_104C4D38 * v9[2] + *v9 * flt_104C4D18 + flt_104C4D48;
            *v11 = flt_104C4D2C * v9[1] + flt_104C4D3C * v9[2] + *v9 * flt_104C4D1C + flt_104C4D4C;
            *(v11 - 2) = v9[3];
            *(v11 - 1) = v9[4];
            sub_10022350(v9, v11 - 6);
            v13 = *v11 < 0.0;
            if (*v11 + *(v11 - 3) < 0.0)
                v13 |= 2u;
            if (*v11 - *(v11 - 3) < 0.0)
                v13 |= 4u;
            if (*v11 + *(v11 - 5) < 0.0)
                v13 |= 8u;
            if (*v11 - *(v11 - 5) < 0.0)
                v13 |= 0x10u;
            if (*v11 + *(v11 - 4) < 0.0)
                v13 |= 0x20u;
            if (*v11 - *(v11 - 4) < 0.0)
                v13 |= 0x40u;
            *((_DWORD *)v11 - 7) = v13;
            if (!v13) {
                v29 = 1.0 / *v11;
                *(v11 - 14) = v29;
                v14 = v11[1];
                v15 = v11[2];
                v16 = v11[3];
                *v10 = flt_104BBF08 * v29 * *(v11 - 5) + flt_104C0BB0;
                v17 = v14;
                v18 = flt_104BC198 * *(v11 - 14) * *(v11 - 4) + flt_104C0BB8;
                *(v11 - 19) = v17;
                *(v11 - 18) = v15;
                *(v11 - 17) = v16;
                *(v11 - 20) = 0.99900001;
                *(v11 - 14) = 0.000015259022;
                *(v11 - 21) = v18;
            }
            v9 += 8;
            v10 += 27;
            v11 += 27;
            --v12;
        } while (v12);
        v8 = a1;
    }
    return v8 + 2;
}
// 100A79DC: using guessed type int dword_100A79DC;
// 104BBE38: using guessed type int dword_104BBE38[];
// 104BBE40: using guessed type char byte_104BBE40;
// 104BBE41: using guessed type char byte_104BBE41;
// 104BBE42: using guessed type char byte_104BBE42;
// 104BBE48: using guessed type int dword_104BBE48;
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC190: using guessed type int dword_104BC190;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
// 104C15D0: using guessed type float flt_104C15D0;
// 104C15D4: using guessed type float flt_104C15D4;
// 104C15D8: using guessed type float flt_104C15D8;
// 104C15DC: using guessed type float flt_104C15DC;
// 104C15E0: using guessed type float flt_104C15E0;
// 104C15E4: using guessed type float flt_104C15E4;
// 104C15E8: using guessed type float flt_104C15E8;
// 104C15EC: using guessed type float flt_104C15EC;
// 104C15F0: using guessed type float flt_104C15F0;
// 104C4D10: using guessed type float flt_104C4D10;
// 104C4D14: using guessed type float flt_104C4D14;
// 104C4D18: using guessed type float flt_104C4D18;
// 104C4D1C: using guessed type float flt_104C4D1C;
// 104C4D20: using guessed type float flt_104C4D20;
// 104C4D24: using guessed type float flt_104C4D24;
// 104C4D28: using guessed type float flt_104C4D28;
// 104C4D2C: using guessed type float flt_104C4D2C;
// 104C4D30: using guessed type float flt_104C4D30;
// 104C4D34: using guessed type float flt_104C4D34;
// 104C4D38: using guessed type float flt_104C4D38;
// 104C4D3C: using guessed type float flt_104C4D3C;
// 104C4D40: using guessed type float flt_104C4D40;
// 104C4D44: using guessed type float flt_104C4D44;
// 104C4D48: using guessed type float flt_104C4D48;
// 104C4D4C: using guessed type float flt_104C4D4C;
// 104C5180: using guessed type int dword_104C5180;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
