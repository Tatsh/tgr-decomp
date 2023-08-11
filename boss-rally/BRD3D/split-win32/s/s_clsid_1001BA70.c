#include "types-win32.h"
//----- (1001BA70) --------------------------------------------------------
unk00334 *__cdecl s_clsid_1001BA70(CLSID *a1, unk00334 *a2, unk00334 *a3) {
    unk00334 *v3; // esi
    unk00334 *v4; // edi

    v3 = a3;
    if (!a3)
        v3 = gUnk334Ptr1;
    if (a2)
        a2->ddCapsFlags = (unk0008C *)v3;
    if (!v3)
        return 0;
    while (1) {
        v4 = v3->last;
        if (meth_unk00334_MatchesGUID(v3, a1))
            break;
        if (((int)v3->ddCapsFlags & 2) != 0) {
            if (a2)
                a2->ddCapsFlags = (unk0008C *)v3;
        }
        v3 = v4;
        if (!v4)
            return 0;
    }
    return v3;
}
