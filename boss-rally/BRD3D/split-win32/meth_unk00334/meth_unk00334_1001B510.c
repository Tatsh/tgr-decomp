#include "types-win32.h"
//----- (1001B510) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001B510(unk00334 *this, IDirect3D2 *a2) {
  HRESULT result;     // eax
  IDirect3D2Vtbl *v4; // ecx
  DWORD v5;           // eax
  int v6[3];          // [esp+Ch] [ebp-Ch] BYREF

  if ((this->ddCapsFlags & DDCAPS_ALIGNSIZESRC) != 0)
    return 0;
  if (!a2)
    return -2005522670;
  v4 = a2->lpVtbl;
  v6[0] = 1;
  v6[2] = (int)this;
  v6[1] = 0;
  result = v4->EnumDevices(a2, graphics_Direct3D2EnumDevicesCallback, v6);
  if (result >= 0) {
    if (v6[0] && v6[1] && this->field_320 == v6[1]) {
      v5 = this->ddCapsFlags;
      LOBYTE(v5) = this->ddCapsFlags | DDCAPS_ALIGNSIZESRC;
      this->ddCapsFlags = v5;
      result = 0;
    } else {
      result = -2005522671;
    }
  }
  return result;
}
