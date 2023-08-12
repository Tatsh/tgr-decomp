#include "types-win32.h"
//----- (1000AB20) --------------------------------------------------------
int __thiscall meth_unk0008C_ResetPalette(unk0008C *this) {
  IDirectDrawPalette *ddrawPalette; // eax

  ddrawPalette = this->? ;
  if (ddrawPalette) {
    ddrawPalette->lpVtbl->Release(ddrawPalette);
    this->? = NULL;
  }
  if ( this->? )
  {
    free(this->?);
    this->? = NULL;
  }
  if ( this->? )
  {
    free((void *)this->?);
    this->? = NULL;
  }
  this->? = NULL;
  return 0;
}
