#include "types-win32.h"
//----- (1001E4E0) --------------------------------------------------------
int __cdecl graphics_1001E4E0(int a1, int a2, int a3) {
    WORD v3;    // ax
    int v4;     // ecx
    WORD v5;    // ax
    int v6;     // ecx
    WORD v7;    // ax
    int v8;     // ecx
    DWORD v9;   // edx
    int result; // eax
    DWORD v11;  // ecx
    int *v12;   // ecx
    int v13;    // edi

    v3 = off_100A79EC(a3);
    v4 = gIndexedPrimitiveIndexCount;
    *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v3;
    gIndexedPrimitiveIndexCount = v4 + 1;
    v5 = off_100A79EC(a2);
    v6 = gIndexedPrimitiveIndexCount;
    *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v5;
    gIndexedPrimitiveIndexCount = v6 + 1;
    v7 = off_100A79EC(a1);
    v8 = gIndexedPrimitiveIndexCount;
    v9 = gVertexCount;
    *(&g_indexedPrimitiveIndices + gIndexedPrimitiveIndexCount) = v7;
    result = v9 + 3;
    v11 = v8 + 1;
    gIndexedPrimitiveIndexCount = v11;
    if (v9 + 3 > 0x200 || (result = v11 + 3, v11 + 3 > 0x200)) {
        if (v11) {
            g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                       D3DPT_TRIANGLELIST,
                                                       D3DVT_TLVERTEX,
                                                       &gVertices,
                                                       v9,
                                                       &g_indexedPrimitiveIndices,
                                                       v11,
                                                       12);
            result = 0;
            if (dword_104C5190 > 0) {
                v12 = dword_104C0BC0;
                do {
                    v13 = *v12;
                    ++result;
                    ++v12;
                    *(_DWORD *)(v13 + 104) = -1;
                } while (result < dword_104C5190);
            }
            gIndexedPrimitiveIndexCount = 0;
            gVertexCount = 0;
            dword_104C5190 = 0;
        }
    }
    return result;
}
// 100A79EC: using guessed type int (__cdecl *off_100A79EC)(_DWORD);
// 104C5188: using guessed type int gVertexCount;
// 104C518C: using guessed type int gIndexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
