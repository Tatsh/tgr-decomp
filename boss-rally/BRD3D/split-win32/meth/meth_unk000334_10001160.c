#include "types-win32.h"
//----- (10001160) --------------------------------------------------------
int __thiscall meth_unk000334_10001160(unk00334 *this) {
    int result;    // eax
    unk0008C *u8c; // eax

    if (!this->u8c || (this->u8c->field_1C & 0x1F) != 0x1F)
        return -2005522669;
    u8c = this->u8c;
    if (this->u8c && (u8c->field_1C & 0x1F) == 0x1F && u8c->lpDirect3D2 && u8c->lpDirect3DDevice &&
        u8c->lpDirect3DViewport2) {
        result = 0;
    } else {
        result = 0x80004005;
    }
    return result;
}
