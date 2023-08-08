#include "types-n64.h"
//----- (80260E30) --------------------------------------------------------
int __fastcall sub_80260E30(int a1, int a2, int a3, int a4) {
    int result; // $v0

    result = sub_80260FD0((float *)a1);
    *(_DWORD *)(a1 + 48) = a2;
    *(_DWORD *)(a1 + 52) = a3;
    *(_DWORD *)(a1 + 56) = a4;
    return result;
}
