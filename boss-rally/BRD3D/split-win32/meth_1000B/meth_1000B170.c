#include "../types-win32.h"
//----- (1000B170) --------------------------------------------------------
HRESULT __thiscall meth_1000B170(unk334 *this) {
    IDirectDrawPalette *v2; // eax
    HRESULT result;         // eax
    IDirectDraw2 *v4;       // eax

    v2 = this->? ;
  if ( !v2
    || (result = v2->lpVtbl->GetEntries(v2, 0, 0, this->?, this->?), result >= 0)
    && (result = this->?->lpVtbl->SetEntries(this->?, 0, 0, this->?, this->?), result >= 0) )
  {
      v4 = this->? ;
    if ( !v4 || (result = v4->lpVtbl->FlipToGDISurface(this->?), result >= 0) )
    {
        if (this->field_20) {
            if (IsWindow(this->field_20)) {
                DrawMenuBar(this->field_20);
                RedrawWindow(this->field_20, 0, 0, 0x400u);
            }
        }
        result = 0;
    }
  }
  return result;
}
