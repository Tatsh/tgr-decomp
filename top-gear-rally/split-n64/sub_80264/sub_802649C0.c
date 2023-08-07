#include "../../types-n64.h"
//----- (802649C0) --------------------------------------------------------
void sub_802649C0() {
    bool v1; // dc

    _$T0 = 0x80000000;
    do {
        __asm { cache   1, 0($t0) # Index Invalidate (primary data or unified primary cache) }
        v1 = _$T0 < 0x80001FF0;
        _$T0 += 16;
    } while (v1);
}
