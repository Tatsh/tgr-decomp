#include "types-n64.h"
//----- (802173C8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *sub_802173C8() {
    int *result; // $v0

    result = &dword_8028AA34;
    dword_8028AA34 = 0;
    dword_8028AA30 = 0;
    dword_8028AA2C = 0;
    dword_8028AA3C = 0;
    dword_8028AA38 = 0;
    dword_8028AA0C = 0;
    dword_8028AA08 = 0;
    dword_8028AA10 = 0;
    return result;
}
// 802173E8: write access to const memory at 8028AA2C has been detected
// 802173F4: write access to const memory at 8028AA38 has been detected
// 8021741C: write access to const memory at 8028AA10 has been detected
// 802173D8: write access to const memory at 8028AA34 has been detected
// 802173DC: write access to const memory at 8028AA30 has been detected
// 802173F0: write access to const memory at 8028AA3C has been detected
// 8021740C: write access to const memory at 8028AA0C has been detected
// 80217410: write access to const memory at 8028AA08 has been detected
// 8028AA08: using guessed type int dword_8028AA08;
// 8028AA0C: using guessed type int dword_8028AA0C;
// 8028AA10: using guessed type int dword_8028AA10;
// 8028AA2C: using guessed type int dword_8028AA2C;
// 8028AA30: using guessed type int dword_8028AA30;
// 8028AA34: using guessed type int dword_8028AA34;
// 8028AA38: using guessed type int dword_8028AA38;
// 8028AA3C: using guessed type int dword_8028AA3C;
