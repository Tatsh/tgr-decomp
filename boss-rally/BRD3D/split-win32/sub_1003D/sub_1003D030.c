#include "types-win32.h"
//----- (1003D030) --------------------------------------------------------
int __cdecl sub_1003D030(_DWORD *a1) {
    _DWORD *v1; // eax

    if (dword_10AA29D4) {
        v1 = *(_DWORD **)(dword_10AA29D4 + 8 * dword_10AA2880 + 122440);
        if (v1) {
            *a1 = *v1;
            a1[1] = v1[1];
            a1[2] = v1[2];
            a1[3] = v1[3];
        }
    }
    return 0;
}
// 10AA2880: using guessed type int dword_10AA2880;
// 10AA29D4: using guessed type int dword_10AA29D4;
