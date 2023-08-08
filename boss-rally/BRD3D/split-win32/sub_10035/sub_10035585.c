#include "../types-win32.h"
//----- (10035585) --------------------------------------------------------
int __cdecl sub_10035585(int a1, __int16 a2, int a3) {
    int result; // eax
    int v4;     // [esp+0h] [ebp-Ch]
    int v5;     // [esp+4h] [ebp-8h]
    int i;      // [esp+8h] [ebp-4h]
    __int16 v7; // [esp+1Ch] [ebp+10h]

    result = ~a3;
    v7 = ~(_WORD)a3;
    if (*(_DWORD *)(a1 + 4)) {
        v4 = **(_DWORD **)(a1 + 4);
        for (i = 0;; ++i) {
            result = i;
            if (i >= v4)
                break;
            v5 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i + 4);
            *(_WORD *)(v5 + 16) |= a2;
            *(_WORD *)(v5 + 16) &= v7;
        }
    }
    return result;
}
