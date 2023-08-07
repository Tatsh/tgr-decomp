#include "../../types-win32.h"
//----- (10029410) --------------------------------------------------------
int __cdecl sub_10029410(int a1) {
    int result; // eax
    int v2;     // ecx

    result = dword_104D51AC;
    if (dword_104D51AC) {
        if (!dword_10575438)
            dword_10575438 = a1;
        result = sub_10029470();
        if (result != -1) {
            v2 = dword_105553FC;
            result = result & 0xFFFFFF | 0xDC000000;
            *(_DWORD *)dword_105553FC = result;
            *(_DWORD *)(v2 + 4) = (dword_10575438 - dword_105553FC) >> 3;
        }
        dword_104D51AC = 0;
    }
    return result;
}
// 104D51AC: using guessed type int dword_104D51AC;
// 105553FC: using guessed type int dword_105553FC;
// 10575438: using guessed type int dword_10575438;
