#include "types-win32.h"
//----- (1001D3A0) --------------------------------------------------------
void graphics_1001D3A0() {
    int v0;  // eax
    int *v1; // ecx
    int v2;  // edi

    if (gIndexedPrimitiveIndexCount) {
        g_D3DDevice2->lpVtbl->DrawIndexedPrimitive(g_D3DDevice2,
                                                   D3DPT_TRIANGLELIST,
                                                   D3DVT_TLVERTEX,
                                                   &gVertices,
                                                   gVertexCount,
                                                   &g_indexedPrimitiveIndices,
                                                   gIndexedPrimitiveIndexCount,
                                                   12);
        v0 = 0;
        if (dword_104C5190 > 0) {
            v1 = dword_104C0BC0;
            do {
                v2 = *v1;
                ++v0;
                ++v1;
                *(_DWORD *)(v2 + 104) = -1;
            } while (v0 < dword_104C5190);
        }
        gIndexedPrimitiveIndexCount = 0;
        gVertexCount = 0;
        dword_104C5190 = 0;
    }
}
// 104C5188: using guessed type int gVertexCount;
// 104C518C: using guessed type int gIndexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
