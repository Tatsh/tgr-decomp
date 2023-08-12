#include "types-win32.h"
//----- (10043650) --------------------------------------------------------
int sub_10043650() {
    int result; // eax

    if (dword_10AA33D4) {
        if (++dword_10AA2A20 > 1)
            dword_10AA2A20 = 0;
    } else if (dword_10AA33D0[0]) {
        if (--dword_10AA2A20 < 0)
            dword_10AA2A20 = 1;
    }
    result = 1;
    dword_10B4E1D8 = dword_100AC538[dword_10AA2A20];
    return result;
}
// 100AC538: using guessed type int dword_100AC538[];
// 10AA2A20: using guessed type int dword_10AA2A20;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
// 10B4E1D8: using guessed type int dword_10B4E1D8;
