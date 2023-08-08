#include "types-n64.h"
//----- (8026612C) --------------------------------------------------------
int __fastcall sub_8026612C(__int64 a1, __int64 a2) {
    int v2;      // $lo
    int result;  // $v0
    __int64 v10; // [sp+0h] [+0h] BYREF
    __int64 v11; // [sp+8h] [+8h] BYREF

    v10 = a1;
    v11 = a2;
    __asm
    {
    ld      $t7, anonymous_0($sp)
    ld      $t6, arg_0($sp)
    ddiv    $t6, $t7
    }
    if (!_$T7) __break(7u, 0);
    if (_$T7 == -1) {
        __asm { dsll32  $at, 31 }
        if (_$T6 == _$AT) __break(6u, 0);
    }
    _$V0 = v2;
    __asm
    {
    dsll32  $v1, $v0, 0
    dsra32  $v1, 0
    dsra32  $v0, 0
    }
    return result;
}
// 80266174: variable 'v2' is possibly undefined
