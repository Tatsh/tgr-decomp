#include "../../types-n64.h"
//----- (8026B7D0) --------------------------------------------------------
void __fastcall sub_8026B7D0(unsigned int a1, int a2) {
    bool v3; // dc

    if (a2 > 0) {
        if ((unsigned int)a2 >= 0x2000) {
            _$T0 = 0x80000000;
            do {
                __asm { cache   1, 0($t0) # Index Invalidate (primary data or unified primary cache) }
                v3 = _$T0 < 0x80001FF0;
                _$T0 += 16;
            } while (v3);
        } else if (a1 < a1 + a2) {
            _$T0 = a1 - (a1 & 0xF);
            do {
                __asm { cache   0x19, 0($t0) # Hit Writeback (primary data or unified primary cache) }
                v3 = _$T0 < a1 + a2 - 16;
                _$T0 += 16;
            } while (v3);
        }
    }
}
