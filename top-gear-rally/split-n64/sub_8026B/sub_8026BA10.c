#include "types-n64.h"
//----- (8026BA10) --------------------------------------------------------
int __fastcall sub_8026BA10(int _$A0) {
    int result; // $v0

    __asm
    {
    cfc1    $v0, FCSR
    ctc1    $a0, FCSR
    }
    return result;
}
