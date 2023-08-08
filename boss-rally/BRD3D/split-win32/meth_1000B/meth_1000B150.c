#include "../types-win32.h"
//----- (1000B150) --------------------------------------------------------
HRESULT __thiscall meth_1000B150(unk334 *this) {
    LPDIRECTDRAWSURFACE v1; // eax
    LPDIRECTDRAWPALETTE v2; // ecx
    HRESULT result;         // eax

    v1 = this->? ;
  if ( !v1 || (v2 = this->?) == 0 || (result = v1->lpVtbl->SetPalette(v1, v2), result >= 0) )
      result = 0;
  return result;
}
