#include "types-n64.h"
//----- (80266188) --------------------------------------------------------
int sub_80266188() {
    int v0;     // $lo
    int result; // $v0

    __asm
        {
    ld      $t7, arg_8($sp)
    ld      $t6, arg_0($sp)
    dmultu  $t6, $t7
        }
    _$V0 = v0;
    __asm
    {
    dsll32  $v1, $v0, 0
    dsra32  $v1, 0
    dsra32  $v0, 0
    }
    return result;
}
// 802661A4: variable 'v0' is possibly undefined
