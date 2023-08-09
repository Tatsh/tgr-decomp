#include "types-win32.h"
//----- (1001B880) --------------------------------------------------------
unk00334 *__thiscall meth_unk00334_1001B880(unk00334 *this,
                                            int width,
                                            int height,
                                            int bitDepth,
                                            int a5,
                                            int a2,
                                            _DWORD *a7,
                                            unk00334 *u0_1) {
    unk00334 *u0;           // esi
    unk00334 *ddrawSurface; // edi

    if (!a2) {
        if (a7) {
            *a7 = 0;
            return 0;
        }
        return 0;
    }
    u0 = u0_1;
    if (!u0_1)
        u0 = this->field_318;
    if (a7 && meth_unk00334_1001ACF0(u0, (unk00334 *)a2))
        *a7 = u0;
    if (u0) {
        while (1) {
            ddrawSurface = u0->field_70;
            if (meth_unk00334_1001AD50(u0, width, height, bitDepth)) {
                if (meth_unk00334_1001ACF0(u0, (unk00334 *)a2))
                    return u0;
            } else {
                if (meth_unk00334_1001AD50(u0, 640, 480, 16)) {
                    if (!a7 || !meth_unk00334_1001ACF0(u0, (unk00334 *)a2))
                        goto LABEL_20;
                } else if (!meth_unk00334_1001ACF0(u0, (unk00334 *)a2) || !a7) {
                    goto LABEL_20;
                }
                *a7 = u0;
            }
        LABEL_20:
            u0 = ddrawSurface;
            if (!ddrawSurface)
                return 0;
        }
    }
    return 0;
}
