#include "types-n64.h"
//----- (802410E0) --------------------------------------------------------
int __fastcall sub_802410E0(int *a1, unsigned int *a2, int *a3, int a4) {
    int v4; // $v0
    int v5; // $v1

    v4 = sub_80240A30(a1, 0x13u, 0x13u, 0, 0, a3, a2, a4);
    v5 = v4;
    if (v4 == -3) {
        *(_DWORD *)(a4 + 24) = "oversubscribed dynamic bit lengths tree";
    } else if (v4 == -5) {
        sub_8024150C(*a3, a4);
        v5 = -3;
        *(_DWORD *)(a4 + 24) = "incomplete dynamic bit lengths tree";
    }
    return v5;
}
