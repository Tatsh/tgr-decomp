#include "../../types-n64.h"
//----- (802412EC) --------------------------------------------------------
int *__fastcall sub_802412EC(_DWORD *a1, int a2) {
    int v2; // $t9

    v2 = *a1 - a2;
    *a1 = v2;
    return &dword_80368AD0[2 * v2];
}
// 80368AD0: using guessed type int dword_80368AD0[512];
