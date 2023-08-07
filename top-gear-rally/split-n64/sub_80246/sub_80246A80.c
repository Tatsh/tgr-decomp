#include "../../types-n64.h"
//----- (80246A80) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 sub_80246A80() {
    __int64 result; // $v1

    LODWORD(result) = 0;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1174399998;
    return result;
}
// 80246AB8: write access to const memory at 8028A858 has been detected
// 80246AD4: write access to const memory at 8028A858 has been detected
// 80246AF0: write access to const memory at 8028A858 has been detected
// 80246B14: write access to const memory at 8028A858 has been detected
// 80246B64: write access to const memory at 8028A858 has been detected
// 80246BA8: write access to const memory at 8028A858 has been detected
// 80246BBC: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
