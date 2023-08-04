#include "../types-win32.h"
//----- (1000A190) --------------------------------------------------------
unk0 *__thiscall initUnk(unk0 *this)
{
  int v1; // eax

  memset(this, 0, sizeof(unk0));
  v1 = this->unkMeth1;
  this->field_10 = 140;
  LOBYTE(v1) = v1 | 4;
  this->unkMeth1 = v1;
  return this;
}
