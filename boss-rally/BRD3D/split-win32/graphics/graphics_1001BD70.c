#include "types-win32.h"
//----- (1001BD70) --------------------------------------------------------
_DWORD *__cdecl graphics_1001BD70(_DWORD *a1) {
    int v1;  // esi
    int v2;  // eax
    int *v3; // ecx
    int v4;  // ebp

    v1 = *a1 & 0xFFFFFF;
    if (gIndexedPrimitiveIndexCount) {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                   D3DPT_TRIANGLELIST,
                                                   D3DVT_TLVERTEX,
                                                   &gVertices,
                                                   gVertexCount,
                                                   &g_indexedPrimitiveIndices,
                                                   gIndexedPrimitiveIndexCount,
                                                   12);
        v2 = 0;
        if (dword_104C5190 > 0) {
            v3 = dword_104C0BC0;
            do {
                v4 = *v3;
                ++v2;
                ++v3;
                *(_DWORD *)(v4 + 104) = -1;
            } while (v2 < dword_104C5190);
        }
        gIndexedPrimitiveIndexCount = 0;
        gVertexCount = 0;
        dword_104C5190 = 0;
    }
    dword_118AA0B4(v1);
    return &a1[2 * a1[1]];
}
// 104C5188: using guessed type int gVertexCount;
// 104C518C: using guessed type int gIndexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
// 118AA0B4: using guessed type int (__cdecl *dword_118AA0B4)(_DWORD);
