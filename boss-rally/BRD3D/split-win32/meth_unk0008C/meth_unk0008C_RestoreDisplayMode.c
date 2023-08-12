#include "types-win32.h"
//----- (1000A800) --------------------------------------------------------
int __thiscall meth_unk0008C_RestoreDisplayMode(unk0008C *this) {
  IDirectDraw2 *ddraw2; // ecx

  this->         ? &= 0xFFFFFFFD;
  ddraw2 = this->? ;
  if (ddraw2)
    ddraw2->lpVtbl->RestoreDisplayMode(ddraw2);
  return 0;
}
