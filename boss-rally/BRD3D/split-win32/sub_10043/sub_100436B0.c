#include "../types-win32.h"
//----- (100436B0) --------------------------------------------------------
int sub_100436B0() {
    int result; // eax

    if (dword_10AA33D4) {
        if (++dword_10AA2A24 > 1)
            dword_10AA2A24 = 0;
    } else if (dword_10AA33D0) {
        if (--dword_10AA2A24 < 0)
            dword_10AA2A24 = 1;
    }
    result = 1;
    dword_10B4E1DC = dword_100AC540[dword_10AA2A24];
    return result;
}
// 100AC540: using guessed type int dword_100AC540[];
// 10AA2A24: using guessed type int dword_10AA2A24;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E1DC: using guessed type int dword_10B4E1DC;
