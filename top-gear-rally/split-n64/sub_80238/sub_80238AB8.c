#include "types-n64.h"
//----- (80238AB8) --------------------------------------------------------
void sub_80238AB8() {
    int v0;                 // $v1
    int v1;                 // [sp+30h] [-28h]
    int v2;                 // [sp+34h] [-24h]
    const char *v3;         // [sp+40h] [-18h]
    unsigned __int8 v4[20]; // [sp+44h] [-14h] BYREF

    if (MEMORY[0xF78] >= 3)
        sub_80260DD4((int)v4, "FINISHED");
    else
        sub_80260DD4((int)v4, "%%y1%s%d/%d", "LAP ", MEMORY[0xF78] + 1, 3);
    sub_8022F4F8();
    sub_8022F514();
    sub_8022F5D0(15);
    formatter((const char *)v4, -174233188, 2045259652);
    sub_8022F4DC();
    sub_8022F514();
    sub_8022F530(255, 240, 125, 255, 120, 0);
    sub_80260DD4((int)v4, "%d", MEMORY[0xFAC] + 1);
    v0 = 0;
    if (MEMORY[0xFAC]) {
        if (MEMORY[0xFAC] == 1) {
            v3 = "nd";
            v0 = 1;
        } else if (MEMORY[0xFAC] == 2) {
            v3 = "rd";
        } else {
            v3 = (const char *)&dword_802AA120;
            v0 = 1;
        }
    } else {
        v3 = "st";
        v0 = -3;
    }
    v2 = v0;
    sub_8022F5D0(40);
    v1 = sub_8022F720(v4, 40);
    formatter((const char *)v4, -174233191, 1160283708);
    sub_8022F5D0(20);
    formatter(v3, v2 - 174233190 + v1 + 3, 1160283694);
    sub_8022F4EC();
}
// 8026FF18: using guessed type int dword_8026FF18;
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 802AA120: using guessed type int dword_802AA120;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D4: using guessed type int dword_8031B2D4;
