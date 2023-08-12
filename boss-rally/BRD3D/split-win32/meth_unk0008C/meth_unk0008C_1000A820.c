#include "types-win32.h"
//----- (1000A820) --------------------------------------------------------
HRESULT __thiscall meth_unk0008C_1000A820(unk0008C *this) {
  IDirectDraw2 *dd2;           // edx
  IDirectDraw2Vtbl *dd2Vtbl;   // eax
  HRESULT result;              // eax
  int v5;                      // eax
  DDSURFACEDESC ddSurfaceDesc; // [esp+8h] [ebp-6Ch] BYREF

  if ( !this->? )
    return -2005522669;
  dd2 = this->? ;
  if (!dd2)
    return -2005522669;
  memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
  dd2Vtbl = dd2->lpVtbl;
  ddSurfaceDesc.dwSize = 108;
  ddSurfaceDesc.dwFlags = DDPF_PALETTEINDEXED8 | DDPF_ALPHAPIXELS;
  ddSurfaceDesc.ddsCaps.dwCaps =
      DDPF_ZPIXELS | DDPF_YUV | DDPF_PALETTEINDEXEDTO8 | DDPF_PALETTEINDEXED4;
  ddSurfaceDesc.dwBackBufferCount = 1;
  result = dd2Vtbl->CreateSurface(dd2, &ddSurfaceDesc, &this->?, 0);
  if (result >= 0) {
    result = meth_unk0008C_1000A8D0(this);
    if (result >= 0) {
      v5 = this->? ;
      LOBYTE(v5) = v5 | 4;
      this->? = v5;
      result = 0;
    }
  }
  return result;
}
