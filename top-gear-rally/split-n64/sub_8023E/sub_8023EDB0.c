#include "../../types-n64.h"
//----- (8023EDB0) --------------------------------------------------------
int __fastcall sub_8023EDB0(int *a1, int a2, _DWORD *a3) {
    int v5;                                       // $v0
    int result;                                   // $v0
    int(__fastcall * v7)(_DWORD, _DWORD, _DWORD); // $v1

    if (a1[13])
        *a3 = a1[14];
    v5 = *a1;
    if (*a1 == 4 || v5 == 5) {
        (*(void(__fastcall **)(_DWORD, int))(a2 + 36))(*(_DWORD *)(a2 + 40), a1[3]);
        v5 = *a1;
    }
    if (v5 == 6) {
        sub_80241F88(a1[3], a2);
        sub_8024150C(a1[2], a2);
        sub_8024150C(a1[1], a2);
    }
    result = a1[9];
    v7 = (int(__fastcall *)(_DWORD, _DWORD, _DWORD))a1[13];
    *a1 = 0;
    a1[7] = 0;
    a1[8] = 0;
    a1[12] = result;
    a1[11] = result;
    if (v7) {
        result = v7(0, 0, 0);
        a1[14] = result;
        *(_DWORD *)(a2 + 48) = result;
    }
    return result;
}
