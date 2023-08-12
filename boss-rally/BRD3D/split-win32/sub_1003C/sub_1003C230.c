#include "types-win32.h"
//----- (1003C230) --------------------------------------------------------
int sub_1003C230() {
    np_sub_1003C020();
    uIDEvent = SetTimer(gHwnd, 1u, 0x3E8u, 0);
    dword_10A9CFFC = 1;
    return 1;
}
// 10A9CFFC: using guessed type int dword_10A9CFFC;
