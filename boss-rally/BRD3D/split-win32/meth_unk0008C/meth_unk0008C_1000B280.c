#include "types-win32.h"
//----- (1000B280) --------------------------------------------------------
int __thiscall meth_unk0008C_1000B280(unk0008C *this, unk00334 *a2) {
    if (!a2)
        return -2147024809;
    this->last = a2;
    meth_unk00334_setField0Validate(a2, this);
  if ( (this->? & 0x1F) == 31 )
      meth_unk000334_10001160(this->last);
  return 0;
}
