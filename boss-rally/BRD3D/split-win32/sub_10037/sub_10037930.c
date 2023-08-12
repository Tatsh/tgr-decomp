#include "types-win32.h"
//----- (10037930) --------------------------------------------------------
int __cdecl sub_10037930(int a1, _DWORD *a2, _DWORD *a3) {
    int v3;    // eax
    _DWORD *i; // ecx
    int v6;    // eax

    v3 = dword_10A99778 - 1;
    if (dword_10A99778 - 1 < 0)
        return 0;
    for (i = &gUnk06594.gap4A2C[16 * v3 + 208]; dword_10A9977C + a1 != *i; i -= 4) {
        if (--v3 < 0)
            return 0;
    }
    v6 = 16 * v3;
    *a2 = *(_DWORD *)&gUnk06594.gap4A2C[v6 + 212];
    *a3 = *(_DWORD *)&gUnk06594.gap4A2C[v6 + 216];
    return 1;
}
// 10A99778: using guessed type int dword_10A99778;
// 10A9977C: using guessed type int dword_10A9977C;
