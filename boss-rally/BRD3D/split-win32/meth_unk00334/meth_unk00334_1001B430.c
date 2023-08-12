#include "types-win32.h"
//----- (1001B430) --------------------------------------------------------
MACRO_DDERR __thiscall meth_unk00334_1001B430(unk00334 *this, unk00074 *a2) {
  unk00074 *v3; // edx
  unk00074 *v4; // edx
  unk00074 *v5; // edx

  if (!a2)
    return DDERR_INVALIDPARAMS;
  v3 = this->field_31C;
  a2->last = 0;
  a2->field_6C = v3;
  v4 = this->field_31C;
  if (v4)
    v4->last = a2;
  v5 = this->field_318;
  this->field_31C = a2;
  if (!v5)
    this->field_318 = a2;
  ++this->field_314;
  return DD_OK;
}
