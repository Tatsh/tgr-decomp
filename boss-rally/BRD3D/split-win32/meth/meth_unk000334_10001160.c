#include "types-win32.h"
//----- (10001160) --------------------------------------------------------
int __thiscall meth_unk000334_10001160(unk00334 *this) {
    int result;    // eax
    unk0008C *u8c; // eax

  if ( !this->ddCapsFlags || (this->ddCapsFlags->? & 0x1F) != 0x1F )
      return -2005522669;
  u8c = this->ddCapsFlags;
  if ( this->ddCapsFlags && (u8c->? & 0x1F) == 0x1F && u8c->? && u8c->lpDirect3DDevice && u8c->lpDirect3DViewport2 )
      result = 0;
  else
      result = 0x80004005;
  return result;
}
