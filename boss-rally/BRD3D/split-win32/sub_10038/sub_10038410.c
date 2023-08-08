#include "../types-win32.h"
//----- (10038410) --------------------------------------------------------
int __cdecl sub_10038410(int a1) {
    int result; // eax
    _BYTE *v2;  // esi
    int i;      // edi

    result = *(_DWORD *)(a1 + 136);
    v2 = *(_BYTE **)(a1 + 132);
    for (i = 0; i < result; ++i) {
        sub_100383C0(v2);
        result = *(_DWORD *)(a1 + 136);
        v2 += 12;
    }
    return result;
}
