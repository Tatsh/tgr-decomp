#include "types-n64.h"
//----- (80260E78) --------------------------------------------------------
int __fastcall sub_80260E78(int a1, float a2, float a3, float a4) {
    float v5[16]; // [sp+28h] [-40h] BYREF

    sub_80260FD0(v5);
    v5[12] = a2;
    v5[13] = a3;
    v5[14] = a4;
    return sub_80260ED0(v5, a1);
}
