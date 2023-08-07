#include "../../types-n64.h"
//----- (80211150) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80211150() {
    int result; // $v0

    dword_8026FF18 = 0;
    sub_80206304();
    dword_8026FF08 = 1;
    result = sub_8021C6E4(sub_80209434);
    dword_80272380 = 1;
    return result;
}
// 80211160: write access to const memory at 8026FF18 has been detected
// 80211170: write access to const memory at 8026FF08 has been detected
// 80211184: write access to const memory at 80272380 has been detected
// 80206304: using guessed type int sub_80206304(void);
// 80209434: using guessed type int sub_80209434();
// 8021C6E4: using guessed type int __fastcall sub_8021C6E4(_DWORD);
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 80272380: using guessed type int dword_80272380;
