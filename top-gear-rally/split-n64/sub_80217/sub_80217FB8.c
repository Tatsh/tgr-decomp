#include "types-n64.h"
//----- (80217FB8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80217FB8() {
    int result; // $v0

    result = 0;
    dword_8028A858 = 8;
    MEMORY[0] = -1174399998;
    MEMORY[4] = 0;
    return result;
}
// 80217FD0: write access to const memory at 8028A858 has been detected
// 80217FEC: write access to const memory at 8028A858 has been detected
// 8021800C: write access to const memory at 8028A858 has been detected
// 8021802C: write access to const memory at 8028A858 has been detected
// 80218074: write access to const memory at 8028A858 has been detected
// 802180CC: write access to const memory at 8028A858 has been detected
// 802180F0: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
