#include "../../types-win32.h"
//----- (1001CF30) --------------------------------------------------------
_DWORD *__cdecl sub_1001CF30(_DWORD *a1) {
    int v1;         // edx
    int v2;         // edi
    int v3;         // eax
    int v4;         // ecx
    _DWORD *result; // eax

    dword_118AA080 = (*a1 >> 12) & 0xFFF;
    v1 = dword_118AA080;
    if (dword_118AA080 >= 2048) {
        v1 = dword_118AA080 - 4096;
        dword_118AA080 -= 4096;
    }
    dword_11829838 = *a1 & 0xFFF;
    v2 = dword_11829838;
    if (dword_11829838 >= 2048) {
        v2 = dword_11829838 - 4096;
        dword_11829838 -= 4096;
    }
    dword_1182983C = (a1[1] >> 12) & 0xFFF;
    v3 = dword_1182983C;
    if (dword_1182983C >= 2048) {
        v3 = dword_1182983C - 4096;
        dword_1182983C -= 4096;
    }
    dword_118A9870 = a1[1] & 0xFFF;
    v4 = dword_118A9870;
    if (dword_118A9870 >= 2048) {
        v4 = dword_118A9870 - 4096;
        dword_118A9870 -= 4096;
    }
    dword_11829840 = (v3 - v1 + 4) >> 2;
    result = a1 + 2;
    dword_118AA094 = (v4 - v2 + 4) >> 2;
    return result;
}
// 11829838: using guessed type int dword_11829838;
// 1182983C: using guessed type int dword_1182983C;
// 11829840: using guessed type int dword_11829840;
// 118A9870: using guessed type int dword_118A9870;
// 118AA080: using guessed type int dword_118AA080;
// 118AA094: using guessed type int dword_118AA094;
