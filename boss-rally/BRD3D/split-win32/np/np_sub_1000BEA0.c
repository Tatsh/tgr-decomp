#include "types-win32.h"
//----- (1000BEA0) --------------------------------------------------------
void __cdecl np_sub_1000BEA0(int a1, int *a2) {
    int v2; // eax
    int v3; // eax

    v2 = *a2;
    if ((unsigned int)*a2 > 0x21) {
        if (v2 == 263)
            np_sub_10003580(a1, a2[3], a2[4], a2[2]);
    } else if (*a2 != 33) {
        v3 = v2 - 3;
        if (v3) {
            if (v3 == 2 && !dword_100AC300)
                np_sub_10005FE0(a2[2]);
        }
    }
}
// 100AC300: using guessed type int dword_100AC300;
