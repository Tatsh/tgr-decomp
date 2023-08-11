#include "types-win32.h"
//----- (1005AFA0) --------------------------------------------------------
int meth_unk000C8_8() {
  LPDIRECT3DVIEWPORT2 v0; // ebx
  unk0008C *v1;           // eax
  unk0008C *v2;           // esi
  LPDIRECT3DVIEWPORT2 v3; // edi
  IDirect3DMaterial2 *v4; // eax
  int v6[4];              // [esp+10h] [ebp-10h] BYREF

  v0 = gUnk334->u8c->lpDirect3DViewport2;
  if (!gUnk334->u8c->lpDirect3D2 || !gUnk334->u8c->lpDirect3DDevice || !v0)
    return -2147467259;
  v6[0] = 0;
  v6[2] = gWidth;
  v6[1] = 0;
  v6[3] = gHeight;
  v1 = gUnk334->u8c->field_8;
  *(_DWORD *)v1->gap4 = 1048608897;
  v1->field_8 = 0;
  *(_DWORD *)v1->gapC = 0;
  v1->lpDirectDrawSurface1 = (IDirectDrawSurface *)1;
  v2 = gUnk334->u8c->field_8;
  v3 = gUnk334->u8c->lpDirect3DViewport2;
  v4 = v2->lpDirect3DMaterial2;
  v2->lpDirectDrawSurface1 = 0;
  v2->field_4C = 1;
  v4->lpVtbl->SetMaterial(v4, (LPD3DMATERIAL)v2);
  v3->lpVtbl->SetBackground(v3, v2->field_50);
  v0->lpVtbl->Clear(v0, 1, (LPD3DRECT)v6, 3);
  return 0;
}
// 100A81C0: using guessed type int gWidth;
// 100A81C4: using guessed type int gHeight;
