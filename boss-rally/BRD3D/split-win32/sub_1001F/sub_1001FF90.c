#include "../types-win32.h"
//----- (1001FF90) --------------------------------------------------------
int *__cdecl sub_1001FF90(int a1, int a2, int a3) {
    int *result;     // eax
    int *v4;         // ecx
    int *v5;         // edx
    int *v6;         // esi
    int *v7;         // edx
    float *v8;       // ecx
    unsigned int v9; // eax
    int v10;         // esi
    int v11;         // edi
    int v12;         // ebx
    double v13;      // st7
    double v14;      // st7
    WORD v15;        // ax
    int v16;         // ecx
    WORD v17;        // ax
    int v18;         // ecx
    WORD v19;        // ax
    int v20;         // ecx
    DWORD v21;       // edx
    DWORD v22;       // ecx
    int *v23;        // ecx
    int v24;         // edx
    _DWORD *v25;     // esi
    int v26;         // ebx
    WORD v27;        // ax
    int v28;         // ecx
    WORD v29;        // ax
    int v30;         // ecx
    WORD v31;        // ax
    int v32;         // ecx
    DWORD v33;       // edx
    DWORD v34;       // ecx
    int *v35;        // ecx
    int v36;         // edx
    int *v37;        // [esp+10h] [ebp-22Ch] BYREF
    int v38;         // [esp+14h] [ebp-228h]
    int v39;         // [esp+18h] [ebp-224h]
    float v40;       // [esp+1Ch] [ebp-220h]
    _DWORD v41[8];   // [esp+20h] [ebp-21Ch] BYREF
    char v42;        // [esp+40h] [ebp-1FCh] BYREF
    int v43[15];     // [esp+5Ch] [ebp-1E0h] BYREF
    _DWORD v44[105]; // [esp+98h] [ebp-1A4h] BYREF

    *(_DWORD *)(a3 + 64) = 0;
    *(_DWORD *)(a2 + 64) = a3 + 64;
    *(_DWORD *)(a1 + 64) = a2 + 64;
    v37 = (int *)(a1 + 64);
    *(_DWORD *)(a3 + 64) = a1 + 64;
    v38 = 3;
    sub_1001DEF0((int)&v37);
    result = (int *)v38;
    if (v38 < 3)
        goto LABEL_8;
    sub_1001D9F0((int)&v37);
    result = (int *)v38;
    if (v38 < 3)
        goto LABEL_8;
    sub_1001DB30((int)&v37);
    result = (int *)v38;
    if (v38 < 3)
        goto LABEL_8;
    sub_1001DDB0((int)&v37);
    result = (int *)v38;
    if (v38 < 3)
        goto LABEL_8;
    sub_1001E030((int)&v37);
    result = (int *)v38;
    if (v38 >= 3 && (sub_1001DC70((int)&v37), result = (int *)v38, v38 >= 3) &&
        (sub_1001D810((int)&v37), result = (int *)v38, v38 >= 3)) {
        v39 = 0;
        v7 = v37;
        v8 = (float *)&v42;
        do {
            v9 = (unsigned int)v7;
            v7 = (int *)*v7;
            v37 = v7;
            v10 = *(_DWORD *)(v9 + 36);
            v11 = *(_DWORD *)(v9 + 32);
            v12 = *(_DWORD *)(v9 + 28);
            v40 = 1.0 / *(float *)(v9 + 24);
            *v8 = v40;
            *(v8 - 8) = *(float *)(v9 + 4) * flt_104BBF08 * v40 + flt_104C0BB0;
            v13 = *(float *)(v9 + 8) * flt_104BC198;
            *(v8 - 6) = 0.99900001;
            *((_DWORD *)v8 - 5) = v12;
            *((_DWORD *)v8 - 4) = v11;
            *((_DWORD *)v8 - 3) = v10;
            v14 = v13 * *v8;
            *v8 = 0.000015259022;
            *(v8 - 7) = v14 + flt_104C0BB8;
            v8[1] = *(float *)(v9 + 16) * flt_118AA08C;
            v8[2] = *(float *)(v9 + 20) * flt_118AA090;
            if (v9 >= (unsigned int)dword_104C01A8 && v9 < (unsigned int)&flt_104C0BA8) {
                *(_DWORD *)v9 = dword_104C0BBC;
                v7 = v37;
                dword_104C0BBC = v9;
            }
            result = (int *)v38;
            v8 += 15;
            ++v39;
        } while (v39 < v38);
        if (v38 == 3) {
            v15 = off_100A79EC(v44);
            v16 = g_indexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v15;
            g_indexedPrimitiveIndexCount = v16 + 1;
            v17 = off_100A79EC(v43);
            v18 = g_indexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v17;
            g_indexedPrimitiveIndexCount = v18 + 1;
            v19 = off_100A79EC(v41);
            v20 = g_indexedPrimitiveIndexCount;
            v21 = g_vertexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v19;
            result = (int *)(v21 + 3);
            v22 = v20 + 1;
            g_indexedPrimitiveIndexCount = v22;
            if (v21 + 3 > 0x200 || (result = (int *)(v22 + 3), v22 + 3 > 0x200)) {
                if (v22) {
                    g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                               D3DPT_TRIANGLELIST,
                                                               D3DVT_TLVERTEX,
                                                               &g_vertices,
                                                               v21,
                                                               &g_indexedPrimitiveIndices,
                                                               v22,
                                                               12);
                    result = 0;
                    if (dword_104C5190 > 0) {
                        v23 = dword_104C0BC0;
                        do {
                            v24 = *v23;
                            result = (int *)((char *)result + 1);
                            ++v23;
                            *(_DWORD *)(v24 + 104) = -1;
                        } while ((int)result < dword_104C5190);
                    }
                    g_indexedPrimitiveIndexCount = 0;
                    g_vertexCount = 0;
                    dword_104C5190 = 0;
                }
            }
        } else if (v38 > 2) {
            v25 = v44;
            v26 = v38 - 2;
            do {
                v27 = off_100A79EC(v25);
                v28 = g_indexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v27;
                g_indexedPrimitiveIndexCount = v28 + 1;
                v29 = off_100A79EC(v25 - 15);
                v30 = g_indexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v29;
                g_indexedPrimitiveIndexCount = v30 + 1;
                v31 = off_100A79EC(v41);
                v32 = g_indexedPrimitiveIndexCount;
                v33 = g_vertexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v31;
                result = (int *)(v33 + 3);
                v34 = v32 + 1;
                g_indexedPrimitiveIndexCount = v34;
                if (v33 + 3 > 0x200 || (result = (int *)(v34 + 3), v34 + 3 > 0x200)) {
                    if (v34) {
                        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                                   D3DPT_TRIANGLELIST,
                                                                   D3DVT_TLVERTEX,
                                                                   &g_vertices,
                                                                   v33,
                                                                   &g_indexedPrimitiveIndices,
                                                                   v34,
                                                                   12);
                        result = 0;
                        if (dword_104C5190 > 0) {
                            v35 = dword_104C0BC0;
                            do {
                                v36 = *v35;
                                result = (int *)((char *)result + 1);
                                ++v35;
                                *(_DWORD *)(v36 + 104) = -1;
                            } while ((int)result < dword_104C5190);
                        }
                        g_indexedPrimitiveIndexCount = 0;
                        g_vertexCount = 0;
                        dword_104C5190 = 0;
                    }
                }
                v25 += 15;
                --v26;
            } while (v26);
        }
    } else {
    LABEL_8:
        if ((int)result > 0) {
            v4 = v37;
            v5 = (int *)dword_104C0BBC;
            v6 = result;
            do {
                result = v4;
                v4 = (int *)*v4;
                v37 = v4;
                if (result >= dword_104C01A8 && result < (int *)&flt_104C0BA8) {
                    *result = (int)v5;
                    v4 = v37;
                    v5 = result;
                    dword_104C0BBC = (int)result;
                }
                v6 = (int *)((char *)v6 - 1);
            } while (v6);
        }
    }
    return result;
}
// 100200B8: conditional instruction was optimized away because of '%var_228.4>=3'
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 104BBF08: using guessed type float flt_104BBF08;
// 104BC198: using guessed type float flt_104BC198;
// 104C0BA8: using guessed type float flt_104C0BA8;
// 104C0BB0: using guessed type float flt_104C0BB0;
// 104C0BB8: using guessed type float flt_104C0BB8;
// 104C0BBC: using guessed type int dword_104C0BBC;
// 104C5188: using guessed type int g_vertexCount;
// 104C518C: using guessed type int g_indexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA08C: using guessed type float flt_118AA08C;
// 118AA090: using guessed type float flt_118AA090;
