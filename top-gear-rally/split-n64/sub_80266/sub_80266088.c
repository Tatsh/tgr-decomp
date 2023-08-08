#include "types-n64.h"
//----- (80266088) --------------------------------------------------------
int __fastcall sub_80266088(__int64 a1, __int64 a2) {
    int v2;      // $lo
    int result;  // $v0
    __int64 v9;  // [sp+0h] [+0h] BYREF
    __int64 v10; // [sp+8h] [+8h] BYREF

    v9 = a1;
    v10 = a2;
    __asm
    {
    ld      $t7, anonymous_0($sp)
    ld      $t6, arg_0($sp)
    ddivu   $t6, $t7
    }
    if (!_$T7) __break(7u, 0);
    _$V0 = v2;
    __asm
    {
    dsll32  $v1, $v0, 0
    dsra32  $v1, 0
    dsra32  $v0, 0
    }
    return result;
}
// 802660B0: variable 'v2' is possibly undefined
