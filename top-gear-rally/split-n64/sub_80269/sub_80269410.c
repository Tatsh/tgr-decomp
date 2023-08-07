#include "../../types-n64.h"
//----- (80269410) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80269410() {
    dword_802A6280 = 1;
    osCreateMesgQueue(unk_80381888, (int)unk_80381880, 1);
    return sub_802654B0((int)unk_80381888, 0, 0);
}
// 80269428: write access to const memory at 802A6280 has been detected
// 802A6280: using guessed type int dword_802A6280;
// 80381880: using guessed type int dword_80381880[2];
// 80381888: using guessed type int dword_80381888[6];
