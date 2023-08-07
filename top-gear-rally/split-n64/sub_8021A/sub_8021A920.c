#include "../../types-n64.h"
//----- (8021A920) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8021A920() {
    dword_8028AB6C = 1;
    word_802A4BE8 = 0;
    return sub_80264760((int)unkMessageQueue4);
}
// 8021A948: write access to const memory at 802A4BE8 has been detected
// 8021A93C: write access to const memory at 8028AB6C has been detected
// 80272D48: using guessed type int dword_80272D48[6];
// 8028AB6C: using guessed type int dword_8028AB6C;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
