#include "types-win32.h"
//----- (1001CA10) --------------------------------------------------------
int __cdecl graphics_1001CA10(float *a1) {
    int result; // eax
    int v2;     // eax
    float *v3;  // ecx

    if (a1 >= flt_104C16D0 && a1 < flt_104C4CD0) {
        result = *((_DWORD *)a1 + 26);
        if (result != -1)
            return result;
        *((_DWORD *)a1 + 26) = gVertexCount;
        v2 = dword_104C5190;
        dword_104C0BC0[dword_104C5190] = (int)a1;
        dword_104C5190 = v2 + 1;
    }
    result = gVertexCount++;
    v3 = (float *)((char *)&gVertices + 32 * result);
    *v3 = *a1;
    v3[1] = a1[1];
    v3[2] = a1[2];
    v3[3] = a1[8];
    *((_DWORD *)v3 + 4) = dword_104C0BB4;
    v3[6] = a1[9];
    v3[7] = a1[10];
    return result;
}
// 104C0BB4: using guessed type int dword_104C0BB4;
// 104C5188: using guessed type int g_vertexCount;
// 104C5190: using guessed type int dword_104C5190;
