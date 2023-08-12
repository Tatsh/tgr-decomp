#include "types-win32.h"
//----- (1000A590) --------------------------------------------------------
int __thiscall meth_unk0008C_SetCooperativeLevel(unk0008C *this) {
  HRESULT hr; // eax

  if ( !this->? || !IsWindow(this->?) )
    return -2005522669;
  hr = this->?->lpVtbl->SetCooperativeLevel(this->?, this->?, 17);
  return hr >= 0 ? 0 : hr;
}
