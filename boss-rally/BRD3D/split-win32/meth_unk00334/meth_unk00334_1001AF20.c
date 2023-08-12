#include "types-win32.h"
//----- (1001AF20) --------------------------------------------------------
HRESULT __thiscall meth_unk00334_1001AF20(unk00334 *a1, IDirect3DDevice2 *dev2) {
  HRESULT hr;                           // eax
  IDirect3DDevice2Vtbl *d3dDevice2Vtbl; // ecx
  unk0008C *v5;                         // eax
  int context;                          // [esp+Ch] [ebp-Ch] BYREF
  int v7;                               // [esp+10h] [ebp-8h]
  unk00334 *v8;                         // [esp+14h] [ebp-4h]

  if (((int)a1->ddCapsFlags & 2) != 0)
    return 0;
  if (!dev2)
    return -2005522670;
  d3dDevice2Vtbl = dev2->lpVtbl;
  context = 1;
  v8 = a1;
  v7 = 0;
  hr = d3dDevice2Vtbl->EnumTextureFormats(dev2, graphics_enumTextureFormatsCallback, &context);
  if (hr >= 0) {
    if (context && v7 && a1->ddCaps0.dwRops[6] == v7) {
      v5 = a1->ddCapsFlags;
      LOBYTE(v5) = (int)a1->ddCapsFlags | 2;
      a1->ddCapsFlags = v5;
      hr = 0;
    } else {
      hr = 2289444625;
    }
  }
  return hr;
}
