#include "../../types-n64.h"
//----- (8021196C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int *__fastcall sub_8021196C(int a1) {
    int *result; // $v0

    if (a1 < 2) {
        sub_8022F5D0(10);
        sub_8022F4F8();
        sub_8022F504();
        formatter("%wwPush up or down to adjust", 160, 90);
    }
    result = (int *)sub_80214E0C(2);
    if (result) {
        dword_803163A0 = 0;
    } else {
        result = dword_8036A8E0;
        dword_8036A8E0[0] = 0;
        flt_8036A8F8 = 0.0;
    }
    return result;
}
// 802119D4: write access to const memory at 803163A0 has been detected
// 80211A14: write access to const memory at 803163A4 has been detected
// 802119E4: write access to const memory at 8036A8E0 has been detected
// 802119EC: write access to const memory at 8036A8F8 has been detected
// 80211A24: write access to const memory at 8036A8E0 has been detected
// 80211A28: write access to const memory at 8036A8F8 has been detected
// 803163A0: using guessed type int dword_803163A0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036A8F8: using guessed type float flt_8036A8F8;
