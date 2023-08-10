#include "types-win32.h"
//----- (1001B490) --------------------------------------------------------
unk00334 *__thiscall meth_unk00334_1001B490(
    unk00334 *this, int width, int height, int bitDepth, int a5, unk00334 **a6, unk00334 *a7) {
    unk00334 *v7; // esi
    unk00334 *v8; // edi

    v7 = a7;
    if (!a7)
        v7 = this->field_318;
    if (a6)
        *a6 = v7;
    if (!v7)
        return 0;
    while (1) {
        v8 = v7->field_70;
        if (meth_unk00334_MatchesWidthHeightBitDepth(v7, width, height, bitDepth))
            break;
        if (meth_unk00334_MatchesWidthHeightBitDepth(v7, 640, 480, 8)) {
            if (a6)
                *a6 = v7;
        }
        v7 = v8;
        if (!v8)
            return 0;
    }
    return v7;
}
