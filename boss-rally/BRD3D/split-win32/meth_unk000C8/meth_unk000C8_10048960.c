#include "types-win32.h"
//----- (10048960) --------------------------------------------------------
HRESULT __thiscall meth_unk000C8_10048960(unk000C8 *this) {
  LPDIRECTDRAWSURFACE v1;                               // esi
  IDirectDrawSurfaceVtbl *v2;                           // edi
  HRESULT(__stdcall * v3)(IDirectDrawSurface *, DWORD); // edi
  HRESULT result;                                       // eax

  v1 = gUnk334->u8c->lpDirectDrawSurface0;
  v2 = v1->lpVtbl;
  v1->lpVtbl->Flip(v1, gUnk334->u8c->lpDirectDrawSurface1, 1);
  v3 = v2->GetFlipStatus;
  for (result = v3(v1, 2); result; result = v3(v1, 2))
      Sleep(0);
  return result;
}
