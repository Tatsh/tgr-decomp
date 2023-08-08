#include "types-win32.h"
//----- (1000ADF0) --------------------------------------------------------
HRESULT __thiscall meth_1000ADF0(unk334 *this) {
    IDirect3D2 *d3d2;                      // eax
    IDirect3DViewport2 *direct3DViewport2; // esi
    HRESULT hr;                            // eax
    HRESULT hr_1;                          // ebx
    HRESULT hr_2;                          // ebx
    int v7;                                // eax

    d3d2 = this->? ;
  if ( !d3d2 || !this->? )
      return -2005522669;
  direct3DViewport2 = (IDirect3DViewport2 *)&this->? ;
  hr = d3d2->lpVtbl->CreateViewport(d3d2, &this->?, 0);
  if (hr < 0)
      return hr;
  hr_1 = this->?->lpVtbl->AddViewport(this->?, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
  if (hr_1 < 0)
      goto LABEL_9;
  hr_2 = meth_1000AFB0(this);
  if (hr_2 < 0) {
      this->?->lpVtbl->DeleteViewport(this->?, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
      (*((void(__stdcall **)(IDirect3DViewport2Vtbl *))direct3DViewport2->lpVtbl->QueryInterface +
         2))(direct3DViewport2->lpVtbl);
      direct3DViewport2->lpVtbl = 0;
      return hr_2;
  }
  hr_1 = flipSurfaces(this);
  if (hr_1 < 0) {
      this->?->lpVtbl->DeleteViewport(this->?, (LPDIRECT3DVIEWPORT2)direct3DViewport2->lpVtbl);
  LABEL_9:
      (*((void(__stdcall **)(IDirect3DViewport2Vtbl *))direct3DViewport2->lpVtbl->QueryInterface +
         2))(direct3DViewport2->lpVtbl);
      direct3DViewport2->lpVtbl = 0;
      return hr_1;
  }
  v7 = this->field_1C;
  LOBYTE(v7) = v7 | 0x10;
  this->field_1C = v7;
  return 0;
}
