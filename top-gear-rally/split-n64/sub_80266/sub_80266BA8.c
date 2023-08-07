#include "../../types-n64.h"
//----- (80266BA8) --------------------------------------------------------
float __fastcall sub_80266BA8(__int64 a1) {
    float result; // $f0
    __int64 v4;   // [sp+0h] [+0h] BYREF

    v4 = a1;
    __asm
        {
    ld      $t6, arg_0($sp)
    dmtc1   $t6, $f4
        }
    result = (float)_$F4;
    if (_$T6 < 0)
        result = result + 4294967300.0;
    return result;
}
// 80266BBC: variable '_$F4' is possibly undefined
