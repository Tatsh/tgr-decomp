#include "types-win32.h"
//----- (1001B2D0) --------------------------------------------------------
BOOL __thiscall meth_unk00334_MatchesGUID(unk00334 *this, CLSID *a2) {
    DWORD v3; // ecx

    v3 = this->ddCapsFlags;
    if ((v3 & 1) != 0) {
        if (a2) {
            if (!memcmp(a2, &this->lpGUID, 0x10u))
                return 1;
        } else if ((v3 & 2) != 0) {
            return 1;
        }
    }
    return 0;
}
