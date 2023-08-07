#include "../../types-n64.h"
//----- (802201C8) --------------------------------------------------------
_DWORD *__fastcall sub_802201C8(_DWORD *a1, int a2, int a3, int a4) {
    _DWORD *result; // $v0

    a1[115] = a2;
    a1[116] = a3;
    a1[171] = a2;
    a1[172] = a3;
    a1[117] = a4;
    a1[154] = a2;
    a1[155] = a3;
    a1[173] = a4;
    result = a1 + 1014;
    a1[156] = a4;
    a1[1014] = a2;
    a1[1015] = a3;
    a1[1016] = a4;
    return result;
}
