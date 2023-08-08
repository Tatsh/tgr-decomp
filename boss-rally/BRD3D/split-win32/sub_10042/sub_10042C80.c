#include "../types-win32.h"
//----- (10042C80) --------------------------------------------------------
int sub_10042C80() {
    if (dword_10AA33D4) {
        if (++dword_100AC65C > 7) {
            dword_100AC65C = 0;
            g_HandlingType = 0;
            return 1;
        }
    } else if (dword_10AA33D0) {
        if (--dword_100AC65C < 0)
            dword_100AC65C = 7;
    }
    g_HandlingType = dword_100AC65C;
    return 1;
}
// 10042C80: using guessed type int sub_10042C80();
// 10094350: using guessed type int g_HandlingType;
// 100AC65C: using guessed type int dword_100AC65C;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
