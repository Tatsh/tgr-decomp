#include "types-win32.h"
//----- (100231D0) --------------------------------------------------------
_DWORD *__cdecl sub_100231D0(_DWORD *a1) {
    float *v1;  // esi
    double v2;  // st6
    double v3;  // st7
    double v4;  // st7
    int v5;     // eax
    int *v6;    // ecx
    int v7;     // esi
    _DWORD *v8; // edx
    float *v9;  // esi
    float *v10; // ebp
    float *v11; // edi
    float v12;  // eax
    float v13;  // eax
    float v14;  // eax
    float v15;  // ecx
    int v16;    // eax
    float v18;  // [esp+20h] [ebp-Ch]
    float v19;  // [esp+20h] [ebp-Ch]
    float v20;  // [esp+20h] [ebp-Ch]
    float v21;  // [esp+20h] [ebp-Ch]
    float v22;  // [esp+24h] [ebp-8h]
    float v23;  // [esp+24h] [ebp-8h]
    float v24;  // [esp+28h] [ebp-4h]
    float v25;  // [esp+28h] [ebp-4h]
    float v26;  // [esp+28h] [ebp-4h]
    float v27;  // [esp+28h] [ebp-4h]
    float v28;  // [esp+28h] [ebp-4h]
    float v29;  // [esp+28h] [ebp-4h]
    float v30;  // [esp+28h] [ebp-4h]
    int v31;    // [esp+28h] [ebp-4h]

    if (!dword_104C5180) {
        if (dword_104BC190) {
            if (dword_100A79DC)
                v1 = (float *)((char *)&unk_104BBED0 + 64 * dword_100A79DC);
            else
                v1 = 0;
            v24 = (float)LOBYTE(dword_104BBE38[0]);
            v2 = v24;
            v25 = (float)BYTE1(dword_104BBE38[0]);
            v3 = v25;
            v26 = (float)BYTE2(dword_104BBE38[0]);
            flt_104C15D0 = v2 * 0.0039215689;
            flt_104C15D4 = v3 * 0.0039215689;
            flt_104C15D8 = v26 * 0.0039215689;
            v27 = (float)byte_104BBE41;
            v22 = (float)byte_104BBE42;
            v18 = (float)byte_104BBE40;
            flt_104C15DC = (v1[2] * v22 + v1[1] * v27 + *v1 * v18) / 128.0;
            flt_104C15E0 = (v1[5] * v27 + v1[6] * v22 + v1[4] * v18) / 128.0;
            flt_104C15E4 = (v1[10] * v22 + v1[8] * v18 + v1[9] * v27) / 128.0;
            sub_1003AE50(&flt_104C15DC);
            v28 = (float)(unsigned __int8)dword_104BBE48;
            flt_104C15E8 = v28 * 0.0039215689;
            v29 = (float)BYTE1(dword_104BBE48);
            v4 = v29;
            v30 = (float)BYTE2(dword_104BBE48);
            flt_104C15EC = v4 * 0.0039215689;
            flt_104C15F0 = v30 * 0.0039215689;
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
        v11 = v10 + 18;
        v31 = (unsigned __int16)*a1 >> 10;
        while (1) {
            *(v11 - 1) =
                flt_104C4D30 * v9[2] + flt_104C4D20 * v9[1] + *v9 * flt_104C4D10 + flt_104C4D40;
            *v11 = flt_104C4D34 * v9[2] + flt_104C4D24 * v9[1] + *v9 * flt_104C4D14 + flt_104C4D44;
            v11[1] =
                flt_104C4D38 * v9[2] + flt_104C4D28 * v9[1] + *v9 * flt_104C4D18 + flt_104C4D48;
            v11[4] =
                flt_104C4D3C * v9[2] + flt_104C4D2C * v9[1] + *v9 * flt_104C4D1C + flt_104C4D4C;
            sub_100236A0(v9, (int)(v11 - 2));
            if (dword_104BC190) {
                v23 = v9[5] * flt_104C15DC + v9[6] * flt_104C15E0 + v9[7] * flt_104C15E4;
                if (v23 >= 0.0) {
                    v19 = v23 * flt_104C15D0 + flt_104C15E8;
                    v12 = 1.0;
                    if (v19 <= 1.0)
                        v12 = v23 * flt_104C15D0 + flt_104C15E8;
                    v11[5] = v12;
                    v20 = v23 * flt_104C15D4 + flt_104C15EC;
                    v13 = 1.0;
                    if (v20 <= 1.0)
                        v13 = v23 * flt_104C15D4 + flt_104C15EC;
                    v11[6] = v13;
                    v21 = v23 * flt_104C15D8 + flt_104C15F0;
                    v14 = 1.0;
                    if (v21 <= 1.0)
                        v14 = v23 * flt_104C15D8 + flt_104C15F0;
                    v11[7] = v14;
                    goto LABEL_27;
                }
                v11[5] = flt_104C15E8;
                v11[6] = flt_104C15EC;
                v15 = flt_104C15F0;
            } else {
                v11[5] = flt_104C5154;
                v11[6] = flt_104C5160;
                v15 = flt_104C1690;
            }
            v11[7] = v15;
        LABEL_27:
            v16 = sub_10022DC0(v11 - 2);
            *((_DWORD *)v11 - 3) = v16;
            if (!v16)
                sub_100222D0((int)v10,
                             v11 - 2,
                             *((_DWORD *)v11 + 5),
                             *((_DWORD *)v11 + 6),
                             *((_DWORD *)v11 + 7));
            v9 += 8;
            v10 += 27;
            v11 += 27;
            if (!--v31) {
                v8 = a1;
                return v8 + 2;
            }
        }
    }
    return v8 + 2;
}
// 100A79DC: using guessed type int dword_100A79DC;
// 104BBE38: using guessed type int dword_104BBE38[];
// 104BBE40: using guessed type char byte_104BBE40;
// 104BBE41: using guessed type char byte_104BBE41;
// 104BBE42: using guessed type char byte_104BBE42;
// 104BBE48: using guessed type int dword_104BBE48;
// 104BC190: using guessed type int dword_104BC190;
// 104C15D0: using guessed type float flt_104C15D0;
// 104C15D4: using guessed type float flt_104C15D4;
// 104C15D8: using guessed type float flt_104C15D8;
// 104C15DC: using guessed type float flt_104C15DC;
// 104C15E0: using guessed type float flt_104C15E0;
// 104C15E4: using guessed type float flt_104C15E4;
// 104C15E8: using guessed type float flt_104C15E8;
// 104C15EC: using guessed type float flt_104C15EC;
// 104C15F0: using guessed type float flt_104C15F0;
// 104C1690: using guessed type float flt_104C1690;
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
// 104C5154: using guessed type float flt_104C5154;
// 104C5160: using guessed type float flt_104C5160;
// 104C5180: using guessed type int dword_104C5180;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
