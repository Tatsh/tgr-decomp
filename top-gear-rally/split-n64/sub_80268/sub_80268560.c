#include "types-n64.h"
//----- (80268560) --------------------------------------------------------
void __fastcall sub_80268560(int a1) {
    __asm { mfc0    $t0, SR # Status register }
    _$T0 = _$T0 | a1;
    __asm { mtc0    $t0, SR # Status register }
}
