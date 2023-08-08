#include "../types-win32.h"
//----- (100586D0) --------------------------------------------------------
int __cdecl sub_100586D0(int a1) {
    int v1;  // ecx
    int *v2; // eax

    v1 = 0;
    v2 = dword_10AA2538;
    while (*v2 != a1) {
        v2 += 3;
        ++v1;
        if ((int)v2 >= (int)&dword_10AA2598)
            return 0;
    }
    return dword_10AA253C[3 * v1];
}
// 10AA2538: using guessed type int dword_10AA2538[];
// 10AA253C: using guessed type int dword_10AA253C[];
// 10AA2598: using guessed type int dword_10AA2598;
