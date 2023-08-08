#include "types-n64.h"
//----- (802662E0) --------------------------------------------------------
// a2 = often 4
void __fastcall sub_802662E0(unsigned int a1, int a2) {
    bool v5; // dc

    if (a2 > 0) {
        if ((unsigned int)a2 >= 0x2000) {
            _$T0 = 0x80000000;
            do {
                __asm { cache   1, 0($t0) # Index Invalidate (primary data or unified primary cache) }
                v5 = _$T0 < 0x80001FF0;
                _$T0 += 16;
            } while (v5);
        } else {
            _$T0 = a1;
            if (a1 >= a1 + a2)
                return;
            _$T1 = a1 + a2 - 16;
            if ((a1 & 0xF) != 0) {
                _$T0 = a1 - (a1 & 0xF);
                __asm { cache   0x15, 0($t0) # Hit Writeback Invalidate (primary data or unified primary cache)
                }
                if (_$T0 >= _$T1) return;
                _$T0 = _$T0 + 16;
            }
            if ((_$T1 & 0xF) == 0)
                goto LABEL_15;
            _$T1 -= _$T1 & 0xF;
            __asm { cache   0x15, 0x10($t1) # Hit Writeback Invalidate (primary data or unified primary cache)
            }
            if (_$T1 >= _$T0) {
            LABEL_15:
                do {
                    __asm { cache   0x11, 0($t0) # Hit Invalidate (primary data or unified primary cache) }
                    v5 = _$T0 < _$T1;
                    _$T0 += 16;
                } while (v5);
            }
        }
    }
}
