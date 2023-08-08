#include "types-n64.h"
//----- (80233668) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 sub_80233668() {
    __int64 result; // $v1

    LODWORD(result) = 0;
    dword_8028A858 = 8;
    MEMORY[0] = 100663296;
    MEMORY[4] = dword_8028C4F0;
    return result;
}
// 80233680: write access to const memory at 8028A858 has been detected
// 802336B0: write access to const memory at 8028A858 has been detected
// 802336CC: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028C4F0: using guessed type int dword_8028C4F0[10];
