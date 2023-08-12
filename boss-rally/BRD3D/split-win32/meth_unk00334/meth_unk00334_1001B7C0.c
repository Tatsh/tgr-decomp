#include "types-win32.h"
//----- (1001B7C0) --------------------------------------------------------
int __thiscall meth_unk00334_1001B7C0(
    unk00334 *this, CLSID *clsid, unk00334 *a3, unk00228 *a4, unk00228 *a5) {
    unk00228 *v6; // esi
    unk00228 *v7; // ebx

    if (!a3) {
        if (a4) {
            a4->field_0 = 0;
            return 0;
        }
        return 0;
    }
    v6 = a5;
    if (!a5)
        v6 = this->field_324;
    if (a4 && meth_unk00334_1001ACF0(a3, v6))
        a4->field_0 = (DWORD)v6;
    if (v6) {
        while (1) {
            v7 = v6->last;
            if (meth_unk00228_MatchesGUID(v6, clsid)) {
                if (meth_unk00334_1001ACF0(a3, v6))
                    return (int)v6;
            } else {
                if (meth_unk00228_DeviceDescHasDCMColorModel(v6)) {
                    if (!a4 || !meth_unk00334_1001ACF0(a3, v6))
                        goto LABEL_20;
                } else if (!meth_unk00334_1001ACF0(a3, v6) || !a4) {
                    goto LABEL_20;
                }
                a4->field_0 = (DWORD)v6;
            }
        LABEL_20:
            v6 = v7;
            if (!v7)
                return 0;
        }
    }
    return 0;
}
