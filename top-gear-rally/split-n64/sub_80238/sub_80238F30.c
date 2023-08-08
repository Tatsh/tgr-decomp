#include "types-n64.h"
//----- (80238F30) --------------------------------------------------------
int sub_80238F30() {
    float v1; // [sp+24h] [-4h]

    v1 = MEMORY[0xFE4];
    sub_80219A78(8, 2045259632, 312, -884975911);
    if (v1 < 0.0)
        v1 = 0.0;
    sub_80237980();
    sub_8023880C();
    sub_80238AB8();
    sub_80238DD4();
    sub_8022F4F8();
    sub_8022F520();
    sub_80260DD4((int)dword_80361C30, "%%yw%.0f", (float)(v1 / 1.609344));
    sub_8022F5D0(20);
    formatter((const char *)dword_80361C30, 266, 1160283650);
    sub_8022F5D0(15);
    sub_8022F514();
    return formatter("%wwmph", 266, 1160283650);
}
// 8028AAF0: using guessed type int dword_8028AAF0;
// 8028AAF4: using guessed type int dword_8028AAF4;
// 8028C7B4: using guessed type int dword_8028C7B4[4];
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 80361C30: using guessed type int dword_80361C30[4];
