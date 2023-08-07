#include "../../types-n64.h"
//----- (8024150C) --------------------------------------------------------
int __fastcall sub_8024150C(int a1, int a2) {
    int v3; // $s1
    int v4; // $s0
    int v5; // $v0
    int v6; // $s0

    v3 = 0;
    v4 = a1;
    if (a1) {
        do {
            v5 = *(_DWORD *)(v4 - 4);
            *(_DWORD *)(v4 - 4) = v3;
            v3 = v4;
            v4 = v5;
        } while (v5);
    }
    if (v3) {
        do {
            v6 = *(_DWORD *)(v3 - 8 + 4);
            (*(void(__fastcall **)(_DWORD))(a2 + 36))(*(_DWORD *)(a2 + 40));
            v3 = v6;
        } while (v6);
    }
    return 0;
}
