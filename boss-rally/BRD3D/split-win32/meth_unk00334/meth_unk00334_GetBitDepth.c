#include "types-win32.h"
//----- (1001AC60) --------------------------------------------------------
int __thiscall meth_unk00334_GetBitDepth(unk00334 *this) {
  if (this->ddCapsFlags != (unk0008C *)0x6C)
    return 0;
  if (((int)this->lpGUID & 0x1000) == 0)
    return 0;
  if ( this->? == 32 )
    return this->? ;
  return 0;
}
