#include "../../types-n64.h"
//----- (802111E0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_802111E0() {
    int v0; // $v0

    dword_80271FA4 = -1;
    dword_80271FA0 = -1;
    dword_8026FF08 = 2;
    sub_8020C408((int)&off_80272360, &dword_80316380);
    dword_80271FB0 = (int)dword_802722C0;
    dword_80271FB4 = 25;
    dword_80271FB8 = 14;
    dword_80271FBC = 280;
    dword_80271FC0 = 32;
    flt_80271FC4 = 20.0;
    dword_80272380 = 0;
    dword_80316384 = 0;
    dword_80272384 = 1;
    v0 = sub_8020AD5C(
        "TOP GEAR RALLY", -1861126107, (int)&off_80272360, &dword_80316384, 0, 0, 0, 0, 64, 64, 64);
    if (v0 == 1) {
        dword_80272070 = 0;
        dword_80272384 = -1;
    } else if (v0 == 2 || v0 == 5) {
        sub_8021C6E4((int)sub_8020686C);
        dword_80272384 = 0;
    }
}
// 802111F8: write access to const memory at 80271FA4 has been detected
// 80211200: write access to const memory at 80271FA0 has been detected
// 80211218: write access to const memory at 8026FF08 has been detected
// 80211278: write access to const memory at 80271FB0 has been detected
// 80211288: write access to const memory at 80271FB4 has been detected
// 80211294: write access to const memory at 80271FB8 has been detected
// 802112A0: write access to const memory at 80271FBC has been detected
// 802112AC: write access to const memory at 80271FC0 has been detected
// 802112C4: write access to const memory at 80271FC4 has been detected
// 802112F4: write access to const memory at 80316384 has been detected
// 802112F8: write access to const memory at 80316384 has been detected
// 80211314: write access to const memory at 80316384 has been detected
// 80211318: write access to const memory at 80272384 has been detected
// 802113DC: write access to const memory at 8026FF08 has been detected
// 802113EC: write access to const memory at 8026FF18 has been detected
// 80211414: write access to const memory at 8026FF08 has been detected
// 80211428: write access to const memory at 8026FF18 has been detected
// 80211448: write access to const memory at 8026FF08 has been detected
// 80211458: write access to const memory at 80271FA0 has been detected
// 80211468: write access to const memory at 80271FA4 has been detected
// 80211484: write access to const memory at 802724F4 has been detected
// 802114B0: write access to const memory at 80272384 has been detected
// 802114BC: write access to const memory at 80272384 has been detected
// 802113A0: write access to const memory at 80272070 has been detected
// 8021143C: write access to const memory at 80272070 has been detected
// 802112EC: write access to const memory at 80272380 has been detected
// 80211300: write access to const memory at 80272380 has been detected
// 8020686C: using guessed type int sub_8020686C();
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 80271FA0: using guessed type int dword_80271FA0;
// 80271FA4: using guessed type int dword_80271FA4;
// 80271FA8: using guessed type int dword_80271FA8;
// 80271FB0: using guessed type int dword_80271FB0;
// 80271FB4: using guessed type int dword_80271FB4;
// 80271FB8: using guessed type int dword_80271FB8;
// 80271FBC: using guessed type int dword_80271FBC;
// 80271FC0: using guessed type int dword_80271FC0;
// 80271FC4: using guessed type float flt_80271FC4;
// 80272070: using guessed type int dword_80272070;
// 802722C0: using guessed type int dword_802722C0[3];
// 80272360: using guessed type char **off_80272360;
// 80272380: using guessed type int dword_80272380;
// 80272384: using guessed type int dword_80272384;
// 802724F4: using guessed type char byte_802724F4;
// 802A49C0: using guessed type int dword_802A49C0;
// 80316380: using guessed type int dword_80316380;
// 80316384: using guessed type int dword_80316384;
