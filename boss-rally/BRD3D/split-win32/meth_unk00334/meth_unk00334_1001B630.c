#include "types-win32.h"
//----- (1001B630) --------------------------------------------------------
MACRO_DDERR __thiscall meth_unk00334_1001B630(unk00334 *this, unk00228 *a2) {
  unk00228 *v3; // edx
  unk00228 *v4; // edx
  unk00228 *v5; // edx

  if (!a2)
    return DDERR_INVALIDPARAMS;
  v3 = this->field_328;
  a2->last = 0;
  a2->field_220 = v3;
  v4 = this->field_328;
  if (v4)
    v4->last = a2;
  v5 = this->field_324;
  this->field_328 = a2;
  if (!v5)
    this->field_324 = a2;
  ++this->field_320;
  return 0;
}
