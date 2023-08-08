#include "types-win32.h"
//----- (10042DC0) --------------------------------------------------------
int sub_10042DC0() {
    int result; // eax

    if (dword_10AA33D4) {
        if (++dword_100AC64C > 2)
            dword_100AC64C = 0;
    } else if (dword_10AA33D0) {
        if (--dword_100AC64C < 0)
            dword_100AC64C = 2;
    }
    result = 1;
    g_UltraCarHeader = (void *)dword_100AC4A0[dword_100AC64C];
    return result;
}
// 10042DC0: using guessed type int sub_10042DC0();
// 100AC64C: using guessed type int dword_100AC64C;
// 10AA33D0: using guessed type int dword_10AA33D0;
// 10AA33D4: using guessed type int dword_10AA33D4;
