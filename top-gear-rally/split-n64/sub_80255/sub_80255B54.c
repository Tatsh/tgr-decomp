#include "../../types-n64.h"
//----- (80255B54) --------------------------------------------------------
int __fastcall sub_80255B54(char *a1) {
    int result; // $v0
    int v2;     // $t7

    result = a1 - (char *)&dword_8036A8E0;
    v2 = (a1 - (char *)&dword_8036A8E0) / 348;
    *((_DWORD *)a1 + 12) = 0;
    *((_DWORD *)a1 + 11) = 0;
    *((_DWORD *)a1 + 17) = 0;
    *((_DWORD *)a1 + 85) = v2;
    *((_DWORD *)a1 + 86) = (char *)dword_8031A3E0 + 6 * v2;
    return result;
}
// 8031A3E0: using guessed type int dword_8031A3E0[6];
// 8036A8E0: using guessed type int dword_8036A8E0;
