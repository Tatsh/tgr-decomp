#include "types-n64.h"
//----- (802260A0) --------------------------------------------------------
char *__fastcall sub_802260A0(int a1) {
    char *result; // $v0
    char v2;      // $v1
    char v3;      // $a1
    char v4;      // $a2

    sub_80220620(a1);
    result = (char *)dword_8028B904 + 3 * *(_DWORD *)(a1 + 320);
    v2 = *result;
    v3 = result[1];
    v4 = result[2];
    *(_BYTE *)(a1 + 8291) = 0;
    *(_DWORD *)(a1 + 8296) = 0;
    *(_DWORD *)(a1 + 3800) = 0;
    *(_BYTE *)(a1 + 8288) = v2;
    *(_BYTE *)(a1 + 8289) = v3;
    *(_BYTE *)(a1 + 8290) = v4;
    return result;
}
// 8028B904: using guessed type int dword_8028B904[6];
