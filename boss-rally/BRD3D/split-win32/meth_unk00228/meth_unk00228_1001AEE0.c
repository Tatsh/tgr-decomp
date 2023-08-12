#include "types-win32.h"
//----- (1001AEE0) --------------------------------------------------------
void __thiscall meth_unk00228_1001AEE0(unk00228 *this) {
  meth_unk00228_1001AFB0(this);
  if (this->sourceString1) {
    free(this->sourceString1);
    this->sourceString1 = 0;
  }
  if (this->sourceString0) {
    free(this->sourceString0);
    this->sourceString0 = 0;
  }
  this->field_220 = 0;
  this->last = 0;
}
