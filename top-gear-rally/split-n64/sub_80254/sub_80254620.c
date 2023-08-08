#include "types-n64.h"
//----- (80254620) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80254620() {
    int v0;  // $v0
    int v1;  // $v1
    int v3;  // $v0
    int *v4; // $s1
    int i;   // $s0
    int j;   // $s0
    int *v7; // $s1
    int v8;  // [sp+64h] [-1Ch] BYREF

    word_802A4BE8 = 0;
    v0 = sub_80261CB0((int)unkMessageQueue4, (int)dword_80369EC0, 0);
    dword_802724F0 = v0;
    v1 = v0;
    if (v0 && v0 == 10) {
        if (!sub_80262370((int)unkMessageQueue4, (int)dword_8031A3F8, 0)) {
            word_802A4BE8 = 1;
            return 1;
        }
        dword_802724F0 = sub_80262660((int)dword_80369EC0);
        sub_80261CB0((int)unkMessageQueue4, (int)dword_80369EC0, 0);
        v1 = 0;
    }
    if (v1) {
        word_802A4BE8 = 1;
        return 1;
    }
    sub_802674D0((char *)dword_80369ECC, (int)dword_803163E0, 32);
    v3 = sub_802677E0((int)dword_80369EC0, &v8, dword_8036A278);
    dword_802724F0 = v3;
    if (v3) {
        if (v3 != 3) {
            word_802A4BE8 = 1;
            return 1;
        }
        if (sub_80262A80((int)dword_80369EC0)) {
            word_802A4BE8 = 1;
            return 1;
        }
    }
    v4 = dword_8036A280;
    for (i = 0; i < 16; ++i) {
        if (sub_80267930((int)dword_80369EC0, i, (int)v4))
            word_8028DDA0 = 1 << i;
        v4 += 8;
    }
    for (j = 0; j != 16; ++j) {
        v7 = &dword_8036A280[8 * j];
        debugPrint("%d: %08x %04x\n");
        if (v7[1] != 1313296965 || *((_WORD *)v7 + 4) != 13636) {
            word_802A4BE8 = 1;
            return 0;
        }
    }
    word_802A4BE8 = 1;
    return 1;
}
// 80254654: write access to const memory at 802A4BE8 has been detected
// 802546A0: write access to const memory at 802A4BE8 has been detected
// 802546E4: write access to const memory at 802A4BE8 has been detected
// 80254740: write access to const memory at 802A4BE8 has been detected
// 80254750: write access to const memory at 802A4BE8 has been detected
// 80254798: write access to const memory at 8028DDA0 has been detected
// 80254818: write access to const memory at 802A4BE8 has been detected
// 80254838: write access to const memory at 802A4BE8 has been detected
// 80254670: write access to const memory at 802724F0 has been detected
// 80254720: write access to const memory at 802724F0 has been detected
// 802546B8: write access to const memory at 802724F0 has been detected
// 802724F0: using guessed type int dword_802724F0;
// 80272D48: using guessed type int dword_80272D48[6];
// 8028DDA0: using guessed type __int16 word_8028DDA0;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 803163E0: using guessed type int dword_803163E0[8];
// 8031A3F8: using guessed type int dword_8031A3F8[26];
// 80369EC0: using guessed type int dword_80369EC0[3];
// 80369ECC: using guessed type int dword_80369ECC[23];
// 8036A278: using guessed type int dword_8036A278[2];
// 8036A280: using guessed type int dword_8036A280[408];
