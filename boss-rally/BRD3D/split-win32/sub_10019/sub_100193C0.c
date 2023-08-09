#include "types-win32.h"
//----- (100193C0) --------------------------------------------------------
int __cdecl sub_100193C0(char *a1, int a2) {
    int v2;   // ebp
    int v3;   // edi
    int *v4;  // ebx
    char *v5; // esi
    char i;   // al
    char v7;  // cl
    int v9;   // [esp+18h] [ebp+8h]

    v2 = 0;
    v3 = a2;
    if (MEMORY[0x106C65E4])
        v3 = 2 * a2;
    if (dword_100B8C90 > 1 || v3 < 25) {
        v9 = 20;
        v4 = dword_100A6150;
    } else {
        v9 = 40;
        v4 = dword_100A6070;
    }
    v5 = a1;
    for (i = *a1; i; i = *++v5) {
        if (i < 33) {
            v2 += 14 * v3 / 40;
            continue;
        }
        if (i == 37) {
            v7 = v5[1];
            if (v7) {
                if (v7 == 37) {
                    ++v5;
                } else {
                    if (v7 == 105 || v7 == 110) {
                        ++v5;
                        continue;
                    }
                    if (v5[2]) {
                        v5 += 2;
                        continue;
                    }
                }
            }
        }
        v2 += v3 * (v4[byte_100A5FEF[i] + 1] - v4[byte_100A5FEF[i]]) / v9;
    }
    if (MEMORY[0x106C65E4])
        v2 >>= 1;
    return v2;
}
// 100A6070: using guessed type int dword_100A6070[];
// 100A6150: using guessed type int dword_100A6150[];
// 100B8C90: using guessed type int dword_100B8C90;
// 106C65E4: using guessed type int dword_106C65E4;
