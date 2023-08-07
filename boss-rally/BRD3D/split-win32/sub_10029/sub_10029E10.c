#include "../../types-win32.h"
//----- (10029E10) --------------------------------------------------------
int __cdecl sub_10029E10(int a1, int a2, int a3) {
    int v3;     // esi
    int result; // eax
    int v5;     // edx
    int v6;     // esi
    int v7;     // ecx
    int v8;     // edi

    v3 = a2;
    sub_10028720(&a2, &a3, a2, a3);
    result = 0;
    if (a1 - v3 >= 0) {
        v5 = a3;
        v6 = a1 - v3 + 1;
        v7 = a2;
        do {
            v8 = v7 * v5;
            v7 >>= 1;
            v5 >>= 1;
            --v6;
            result += 4 * v8;
        } while (v6);
    }
    return result;
}
