#include "types-win32.h"
//----- (1001BC90) --------------------------------------------------------
int __cdecl sub_1001BC90(unsigned int a1) {
    int result; // eax
    int v3;     // eax
    _DWORD *v4; // ecx
    int v5;     // [esp+Ch] [ebp-8h]
    int v6;     // [esp+10h] [ebp-4h]
    float v7;   // [esp+1Ch] [ebp+8h]
    float v8;   // [esp+1Ch] [ebp+8h]
    float v9;   // [esp+1Ch] [ebp+8h]

    if (a1 >= (unsigned int)flt_104C16D0 && a1 < (unsigned int)flt_104C4CD0) {
        result = *(_DWORD *)(a1 + 104);
        if (result != -1)
            return result;
        *(_DWORD *)(a1 + 104) = g_vertexCount;
        v3 = dword_104C5190;
        dword_104C0BC0[dword_104C5190] = a1;
        dword_104C5190 = v3 + 1;
    }
    result = g_vertexCount++;
    v7 = *(float *)(a1 + 12) * 255.0;
    v6 = (int)v7;
    v8 = *(float *)(a1 + 16) * 255.0;
    v5 = (int)v8;
    v9 = *(float *)(a1 + 20) * 255.0;
    v4 = (_DWORD *)((char *)&g_vertices + 32 * result);
    *v4 = *(_DWORD *)a1;
    v4[1] = *(_DWORD *)(a1 + 4);
    v4[2] = *(_DWORD *)(a1 + 8);
    v4[3] = *(_DWORD *)(a1 + 32);
    v4[4] = (int)v9 | ((v5 | ((v6 | 0xFFFFFF00) << 8)) << 8);
    v4[6] = *(_DWORD *)(a1 + 36);
    v4[7] = *(_DWORD *)(a1 + 40);
    return result;
}
// 104C5188: using guessed type int g_vertexCount;
// 104C5190: using guessed type int dword_104C5190;
