#include "../../types-n64.h"
//----- (8026BAC0) --------------------------------------------------------
void __fastcall sub_8026BAC0(unsigned int a1, int a2) {
    bool v3; // dc

    if (a2 > 0) {
        if ((unsigned int)a2 >= 0x4000) {
            _$T0 = 0x80000000;
            do {
                __asm { cache   0, 0($t0) # Index Invalidate (primary instruction cache) }
                v3 = _$T0 < 0x80003FE0;
                _$T0 += 32;
            } while (v3);
        } else if (a1 < a1 + a2) {
            _$T0 = a1 - (a1 & 0x1F);
            do {
                __asm { cache   0x10, 0($t0) # Hit Invalidate (primary instruction cache) }
                v3 = _$T0 < a1 + a2 - 32;
                _$T0 += 32;
            } while (v3);
        }
    }
}
