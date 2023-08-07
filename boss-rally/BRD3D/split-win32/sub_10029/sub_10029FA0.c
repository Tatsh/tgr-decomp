#include "../../types-win32.h"
//----- (10029FA0) --------------------------------------------------------
void __cdecl sub_10029FA0(_DWORD *a1) {
    int v1; // ecx

    if (dword_104D51AC == 2) {
        v1 = ((a1[1] >> 12) & 0xFFF) - ((*a1 >> 12) & 0xFFF);
        dword_104C51A4 = dword_104D51BC;
        dword_105553EC = 2 * v1 + 2;
        qmemcpy(&unk_104C51A8, (const void *)dword_104D51BC, dword_105553EC);
        dword_104D51AC = 3;
    }
}
// 104C51A4: using guessed type int dword_104C51A4;
// 104D51AC: using guessed type int dword_104D51AC;
// 104D51BC: using guessed type int dword_104D51BC;
// 105553EC: using guessed type int dword_105553EC;
