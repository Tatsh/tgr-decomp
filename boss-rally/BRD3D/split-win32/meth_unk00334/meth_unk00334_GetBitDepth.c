#include "types-win32.h"
//----- (1001AC60) --------------------------------------------------------
DWORD __thiscall meth_unk00334_GetBitDepth(unk00334 *this) {
    if (this->ddCapsFlags != 0x6C)
        return 0;
    if (((int)this->lpGUID & 0x1000) == 0)
        return 0;
    if (this->ddCaps1.dwAlphaOverlayConstBitDepths == 32)
        return this->ddCaps1.dwZBufferBitDepths;
    return 0;
}
