#include "../types-win32.h"
//----- (1000AF00) --------------------------------------------------------
HRESULT __thiscall flipSurfaces(unk0 *this)
{
  unk0_member2 *v2; // eax
  unk0_member2 *v3; // edi
  IDirect3DViewport2 *d3dViewport2; // ebx
  LPDIRECT3DMATERIAL2 direct3DMaterial2; // eax
  HRESULT hr; // edi
  D3DRECT rect; // [esp+10h] [ebp-10h] BYREF

  rect.x2 = g_Width;
  rect.y2 = g_Height;
  v2 = this->unknown;
  rect.x1 = 0;
  rect.y1 = 0;
  v2->d3dMaterial.diffuse.r = 0.0;
  v2->d3dMaterial.diffuse.g = 0.0;
  v2->d3dMaterial.diffuse.b = 0.0;
  v2->field_58 = 1;
  v3 = this->unknown;
  d3dViewport2 = this->lpDirect3DViewport2;
  direct3DMaterial2 = v3->lpDirect3DMaterial2;
  v3->field_58 = 0;
  v3->d3dMaterial.dwRampSize = 1;
  direct3DMaterial2->lpVtbl->SetMaterial(direct3DMaterial2, &v3->d3dMaterial);
  d3dViewport2->lpVtbl->SetBackground(d3dViewport2, v3->lpD3DMaterialHandle);
  this->lpDirect3DViewport2->lpVtbl->Clear(this->lpDirect3DViewport2, 1, &rect, D3DCLEAR_ZBUFFER|D3DCLEAR_TARGET);
  hr = this->lpDDrawSurface2->lpVtbl->Flip(this->lpDDrawSurface2, this->lpDDrawSurface1, DDFLIP_WAIT);
  while ( this->lpDDrawSurface2->lpVtbl->GetFlipStatus(this->lpDDrawSurface2, DDGFS_ISFLIPDONE) )
    ;
  return hr;
}
// 100A81C0: using guessed type int g_Width;
// 100A81C4: using guessed type int g_Height;
