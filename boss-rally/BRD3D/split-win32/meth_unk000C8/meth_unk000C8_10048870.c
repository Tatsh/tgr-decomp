#include "types-win32.h"
//----- (10048870) --------------------------------------------------------
int __thiscall meth_unk000C8_10048870(unk000C8 *this) {
  unk06594 *v2; // ecx
  int result;   // eax
  unk06594 *v4; // ecx

  v2 = this->field_C0;
  this->lpVtbl = &gUnkC8Vtbl;
  if (v2)
    result = v2->lpVtbl->meth0(v2, 1);
  v4 = this->last;
  this->field_C0 = 0;
  if (v4)
    result = v4->lpVtbl->meth0(v4, 1);
  this->last = 0;
  return result;
}
