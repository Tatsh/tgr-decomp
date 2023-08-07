#include "../../types-win32.h"
//----- (100661B0) --------------------------------------------------------
int __cdecl sub_100661B0(int a1, int a2) {
    int v2;     // esi
    int v3;     // edi
    int result; // eax
    int v5;     // eax
    int v6;     // eax
    int v7;     // eax

    v2 = 0;
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 10692) + 124);
    if (v3 > 0) {
        do {
            sub_10074F70(*(_DWORD *)(*(_DWORD *)(a1 + 10692) + 4 * v2 + 4),
                         *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v2));
            ++v2;
        } while (v2 < v3);
    }
    result = *(_DWORD *)(a1 + 10692);
    if (*(_DWORD *)(*(_DWORD *)(result + 32788) + 36 * *(unsigned __int8 *)(result + 33051) + 4) &&
        !dword_100AC300) {
        v5 = *(_DWORD *)(result + 132);
        if (v5)
            sub_10074F70(v5, *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v3));
        v6 = *(_DWORD *)(*(_DWORD *)(a1 + 10692) + 136);
        if (v6)
            sub_10074F70(v6, *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v3 + 4));
        v7 = *(_DWORD *)(*(_DWORD *)(a1 + 10692) + 140);
        if (v7)
            sub_10074F70(v7, *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v3 + 8));
        result = *(_DWORD *)(*(_DWORD *)(a1 + 10692) + 144);
        if (result)
            result = sub_10074F70(result, *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v3 + 12));
    }
    return result;
}
// 100AC300: using guessed type int dword_100AC300;
