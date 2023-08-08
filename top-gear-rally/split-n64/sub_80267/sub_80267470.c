#include "types-n64.h"
//----- (80267470) --------------------------------------------------------
int __fastcall sub_80267470(_DWORD *a1, _DWORD *a2, int a3) {
    float v4[16]; // [sp+18h] [-C0h] BYREF
    float v5[16]; // [sp+58h] [-80h] BYREF
    float v6[16]; // [sp+98h] [-40h] BYREF

    sub_80261088((int)v6, a1);
    sub_80261088((int)v5, a2);
    sub_80260940(v6, v5, (int)v4);
    return sub_80260ED0(v4, a3);
}
