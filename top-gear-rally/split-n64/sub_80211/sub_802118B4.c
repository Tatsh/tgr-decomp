#include "../../types-n64.h"
//----- (802118B4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
char *sub_802118B4() {
    char *result; // $v0

    result = dword_802723D0;
    byte_802A49C4 = 48;
    byte_802A49CC = -1;
    return result;
}
// 802118D8: write access to const memory at 802A49C4 has been detected
// 802118F4: write access to const memory at 802A49CC has been detected
// 802723D4: using guessed type int dword_802723D4;
// 802A49C4: using guessed type char byte_802A49C4;
// 802A49CC: using guessed type char byte_802A49CC;
