#include "types-win32.h"
//----- (10006160) --------------------------------------------------------
BOOL np_sub_10006160() {
    WaitForSingleObject(gMutex8, 0xFFFFFFFF);
    if (sub_10003460() >= dword_1022AF00)
        gIsGameMode4 = 1;
    return ReleaseMutex(gMutex8);
}
// 1022AF00: using guessed type int dword_1022AF00;
// 1022AF14: using guessed type int gIsGameMode4;
