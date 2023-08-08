#include "../types-win32.h"
//----- (1000B2C0) --------------------------------------------------------
int __thiscall meth_1000B2C0(unk334 *this) {
    int hr;                          // eax
    LPDIRECTDRAWSURFACE ddSurface;   // eax
    LPDIRECTDRAWSURFACE ddSurface_1; // eax
    LPDIRECTDRAWSURFACE ddSurface_2; // eax

    if ((this->field_1C & 0x1F) != 31)
        return -2005522669;
    ddSurface = this->? ;
  if ( !ddSurface || !ddSurface->lpVtbl->IsLost(this->?) || (hr = this->?->lpVtbl->Restore(this->?), hr >= 0) )
  {
      ddSurface_1 = this->? ;
    if ( !ddSurface_1 || !ddSurface_1->lpVtbl->IsLost(this->?) || (hr = this->?->lpVtbl->Restore(this->?), hr >= 0) )
    {
        ddSurface_2 = this->? ;
      if ( !ddSurface_2 || !ddSurface_2->lpVtbl->IsLost(this->?) || (hr = this->?->lpVtbl->Restore(this->?), hr >= 0) )
      {
        if ( !this->? || (hr = sub_10001190(), hr >= 0) )
            hr = 0;
      }
    }
  }
  return hr;
}
