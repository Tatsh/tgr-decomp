#include "../../types-win32.h"
//----- (1001B880) --------------------------------------------------------
unk0 *__thiscall meth_1001B880(
    unk1 *this, int width, int height, int bitDepth, int a5, int a2, _DWORD *a7, unk0 *u0_1) {
    unk0 *u0;                         // esi
    IDirectDrawSurface *ddrawSurface; // edi

    if (!a2) {
        if (a7) {
            *a7 = 0;
            return 0;
        }
        return 0;
    }
    u0 = u0_1;
    if (!u0_1)
        u0 = (unk0 *)this[6].field_41;
    if (a7 && meth_1001ACF0(u0, a2))
        *a7 = u0;
    if (u0) {
        while (1) {
            ddrawSurface = u0->field_3;
            if (meth_1001AD50((unk1 *)u0, width, height, bitDepth)) {
                if (meth_1001ACF0(u0, a2))
                    return u0;
            } else {
                if (meth_1001AD50((unk1 *)u0, 640, 480, 16)) {
                    if (!a7 || !meth_1001ACF0(u0, a2))
                        goto LABEL_20;
                } else if (!meth_1001ACF0(u0, a2) || !a7) {
                    goto LABEL_20;
                }
                *a7 = u0;
            }
        LABEL_20:
            u0 = (unk0 *)ddrawSurface;
            if (!ddrawSurface)
                return 0;
        }
    }
    return 0;
}
