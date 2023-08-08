#include "types-win32.h"
//----- (10071560) --------------------------------------------------------
BOOL sub_10071560() {
    int i;   // ebp
    int *v1; // esi
    int v2;  // edi

    dword_1178FEE8 = getTicks();
    dword_1178FEEC = sub_100713A0();
    for (i = 0; i < 9648; i += 603) {
        *(HANDLE *)((char *)&dword_11786828 + i * 4) = CreateMutexA(0, 0, 0);
        v1 = &dword_1178FEF8[i];
        v2 = 16;
        do {
            *v1 = (int)CreateMutexA(0, 0, 0);
            v1 += 9648;
            --v2;
        } while (v2);
    }
    return sub_100713C0();
}
// 100713A0: using guessed type int sub_100713A0(void);
// 1178FEE8: using guessed type int dword_1178FEE8;
// 1178FEEC: using guessed type int dword_1178FEEC;
// 1178FEF8: using guessed type int dword_1178FEF8[];
