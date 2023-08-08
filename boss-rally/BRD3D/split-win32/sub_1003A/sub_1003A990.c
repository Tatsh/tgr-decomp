#include "../types-win32.h"
//----- (1003A990) --------------------------------------------------------
int sub_1003A990() {
    int result; // eax
    int v1;     // ebp
    int v2;     // esi
    int v3;     // edi
    int i;      // edx
    int j;      // ecx

    memset(dword_10A9BED0, 0, sizeof(dword_10A9BED0));
    memset32(dword_10A9BDD0, 64, 0x40u);
    dword_10A9BBC0 = 0;
    memset(dword_10A9BCD0, 0, sizeof(dword_10A9BCD0));
    dword_10A9BBC4 = 0;
    memset32(dword_10A9BBD0, 64, 0x40u);
    dword_10A9BBC8 = 63;
    dword_10A9BBCC = 63;
    sub_1003A6B0(dword_106C3310, dword_106C3314, dword_106C331C, dword_106C3320);
    sub_1003A6B0(dword_106C3310, dword_106C3314, dword_106C3328, dword_106C332C);
    sub_1003A6B0(dword_106C3310, dword_106C3314, dword_106C3334, dword_106C3338);
    sub_1003A6B0(dword_106C3310, dword_106C3314, dword_106C3340, dword_106C3344);
    sub_1003A6B0(dword_106C334C, dword_106C3350, dword_106C331C, dword_106C3320);
    sub_1003A6B0(dword_106C334C, dword_106C3350, dword_106C3328, dword_106C332C);
    sub_1003A6B0(dword_106C334C, dword_106C3350, dword_106C3334, dword_106C3338);
    sub_1003A6B0(dword_106C334C, dword_106C3350, dword_106C3340, dword_106C3344);
    sub_1003A6B0(dword_106C331C, dword_106C3320, dword_106C3328, dword_106C332C);
    sub_1003A6B0(dword_106C3328, dword_106C332C, dword_106C3334, dword_106C3338);
    sub_1003A6B0(dword_106C3334, dword_106C3338, dword_106C3340, dword_106C3344);
    sub_1003A6B0(dword_106C3340, dword_106C3344, dword_106C331C, dword_106C3320);
    result = dword_10A9BBC8;
    if (dword_10A9BBC8 < 0) {
        result = 0;
        dword_10A9BBC8 = 0;
    }
    v1 = dword_10A9BBCC;
    if (dword_10A9BBCC < 0) {
        v1 = 0;
        dword_10A9BBCC = 0;
    }
    v2 = dword_10A9BBC0;
    if (dword_10A9BBC0 >= 64) {
        v2 = 63;
        dword_10A9BBC0 = 63;
    }
    v3 = dword_10A9BBC4;
    if (dword_10A9BBC4 >= 64) {
        v3 = 63;
        dword_10A9BBC4 = 63;
    }
    for (; result <= v2; ++result) {
        for (i = v1; result < dword_10A9BBD0[i] || result > dword_10A9BCD0[i]; ++i)
            ;
        for (j = v3; result < dword_10A9BBD0[j] || result > dword_10A9BCD0[j]; --j)
            ;
        dword_10A9BDD0[result] = i;
        dword_10A9BED0[result] = j;
    }
    return result;
}
// 10A9BBC0: using guessed type int dword_10A9BBC0;
// 10A9BBC4: using guessed type int dword_10A9BBC4;
// 10A9BBC8: using guessed type int dword_10A9BBC8;
// 10A9BBCC: using guessed type int dword_10A9BBCC;
// 10A9BBD0: using guessed type int dword_10A9BBD0[];
