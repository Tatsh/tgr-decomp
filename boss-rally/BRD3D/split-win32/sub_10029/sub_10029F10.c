#include "../../types-win32.h"
//----- (10029F10) --------------------------------------------------------
void __cdecl sub_10029F10(_DWORD *a1) {
    unsigned int v1; // eax

    if (dword_104D51AC == 1) {
        v1 = 2 * (((a1[1] >> 12) & 0xFFF) - ((*a1 >> 12) & 0xFFF) + 1) *
             ((a1[1] & 0xFFF) - (*a1 & 0xFFF) + 1);
        dword_10575434 = dword_104D51BC;
        qmemcpy(off_100A7DF0, (const void *)dword_104D51BC, v1);
        dword_104D51AC = 7;
    }
}
// 100A7DF0: using guessed type void *off_100A7DF0;
// 104D51AC: using guessed type int dword_104D51AC;
// 104D51BC: using guessed type int dword_104D51BC;
// 10575434: using guessed type int dword_10575434;
