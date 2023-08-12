#include "types-win32.h"
//----- (1001B320) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001B320(unk00334 *this, IDirectDraw2 *ddraw) {
  HRESULT result;              // eax
  IDirectDraw2Vtbl *ddrawVtbl; // ecx
  DWORD v5;                    // eax
  int context[3];              // [esp+14h] [ebp-Ch] BYREF

  if ((this->ddCapsFlags & DDCAPS_ALIGNBOUNDARYSRC) != 0)
    return 0;
  if (!ddraw)
    return -2005522670;
  ddrawVtbl = ddraw->lpVtbl;
  context[0] = 1;
  context[2] = (int)this;
  context[1] = 0;
  result = ddrawVtbl->EnumDisplayModes(
      ddraw, 0, 0, context, (LPDDENUMMODESCALLBACK)graphics_enumModesCallback);
  if (result >= 0) {
    if (context[0] && context[1] && this->field_314 == context[1]) {
      v5 = this->ddCapsFlags;
      LOBYTE(v5) = this->ddCapsFlags | DDCAPS_ALIGNBOUNDARYSRC;
      this->ddCapsFlags = v5;
      result = 0;
    } else {
      result = -2005522671;
    }
  }
  return result;
}
