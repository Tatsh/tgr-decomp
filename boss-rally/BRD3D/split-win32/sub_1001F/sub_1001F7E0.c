#include "../../types-win32.h"
//----- (1001F7E0) --------------------------------------------------------
float *__cdecl sub_1001F7E0(int a1, int a2, int a3, int a4, int a5, int a6) {
    float *result;    // eax
    int v7;           // edi
    float *v8;        // ecx
    float *v9;        // edx
    float *v10;       // edx
    unsigned int v11; // ecx
    double v12;       // st7
    double v13;       // st7
    WORD v14;         // ax
    int v15;          // ecx
    WORD v16;         // ax
    int v17;          // ecx
    WORD v18;         // ax
    int v19;          // ecx
    DWORD v20;        // edx
    DWORD v21;        // ecx
    int *v22;         // ecx
    int v23;          // edx
    int v24;          // edi
    _DWORD *v25;      // esi
    WORD v26;         // ax
    int v27;          // ecx
    WORD v28;         // ax
    int v29;          // ecx
    WORD v30;         // ax
    int v31;          // ecx
    DWORD v32;        // edx
    DWORD v33;        // ecx
    int *v34;         // ecx
    int v35;          // edx
    float *v36;       // [esp+10h] [ebp-22Ch] BYREF
    int v37;          // [esp+14h] [ebp-228h]
    int v38;          // [esp+18h] [ebp-224h]
    float v39;        // [esp+1Ch] [ebp-220h]
    _DWORD v40[8];    // [esp+20h] [ebp-21Ch] BYREF
    char v41;         // [esp+40h] [ebp-1FCh] BYREF
    int v42[15];      // [esp+5Ch] [ebp-1E0h] BYREF
    _DWORD v43[105];  // [esp+98h] [ebp-1A4h] BYREF

    *(_DWORD *)(a3 + 64) = 0;
    *(_DWORD *)(a2 + 64) = a3 + 64;
    *(_DWORD *)(a1 + 64) = a2 + 64;
    v36 = (float *)(a1 + 64);
    *(_DWORD *)(a3 + 64) = a1 + 64;
    v37 = 3;
    result = (float *)sub_1001DEF0((int)&v36);
    v7 = v37;
    if (v37 < 3)
        goto LABEL_8;
    result = (float *)sub_1001D9F0((int)&v36);
    v7 = v37;
    if (v37 < 3)
        goto LABEL_8;
    result = (float *)sub_1001DB30((int)&v36);
    v7 = v37;
    if (v37 < 3)
        goto LABEL_8;
    result = (float *)sub_1001DDB0((int)&v36);
    v7 = v37;
    if (v37 < 3)
        goto LABEL_8;
    result = (float *)sub_1001E030((int)&v36);
    v7 = v37;
    if (v37 >= 3 && (result = (float *)sub_1001DC70((int)&v36), v7 = v37, v37 >= 3) &&
        (result = (float *)sub_1001D810((int)&v36), v7 = v37, v37 >= 3)) {
        v38 = 0;
        v10 = v36;
        result = (float *)&v41;
        do {
            v11 = (unsigned int)v10;
            v10 = *(float **)v10;
            v36 = v10;
            v39 = 1.0 / *(float *)(v11 + 24);
            *result = v39;
            *(result - 8) = *(float *)(v11 + 4) * flt_104BBF08 * v39 + flt_104C0BB0;
            v12 = *(float *)(v11 + 8) * flt_104BC198;
            *(result - 6) = 0.99900001;
            *((_DWORD *)result - 5) = a4;
            *((_DWORD *)result - 4) = a5;
            *((_DWORD *)result - 3) = a6;
            v13 = v12 * *result;
            *result = 0.000015259022;
            *(result - 7) = v13 + flt_104C0BB8;
            result[1] = *(float *)(v11 + 16) * flt_118AA08C;
            result[2] = *(float *)(v11 + 20) * flt_118AA090;
            if (v11 >= (unsigned int)dword_104C01A8 && v11 < (unsigned int)&flt_104C0BA8) {
                *(_DWORD *)v11 = dword_104C0BBC;
                v10 = v36;
                v7 = v37;
                dword_104C0BBC = v11;
            }
            result += 15;
            ++v38;
        } while (v38 < v7);
        if (v7 == 3) {
            v14 = off_100A79EC(v43);
            v15 = g_indexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v14;
            g_indexedPrimitiveIndexCount = v15 + 1;
            v16 = off_100A79EC(v42);
            v17 = g_indexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v16;
            g_indexedPrimitiveIndexCount = v17 + 1;
            v18 = off_100A79EC(v40);
            v19 = g_indexedPrimitiveIndexCount;
            v20 = g_vertexCount;
            *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v18;
            result = (float *)(v20 + 3);
            v21 = v19 + 1;
            g_indexedPrimitiveIndexCount = v21;
            if (v20 + 3 > 0x200 || (result = (float *)(v21 + 3), v21 + 3 > 0x200)) {
                if (v21) {
                    g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                               D3DPT_TRIANGLELIST,
                                                               D3DVT_TLVERTEX,
                                                               &g_vertices,
                                                               v20,
                                                               &g_indexedPrimitiveIndices,
                                                               v21,
                                                               12);
                    result = 0;
                    if (dword_104C5190 > 0) {
                        v22 = dword_104C0BC0;
                        do {
                            v23 = *v22;
                            result = (float *)((char *)result + 1);
                            ++v22;
                            *(_DWORD *)(v23 + 104) = -1;
                        } while ((int)result < dword_104C5190);
                    }
                    g_indexedPrimitiveIndexCount = 0;
                    g_vertexCount = 0;
                    dword_104C5190 = 0;
                }
            }
        } else if (v7 > 2) {
            v24 = v7 - 2;
            v25 = v43;
            do {
                v26 = off_100A79EC(v25);
                v27 = g_indexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v26;
                g_indexedPrimitiveIndexCount = v27 + 1;
                v28 = off_100A79EC(v25 - 15);
                v29 = g_indexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v28;
                g_indexedPrimitiveIndexCount = v29 + 1;
                v30 = off_100A79EC(v40);
                v31 = g_indexedPrimitiveIndexCount;
                v32 = g_vertexCount;
                *(&g_indexedPrimitiveIndices + g_indexedPrimitiveIndexCount) = v30;
                result = (float *)(v32 + 3);
                v33 = v31 + 1;
                g_indexedPrimitiveIndexCount = v33;
                if (v32 + 3 > 0x200 || (result = (float *)(v33 + 3), v33 + 3 > 0x200)) {
                    if (v33) {
                        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                                   D3DPT_TRIANGLELIST,
                                                                   D3DVT_TLVERTEX,
                                                                   &g_vertices,
                                                                   v32,
                                                                   &g_indexedPrimitiveIndices,
                                                                   v33,
                                                                   12);
                        result = 0;
                        if (dword_104C5190 > 0) {
                            v34 = dword_104C0BC0;
                            do {
                                v35 = *v34;
                                result = (float *)((char *)result + 1);
                                ++v34;
                                *(_DWORD *)(v35 + 104) = -1;
                            } while ((int)result < dword_104C5190);
                        }
                        g_indexedPrimitiveIndexCount = 0;
                        g_vertexCount = 0;
                        dword_104C5190 = 0;
                    }
                }
                v25 += 15;
                --v24;
            } while (v24);
        }
    } else {
    LABEL_8:
        if (v7 > 0) {
            v8 = v36;
            v9 = (float *)dword_104C0BBC;
            do {
                result = v8;
                v8 = *(float **)v8;
                v36 = v8;
                if (result >= (float *)dword_104C01A8 && result < &flt_104C0BA8) {
                    *(_DWORD *)result = v9;
                    v8 = v36;
                    v9 = result;
                    dword_104C0BBC = (int)result;
                }
                --v7;
            } while (v7);
        }
    }
    return result;
}
// 1001F906: conditional instruction was optimized away because of '%var_228.4>=3'
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
