#include "types-win32.h"
//----- (100478A0) --------------------------------------------------------
unk1E214 *__thiscall meth_1E214_0(unk1E214 *this, char a2) {
  meth_unk1E214_100478C0(this);
  if ((a2 & 1) != 0)
    free(this);
  return this;
}
