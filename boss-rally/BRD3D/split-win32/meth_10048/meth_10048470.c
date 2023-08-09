#include "types-win32.h"
//----- (10048470) --------------------------------------------------------
unk00348 *__thiscall meth_10048470(unk00348 *this) {
    this->field_10 = 0;
    this->field_14 = 0;
    this->flags_338 = 0;
    this->field_33C = 0.0;
    this->lpVtbl = &gUnk00348Vtbl;
    *(_DWORD *)this->field_4 = 0;
    *(_DWORD *)&this->field_4[4] = 0;
    *(_DWORD *)&this->field_4[8] = 0;
    memset(this->field_18, 0, 0x320u);
    this->field_340 = 0;
    this->last = 0;
    return this;
}
