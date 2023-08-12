#include "types-win32.h"
//----- (10073DC0) --------------------------------------------------------
int __thiscall meth_unk00214_10073DC0(unk00214 *this, int a2) {
  int *v3;    // edi
  int v4;     // ecx
  int *v5;    // edx
  int v6;     // ecx
  int result; // eax

  meth_unk00214_10073F20(this);
  *((_BYTE *)this->field_10 + this->field_C) = BYTE2(a2);
  v3 = this->field_10;
  v4 = this->field_C + 1;
  this->field_C = v4;
  *((_BYTE *)v3 + v4) = BYTE1(a2);
  v5 = this->field_10;
  v6 = this->field_C + 1;
  this->field_C = v6;
  *((_BYTE *)v5 + v6) = a2;
  result = this->field_C + 1;
  this->field_C = result;
  return result;
}
