#include "types-win32.h"
//----- (1005B8D0) --------------------------------------------------------
unk1A5E0 *__thiscall meth_unk1A5E0_1005B8D0(unk1A5E0 *this, char a2) {
  meth_unk1A5E0_1005B8F0(this);
  if ((a2 & 1) != 0)
    free(this);
  return this;
}
