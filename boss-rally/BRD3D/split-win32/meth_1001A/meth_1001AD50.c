#include "../../types-win32.h"
//----- (1001AD50) --------------------------------------------------------
BOOL __thiscall meth_1001AD50(unk1 *this, int width, int height, int bitDepth) {
    return this->field_46 == 108 && this->width0 == width && this->height0 == height &&
           this->bitDepth0 == bitDepth;
}
