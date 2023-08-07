#include "../../types-win32.h"
//----- (10019300) --------------------------------------------------------
_DWORD *__cdecl sub_10019300(int a1, int a2, int a3) {
    _DWORD *v3; // eax

    v3 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v3 = -1241513984;
    v3[1] = 1;
    if (byte_104B035C) {
        if (byte_104B035C == 1) {
            dword_104B0340 = a2 - sub_100193C0((char *)a1, dword_104B0348);
            dword_104B0344 = a3;
            return sub_10018590((_BYTE *)a1);
        }
        if (byte_104B035C == 2) {
            dword_104B0340 = a2 - (sub_100193C0((char *)a1, dword_104B0348) >> 1);
            dword_104B0344 = a3;
            return sub_10018590((_BYTE *)a1);
        }
    } else {
        dword_104B0340 = a2;
    }
    dword_104B0344 = a3;
    return sub_10018590((_BYTE *)a1);
}
// 104B0340: using guessed type int dword_104B0340;
// 104B0344: using guessed type int dword_104B0344;
// 104B0348: using guessed type int dword_104B0348;
// 104B035C: using guessed type char byte_104B035C;
// 106C0680: using guessed type int dword_106C0680;
