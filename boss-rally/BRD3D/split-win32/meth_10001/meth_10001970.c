#include "../../types-win32.h"
//----- (10001970) --------------------------------------------------------
float *__thiscall meth_10001970(#481 * this) {
    float *result; // eax

    *((_DWORD *)this + 0x9CD) = (char *)this + 0x2808;
    sub_1003AFE0((int)this + 0x2838, (int)this + 0x30, (int)this, 6.0);
    sub_1003B020((int)this + 0x2838, (int)this + 0x10, 2.0);
    result = sub_1003AF70((float *)this + 0xA0E, (float *)this + 8);
    *((_DWORD *)this + 0x3DE) = 2;
    return result;
}
