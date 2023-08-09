#include "types-win32.h"
//----- (1001AC80) --------------------------------------------------------
int __thiscall meth_unk00334_1001AC80(
    unk00334 *this, int *width, int *height, int *bitDepth, int *a5) {
    CLSID *v6; // eax

    if (this->u8c != (unk0008C *)108)
        return -2147467259;
    v6 = this->lpGUID;
    if (((unsigned __int8)v6 & 4) == 0)
        return -2147467259;
    if (((unsigned __int8)v6 & 2) == 0)
        return -2147467259;
    if ((BYTE1(v6) & 0x10) == 0)
        return -2147467259;
    if (this->field_48 != 32)
        return -2147467259;
    *width = this->width;
    *height = this->height;
    *bitDepth = this->bitDepth;
    *a5 = 0;
    return 0;
}
