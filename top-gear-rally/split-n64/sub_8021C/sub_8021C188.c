#include "../../types-n64.h"
//----- (8021C188) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8021C188() {
    char v0; // $t0
    int v1;  // $v0
    char v2; // [sp+2Fh] [-1h] BYREF

    sub_8021A9B4();
    word_802A4BE8 = 0;
    sub_8021C6E4((int)sub_80208570);
    byte_80270840 = 0;
    while (sub_80208570 == (void (*)()) - 1282369048)
        sub_80208570();
    sub_80261940((int)unkMessageQueue4, &v2);
    if ((v2 & 1) != 0) {
        byte_8028ADF0 = 1;
        debugPrint("\nInitializing controller pak...\n");
        dword_802724F0 = sub_80261CB0((int)unkMessageQueue4, (int)dword_80369EC0, 0);
        sub_80260B20((int)dword_803163E0, (char *)dword_80369ECC, 32);
        byte_80316420 = 1;
        v0 = v2;
    } else {
        sub_8021C6E4((int)sub_80208570);
        byte_80270840 = 1;
        if (sub_80208570 == (void (*)()) - 1282369048) {
            do
                sub_80208570();
            while (sub_80208570 == (void (*)()) - 1282369048);
            v0 = v2;
        } else {
            v0 = v2;
        }
    }
    if ((v0 & 2) != 0) {
        v1 = sub_80261CB0((int)unkMessageQueue4, (int)dword_80369F28, 1);
        dword_802724F0 = v1;
        if (v1) {
            if (v1 == 10)
                sub_80262370((int)unkMessageQueue4, (int)dword_8031A460, 1);
        } else {
            sub_80260B20((int)dword_80316400, (char *)dword_80369F34, 32);
            byte_80316421 = 1;
        }
    }
    sub_80255910(dword_8036A8E0, 0x4000);
    sub_8021C6E4((int)sub_802534DC);
    while (sub_802534DC == (void (*)()) - 1282369048)
        sub_802534DC();
    if (!sub_80254620()) {
        sub_8021C6E4((int)sub_80208570);
        byte_80270840 = 2;
        while (sub_80208570 == (void (*)()) - 1282369048)
            sub_80208570();
    }
    word_802A4BE8 = 1;
}
// 8021C1A4: write access to const memory at 802A4BE8 has been detected
// 8021C1CC: write access to const memory at 80270840 has been detected
// 8021C22C: write access to const memory at 80270840 has been detected
// 8021C270: write access to const memory at 8028ADF0 has been detected
// 8021C294: write access to const memory at 802724F0 has been detected
// 8021C2E8: write access to const memory at 80270840 has been detected
// 8021C328: write access to const memory at 80316420 has been detected
// 8021C3A8: write access to const memory at 80316421 has been detected
// 8021C424: write access to const memory at 80270840 has been detected
// 8021C460: write access to const memory at 802A4BE8 has been detected
// 8021C360: write access to const memory at 802724F0 has been detected
// 80270840: using guessed type char byte_80270840;
// 802724F0: using guessed type int dword_802724F0;
// 80272D48: using guessed type int dword_80272D48[6];
// 8028ADF0: using guessed type char byte_8028ADF0;
// 802A4BE8: using guessed type __int16 word_802A4BE8;
// 803163E0: using guessed type int dword_803163E0[8];
// 80316400: using guessed type int dword_80316400[8];
// 80316420: using guessed type char byte_80316420;
// 80316421: using guessed type char byte_80316421;
// 8031A460: using guessed type int dword_8031A460[78];
// 8031B318: using guessed type int dword_8031B318;
// 80369EC0: using guessed type int dword_80369EC0[3];
// 80369ECC: using guessed type int dword_80369ECC[23];
// 80369F28: using guessed type int dword_80369F28[3];
// 80369F34: using guessed type int dword_80369F34[75];
// 8036A8E0: using guessed type int dword_8036A8E0[];
