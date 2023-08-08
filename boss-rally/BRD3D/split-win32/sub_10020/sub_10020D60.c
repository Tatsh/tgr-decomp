#include "types-win32.h"
//----- (10020D60) --------------------------------------------------------
int __cdecl sub_10020D60(_DWORD *a1) {
    int v1; // eax

    if ((*a1 & 0xFF0000) == 0) {
        if (dword_104C01A4 == 9)
            exit(1);
        v1 = dword_104C01A4;
        dword_104C16A8[dword_104C01A4] = (int)(a1 + 2);
        dword_104C01A4 = v1 + 1;
    }
    return a1[1];
}
// 104C01A4: using guessed type int dword_104C01A4;
