#include "../../types-n64.h"
//----- (80211A3C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_80211A3C() {
    int v0; // $v0

    dword_80271FA4 = -1;
    dword_80271FA0 = -1;
    sub_8020C408((int)off_80272468, &dword_803163A8);
    sub_80214A3C();
    dword_80271FC8 = (int)sub_8021196C;
    dword_80271FB0 = (int)dword_8027205C;
    dword_80271FB4 = 22;
    dword_80271FB8 = 9;
    dword_80271FBC = 280;
    dword_80271FC0 = 42;
    dword_803163AC = 0;
    dword_802724E0 = 1;
    sub_80260DD4((char *)dword_803163B0, "BGM Volume: %d", 10);
    sub_80260DD4((char *)dword_803163C8, "SFX Volume: %d", 10);
    off_802723DC = dword_803163B0;
    off_802723F0 = dword_803163C8;
    off_80272404 = "Units: mph";
    v0 = sub_8020AD5C(
        "OPTIONS", -1291329915, (int)off_80272468, &dword_803163AC, 0, 0, 0, 0, 128, 64, 32);
    if (v0 != 1 && v0 == 2) {
        sub_8021C6E4((int)sub_802111E0);
        dword_802724E0 = 0;
    }
}
// 80211A54: write access to const memory at 80271FA4 has been detected
// 80211A68: write access to const memory at 80271FA0 has been detected
// 80211A88: write access to const memory at 80271FC8 has been detected
// 80211A98: write access to const memory at 80271FB0 has been detected
// 80211AA8: write access to const memory at 80271FB4 has been detected
// 80211AB4: write access to const memory at 80271FB8 has been detected
// 80211AC8: write access to const memory at 80271FBC has been detected
// 80211AD8: write access to const memory at 80271FC0 has been detected
// 80211ADC: write access to const memory at 803163AC has been detected
// 80211AE8: write access to const memory at 802724E0 has been detected
// 80211CE8: write access to const memory at 802724E0 has been detected
// 80211CF8: write access to const memory at 80271FA0 has been detected
// 80211D08: write access to const memory at 80271FA4 has been detected
// 80211D24: write access to const memory at 803163A4 has been detected
// 80211D30: write access to const memory at 803163A0 has been detected
// 80211D40: write access to const memory at 802724E0 has been detected
// 80211D58: write access to const memory at 802724E0 has been detected
// 80211B54: write access to const memory at 802723DC has been detected
// 80211B5C: write access to const memory at 802723F0 has been detected
// 80211C48: write access to const memory at 802723D8 has been detected
// 80211C9C: write access to const memory at 802723D8 has been detected
// 80211CD8: write access to const memory at 802723D8 has been detected
// 80211B6C: write access to const memory at 80272404 has been detected
// 80271FA0: using guessed type int dword_80271FA0;
// 80271FA4: using guessed type int dword_80271FA4;
// 80271FA8: using guessed type int dword_80271FA8;
// 80271FB0: using guessed type int dword_80271FB0;
// 80271FB4: using guessed type int dword_80271FB4;
// 80271FB8: using guessed type int dword_80271FB8;
// 80271FBC: using guessed type int dword_80271FBC;
// 80271FC0: using guessed type int dword_80271FC0;
// 80271FC8: using guessed type int dword_80271FC8;
// 8027205C: using guessed type int dword_8027205C[3];
// 802723D4: using guessed type int dword_802723D4;
// 802723DC: using guessed type int *off_802723DC;
// 802723F0: using guessed type int *off_802723F0;
// 80272404: using guessed type char *off_80272404;
// 80272468: using guessed type int **off_80272468[2];
// 802724E0: using guessed type int dword_802724E0;
// 803163A0: using guessed type int dword_803163A0;
// 803163A4: using guessed type int dword_803163A4;
// 803163A8: using guessed type int dword_803163A8;
// 803163AC: using guessed type int dword_803163AC;
// 803163B0: using guessed type int dword_803163B0[6];
// 803163C8: using guessed type int dword_803163C8[6];
