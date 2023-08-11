#include "types-win32.h"
//----- (10019300) --------------------------------------------------------
_DWORD *__cdecl text_10019300(char *text, int x, int y) {
    _DWORD *v3; // eax

    v3 = (_DWORD *)dword_106C0680;
    dword_106C0680 += 8;
    *v3 = -1241513984;
    v3[1] = 1;
    if (byte_104B035C) {
        if (byte_104B035C == 1) {
            gMessageX = x - sub_100193C0(text, dword_104B0348);
            gMessageY = y;
            return text_10018590(text);
        }
        if (byte_104B035C == 2) {
            gMessageX = x - (sub_100193C0(text, dword_104B0348) >> 1);
            gMessageY = y;
            return text_10018590(text);
        }
    } else {
        gMessageX = x;
    }
    gMessageY = y;
    return text_10018590(text);
}
// 104B0340: using guessed type int gMessageX;
// 104B0344: using guessed type int gMessageY;
// 104B0348: using guessed type int dword_104B0348;
// 104B035C: using guessed type char byte_104B035C;
// 106C0680: using guessed type int dword_106C0680;
