#include "../../types-win32.h"
//----- (1000A590) --------------------------------------------------------
int __thiscall SetCooperativeLevel(unk0 *this)
{
  HRESULT hr; // eax

  if ( !this->hwnd || !IsWindow(this->hwnd) )
    return -2005522669;
  hr = this->ddraw2->lpVtbl->SetCooperativeLevel(this->ddraw2, this->hwnd, 17);
  return hr >= 0 ? 0 : hr;
}
