#include "types-win32.h"
//----- (1001B880) --------------------------------------------------------
unk00334 *__thiscall meth_unk00334_1001B880(unk00334 *this,
                                            int width,
                                            int height,
                                            int bitDepth,
                                            int a5,
                                            unk00228 *a2,
                                            _DWORD *a7,
                                            unk00334 *u0_1) {
    unk00334 *u334a; // esi
    unk00334 *u334b; // edi

    if (!a2) {
        if (a7) {
            *a7 = 0;
            return 0;
        }
        return 0;
    }
    u334a = u0_1;
    if (!u0_1)
        u334a = this->field_318;
    if (a7 && meth_unk00334_1001ACF0(u334a, a2))
        *a7 = u334a;
    if (u334a) {
        while (1) {
            u334b = u334a->field_70;
            if (meth_unk00334_MatchesWidthHeightBitDepth(u334a, width, height, bitDepth)) {
                if (meth_unk00334_1001ACF0(u334a, a2))
                    return u334a;
            } else {
                if (meth_unk00334_MatchesWidthHeightBitDepth(u334a, 640, 480, 16)) {
                    if (!a7 || !meth_unk00334_1001ACF0(u334a, a2))
                        goto LABEL_20;
                } else if (!meth_unk00334_1001ACF0(u334a, a2) || !a7) {
                    goto LABEL_20;
                }
                *a7 = u334a;
            }
        LABEL_20:
            u334a = u334b;
            if (!u334b)
                return 0;
        }
    }
    return 0;
}
