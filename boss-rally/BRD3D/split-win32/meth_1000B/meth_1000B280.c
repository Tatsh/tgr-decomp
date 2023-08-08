#include "../types-win32.h"
//----- (1000B280) --------------------------------------------------------
int __thiscall meth_1000B280(unk334 *this, _DWORD *a2) {
    if (!a2)
        return -2147024809;
    this->? = (int)a2;
    meth_10001140(a2, (int)this);
    if ((this->field_1C & 0x1F) == 31)
    meth_10001160((int *)this->?);
    return 0;
}
