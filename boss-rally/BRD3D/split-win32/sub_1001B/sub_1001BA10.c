#include "../../types-win32.h"
//----- (1001BA10) --------------------------------------------------------
int __cdecl sub_1001BA10(#468 * a1) {
    int v2; // ecx

    if (!a1)
        return -2147024809;
    v2 = dword_104BBE24;
    *((_DWORD *)a1 + 204) = 0;
    *((_DWORD *)a1 + 203) = v2;
    if (dword_104BBE24)
        *(_DWORD *)(dword_104BBE24 + 816) = a1;
    dword_104BBE24 = (int)a1;
    if (!gameSpecificUnk1_instance0)
        gameSpecificUnk1_instance0 = (gameSpecificUnk1 *)a1;
    ++dword_104BBE1C;
    return 0;
}
// 104BBE1C: using guessed type int dword_104BBE1C;
// 104BBE24: using guessed type int dword_104BBE24;
