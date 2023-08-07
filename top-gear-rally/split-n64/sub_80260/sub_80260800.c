#include "../../types-n64.h"
//----- (80260800) --------------------------------------------------------
int __fastcall sub_80260800(int a1, int a2, int a3, int a4) {
    int result; // $v0

    result = sub_80260FD0((float *)a1);
    *(_DWORD *)a1 = a2;
    *(_DWORD *)(a1 + 20) = a3;
    *(float *)(a1 + 60) = 1.0;
    *(_DWORD *)(a1 + 40) = a4;
    return result;
}
