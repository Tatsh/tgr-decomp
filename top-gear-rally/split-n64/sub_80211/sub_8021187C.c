#include "../../types-n64.h"
//----- (8021187C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021187C() {
    int result; // $v0

    dword_802723D0 = 9;
    result = 9;
    byte_802A49C4 = 43;
    return result;
}
// 802118B0: write access to const memory at 802A49C4 has been detected
// 80211894: write access to const memory at 802723D0 has been detected
// 802723D0: using guessed type int dword_802723D0;
// 802A49C4: using guessed type char byte_802A49C4;
