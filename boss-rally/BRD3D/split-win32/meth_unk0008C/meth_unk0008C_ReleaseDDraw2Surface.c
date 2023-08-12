#include "types-win32.h"
//----- (1000A8A0) --------------------------------------------------------
int __thiscall meth_unk0008C_ReleaseDDraw2Surface(unk0008C *this) {
  LPDIRECTDRAWSURFACE ddrawSurface; // eax

  this->? &= 0xFFFFFFFB;
  meth_unk0008C_ResetPalette(this);
  ddrawSurface = this->? ;
  if (ddrawSurface) {
    ddrawSurface->lpVtbl->Release(this->?);
    this->? = 0;
  }
  return 0;
}
