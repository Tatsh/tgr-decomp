#include "types-win32.h"
//----- (1001ACF0) --------------------------------------------------------
BOOL __thiscall meth_unk00334_1001ACF0(unk00334 *this, unk00334 *a2) {
    int v3;   // eax
    int v4;   // edi
    DWORD v5; // eax

    if (!a2)
        return 0;
    v3 = meth_unk00334_1001AC60(this);
    v4 = sub_1001A8C0(v3);
    if (meth_unk00334_1001AD90(a2))
        v5 = v4 & a2->field_B8;
    else
        v5 = v4 & a2->ddCaps0.dwSVCaps;
    return v5 != 0;
}
