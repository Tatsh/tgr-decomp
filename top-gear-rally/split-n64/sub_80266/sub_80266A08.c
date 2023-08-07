#include "../../types-n64.h"
//----- (80266A08) --------------------------------------------------------
int __fastcall sub_80266A08(double a1) {
    int result; // $v0

    __asm { cfc1    $t6, FCSR }
    _$V0 = 1;
    __asm { ctc1    $v0, FCSR }
    _$F4 = (__int64)a1;
    __asm { cfc1    $v0, FCSR }
    if ((_$V0 & 0x78) == 0) {
        __asm { dmfc1   $v0, $f4 }
        if (_$V0 >= 0) goto LABEL_6;
        goto LABEL_4;
    }
    _$V0 = 1;
    __asm { ctc1    $v0, FCSR }
    _$F4 = (__int64)(a1 - 9.223372e18);
    __asm { cfc1    $v0, FCSR }
    if ((_$V0 & 0x78) != 0) {
    LABEL_4:
        _$V0 = -1;
        goto LABEL_6;
    }
    __asm
        {
    ld      $t7, qword_802AB950
    dmfc1   $v0, $f4
        }
    _$V0 = _$V0 | _$T7;
LABEL_6:
    __asm
    {
    ctc1    $t6, FCSR
    dsll32  $v1, $v0, 0
    dsra32  $v1, 0
    dsra32  $v0, 0
    }
    return result;
}
