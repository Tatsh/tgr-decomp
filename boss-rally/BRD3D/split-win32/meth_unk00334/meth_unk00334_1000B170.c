#include "types-win32.h"
//----- (1000B170) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1000B170(unk00334 *this) {
    IDirectDrawPalette *v2; // eax
    HRESULT result;         // eax
    IDirectDraw2 *v4;       // eax

    v2 = (IDirectDrawPalette *)this->? ;
  if ( !v2
    || (result = v2->lpVtbl->GetEntries(v2, 0, 0, *(_DWORD *)this->?, (LPPALETTEENTRY)this->?), result >= 0)
    && (result = (*(int (__stdcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this->? + 24))(
                   this->?,
                   0,
                   0,
                   *(_DWORD *)this->?,
                   *(_DWORD *)&this->?[4]),
        result >= 0) )
  {
      v4 = this->? ;
    if ( !v4 || (result = v4->lpVtbl->FlipToGDISurface(this->?), result >= 0) )
    {
      if ( this->? )
      {
        if ( IsWindow(this->?) )
        {
          DrawMenuBar(this->?);
          RedrawWindow(this->?, 0, 0, 0x400u);
        }
      }
      result = 0;
    }
  }
  return result;
}
