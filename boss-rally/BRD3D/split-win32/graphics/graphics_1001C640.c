#include "types-win32.h"
//----- (1001C640) --------------------------------------------------------
int graphics_1001C640() {
    int result; // eax
    int *v1;    // ecx
    int v2;     // edi

    result = 0;
    if (dword_104C5190 > 0) {
        v1 = dword_104C0BC0;
        do {
            v2 = *v1;
            ++result;
            ++v1;
            *(_DWORD *)(v2 + 104) = -1;
        } while (result < dword_104C5190);
    }
    gIndexedPrimitiveIndexCount = 0;
    gVertexCount = 0;
    dword_104C5190 = 0;
    return result;
}
// 104C5188: using guessed type int gVertexCount;
// 104C518C: using guessed type int gIndexedPrimitiveIndexCount;
// 104C5190: using guessed type int dword_104C5190;
