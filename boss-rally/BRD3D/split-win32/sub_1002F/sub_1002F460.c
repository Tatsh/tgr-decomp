#include "types-win32.h"
//----- (1002F460) --------------------------------------------------------
int sub_1002F460() {
    int v0;     // ecx
    int v1;     // ecx
    int result; // eax

    v0 = (unsigned __int8)byte_100B3820[24 * *((unsigned __int8 *)dword_10ACED34 + 4) +
                                        2 * *((unsigned __int8 *)dword_10ACED34 + 5)];
    g_chosenTrack = v0;
    if ((*(_BYTE *)dword_10ACED34 & 1) != 0) {
        if (v0 >= 6)
            v1 = v0 - 6;
        else
            v1 = v0 + 6;
        g_chosenTrack = v1;
    }
    result =
        *((unsigned __int8 *)dword_10ACED34 + 5) + 12 * *((unsigned __int8 *)dword_10ACED34 + 4);
    dword_104BBE08 = (unsigned __int8)byte_100B3821[2 * result];
    return result;
}
// 100B380C: using guessed type int g_chosenTrack;
// 104BBE08: using guessed type int dword_104BBE08;
