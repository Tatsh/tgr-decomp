#include "types-win32.h"
//----- (10047CB0) --------------------------------------------------------
int __thiscall meth_unk1E214_10047CB0(unk1E214 *this, int a2) {
  double v2;  // st7
  int v3;     // edx
  int result; // eax

  v2 = (*(float *)&this->field_3820 - *(float *)&this->field_381C) / (double)a2;
  v3 = this->field_40;
  this->field_30 = this->field_3C;
  this->field_38 = this->field_44;
  this->field_34 = v3;
  result = 1;
  *(float *)&this->field_3824 = v2;
  return result;
}
