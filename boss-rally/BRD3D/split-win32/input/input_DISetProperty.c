#include "types-win32.h"
//----- (10078C80) --------------------------------------------------------
HRESULT __cdecl input_DISetProperty(
    IDirectInputDevice2A *dev2a, GUID *guid, DWORD dwObj, DWORD dwHow, int unusedA5) {
  IDirectInputDevice2AVtbl *dev2aVtbl; // ecx
  DIPROPHEADER diPropHeader;           // [esp+0h] [ebp-14h] BYREF
  int unusedV8;                        // [esp+10h] [ebp-4h]

  unusedV8 = unusedA5;
  diPropHeader.dwObj = dwObj;
  diPropHeader.dwHow = dwHow;
  dev2aVtbl = dev2a->lpVtbl;
  diPropHeader.dwSize = 20;
  diPropHeader.dwHeaderSize = 16;
  return dev2aVtbl->SetProperty(dev2a, guid, &diPropHeader);
}
