#include "types-win32.h"
//----- (1001AD50) --------------------------------------------------------
BOOL __thiscall meth_unk00334_MatchesWidthHeightBitDepth(unk00334 *this,
                                                         int width,
                                                         int height,
                                                         int bitDepth) {
    return this->ddCapsFlags == 0x6C && this->width == width && this->height == height &&
           this->ddCaps1.dwZBufferBitDepths == bitDepth;
}
