#include "types-win32.h"
//----- (1005B200) --------------------------------------------------------
double __thiscall meth_unk00438_10(unk00438 *this) {
  double result; // st7

  result = ((double)(this->field_42C - this->field_424) - (double)this->field_40A) * 0.5 +
           (double)this->field_424;
  *(float *)&this->field_410 = result;
  return result;
}
