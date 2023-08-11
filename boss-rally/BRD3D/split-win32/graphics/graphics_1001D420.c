#include "types-win32.h"
//----- (1001D420) --------------------------------------------------------
int *__cdecl graphics_1001D420(int a1, int a2, int a3) {
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
    WORD v14;        // ax
    int v15;         // ecx
    WORD v16;        // ax
    int v17;         // ecx
    WORD v18;        // ax
    int v19;         // ecx
    DWORD v20;       // edx
    DWORD v21;       // ecx
    int *v22;        // ecx
    int v23;         // edx
    _DWORD *v24;     // esi
    int v25;         // ebx
    WORD v26;        // ax
    int v27;         // ecx
    WORD v28;        // ax
    int v29;         // ecx
    WORD v30;        // ax
    int v31;         // ecx
    DWORD v32;       // edx
    DWORD v33;       // ecx
    int *v34;        // ecx
    int v35;         // edx
    int *v36;        // [esp+10h] [ebp-22Ch] BYREF
    int v37;         // [esp+14h] [ebp-228h]
    int v38;         // [esp+18h] [ebp-224h]
    float v39;       // [esp+1Ch] [ebp-220h]
    _DWORD v40[8];   // [esp+20h] [ebp-21Ch] BYREF
    char v41;        // [esp+40h] [ebp-1FCh] BYREF
    int v42[15];     // [esp+5Ch] [ebp-1E0h] BYREF
    _DWORD v43[105]; // [esp+98h] [ebp-1A4h] BYREF

    *(_DWORD *)(a3 + 64) = 0;
    *(_DWORD *)(a2 + 64) = a3 + 64;
    *(_DWORD *)(a1 + 64) = a2 + 64;
    v36 = (int *)(a1 + 64);
    *(_DWORD *)(a3 + 64) = a1 + 64;
    v37 = 3;
    sub_1001DEF0((int)&v36);
    result = (int *)v37;
    if (v37 < 3)
        goto LABEL_8;
    sub_1001D9F0((int)&v36);
    result = (int *)v37;
    if (v37 < 3)
        goto LABEL_8;
    sub_1001DB30((int)&v36);
    result = (int *)v37;
    if (v37 < 3)
        goto LABEL_8;
    sub_1001DDB0((int)&v36);
    result = (int *)v37;
    if (v37 < 3)
        goto LABEL_8;
    sub_1001E030((int)&v36);
    result = (int *)v37;
    if (v37 >= 3 && (sub_1001DC70((int)&v36), result = (int *)v37, v37 >= 3) &&
        (sub_1001D810((int)&v36), result = (int *)v37, v37 >= 3)) {
        v38 = 0;
        v7 = v36;
        v8 = (float *)&v41;
        do {
            v9 = (unsigned int)v7;
            v7 = (int *)*v7;
            v36 = v7;
            v10 = *(_DWORD *)(v9 + 36);
            v11 = *(_DWORD *)(v9 + 32);
            v12 = *(_DWORD *)(v9 + 28);
            v39 = 1.0 / *(float *)(v9 + 24);
            *v8 = v39;
            *(v8 - 8) = *(float *)(v9 + 4) * flt_104BBF08 * v39 + flt_104C0BB0;
            *(v8 - 7) = *(float *)(v9 + 8) * flt_104BC198 * *v8 + flt_104C0BB8;
            v13 = *(float *)(v9 + 12) * flt_100A79E0;
            *((_DWORD *)v8 - 5) = v12;
            *((_DWORD *)v8 - 4) = v11;
            *((_DWORD *)v8 - 3) = v10;
            *(v8 - 6) = v13 * *v8 + flt_100A79E4;
            v8[1] = *(float *)(v9 + 16) * flt_118AA08C;
            v8[2] = *(float *)(v9 + 20) * flt_118AA090;
            if (v9 >= (unsigned int)dword_104C01A8 && v9 < (unsigned int)&flt_104C0BA8) {
                *(_DWORD *)v9 = dword_104C0BBC;
                v7 = v36;
                dword_104C0BBC = v9;
            }
            result = (int *)v37;
            v8 += 15;
            ++v38;
        } while (v38 < v37);
        if (v37 == 3) {
            v14 = off_100A79EC(v43);
            v15 = gIndexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v14;
            gIndexedPrimitiveIndexCount = v15 + 1;
            v16 = off_100A79EC(v42);
            v17 = gIndexedPrimitiveIndexCount;
            *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v16;
            gIndexedPrimitiveIndexCount = v17 + 1;
            v18 = off_100A79EC(v40);
            v19 = gIndexedPrimitiveIndexCount;
            v20 = gVertexCount;
            *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v18;
            result = (int *)(v20 + 3);
            v21 = v19 + 1;
            gIndexedPrimitiveIndexCount = v21;
            if (v20 + 3 > 0x200 || (result = (int *)(v21 + 3), v21 + 3 > 0x200)) {
                if (v21) {
                    g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                               D3DPT_TRIANGLELIST,
                                                               D3DVT_TLVERTEX,
                                                               &gVertices,
                                                               v20,
                                                               &g_indexedPrimitiveIndices,
                                                               v21,
                                                               12);
                    result = 0;
                    if (dword_104C5190 > 0) {
                        v22 = dword_104C0BC0;
                        do {
                            v23 = *v22;
                            result = (int *)((char *)result + 1);
                            ++v22;
                            *(_DWORD *)(v23 + 104) = -1;
                        } while ((int)result < dword_104C5190);
                    }
                    gIndexedPrimitiveIndexCount = 0;
                    gVertexCount = 0;
                    dword_104C5190 = 0;
                }
            }
        } else if (v37 > 2) {
            v24 = v43;
            v25 = v37 - 2;
            do {
                v26 = off_100A79EC(v24);
                v27 = gIndexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v26;
                gIndexedPrimitiveIndexCount = v27 + 1;
                v28 = off_100A79EC(v24 - 15);
                v29 = gIndexedPrimitiveIndexCount;
                *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v28;
                gIndexedPrimitiveIndexCount = v29 + 1;
                v30 = off_100A79EC(v40);
                v31 = gIndexedPrimitiveIndexCount;
                v32 = gVertexCount;
                *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v30;
                result = (int *)(v32 + 3);
                v33 = v31 + 1;
                gIndexedPrimitiveIndexCount = v33;
                if (v32 + 3 > 0x200 || (result = (int *)(v33 + 3), v33 + 3 > 0x200)) {
                    if (v33) {
                        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                                   D3DPT_TRIANGLELIST,
                                                                   D3DVT_TLVERTEX,
                                                                   &gVertices,
                                                                   v32,
                                                                   &g_indexedPrimitiveIndices,
                                                                   v33,
                                                                   12);
                        result = 0;
                        if (dword_104C5190 > 0) {
                            v34 = dword_104C0BC0;
                            do {
                                v35 = *v34;
                                result = (int *)((char *)result + 1);
                                ++v34;
                                *(_DWORD *)(v35 + 104) = -1;
                            } while ((int)result < dword_104C5190);
                        }
                        gIndexedPrimitiveIndexCount = 0;
                        gVertexCount = 0;
                        dword_104C5190 = 0;
                    }
                }
                v24 += 15;
                --v25;
            } while (v25);
        }
    } else {
    LABEL_8:
        if ((int)result > 0) {
            v4 = v36;
            v5 = (int *)dword_104C0BBC;
            v6 = result;
            do {
                result = v4;
                v4 = (int *)*v4;
                v36 = v4;
                if (result >= dword_104C01A8 && result < (int *)&flt_104C0BA8) {
                    *result = (int)v5;
                    v4 = v36;
                    v5 = result;
                    dword_104C0BBC = (int)result;
                }
                v6 = (int *)((char *)v6 - 1);
            } while (v6);
        }
    }
    return result;
}
// 1001D548: conditional instruction was optimized away because of '%var_228.4>=3'
// 100A79E0: using guessed type float flt_100A79E0;
// 100A79E4: using guessed type float flt_100A79E4;
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
