#include "types-n64.h"
//----- (80218104) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80218104() {
    int result; // $v0

    result = 0;
    dword_8028A858 = 8;
    MEMORY[0] = -1174399998;
    MEMORY[4] = 0;
    return result;
}
// 8021815C: write access to const memory at 8028A858 has been detected
// 80218178: write access to const memory at 8028A858 has been detected
// 80218198: write access to const memory at 8028A858 has been detected
// 802181B8: write access to const memory at 8028A858 has been detected
// 80218214: write access to const memory at 8028A858 has been detected
// 80218284: write access to const memory at 8028A858 has been detected
// 80218298: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
