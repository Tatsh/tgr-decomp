#include "types-win32.h"
//----- (1002BF00) --------------------------------------------------------
int __cdecl sub_1002BF00(int a1, int a2, int a3) {
    int result; // eax
    int v4;     // ecx

    if (dword_1067B54C < 2048) {
        result = 3 * dword_1067B54C;
        v4 = dword_1067B54C + 1;
        dword_10675548[result] = a1;
        dword_1067554C[result] = a2;
        dword_10675550[result] = a3;
        dword_1067B54C = v4;
    }
    return result * 4;
}
// 10675548: using guessed type int dword_10675548[];
// 1067554C: using guessed type int dword_1067554C[];
// 1067B54C: using guessed type int dword_1067B54C;
