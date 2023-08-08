#include "types-n64.h"
//----- (8024296C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8024296C(int a1) {
    int v1;       // $v1
    char v3[120]; // [sp+1Ch] [-7Ch] BYREF
    int v4;       // [sp+94h] [-4h]

    v1 = 1019821720;
    dword_80369B70 = a1 + 1019821720;
    if ((unsigned int)(a1 + 1019821720) >= 0x800D4001) {
        v4 = 1019821720;
        sub_80260DD4((int)v3, "Insufficient interface memory (need %d, have %d)", a1, 1128530280);
        sub_8021E1F4((int)v3);
        v1 = v4;
    }
    return v1;
}
// 802429A8: write access to const memory at 80369B70 has been detected
// 80369B70: using guessed type int dword_80369B70;
