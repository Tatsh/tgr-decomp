#include "../../types-win32.h"
//----- (1001AF20) --------------------------------------------------------
HRESULT __thiscall meth_1001AF20(unk0 *a1, IDirect3DDevice2 *dev)
{
  HRESULT result; // eax
  IDirect3DDevice2Vtbl *d3dDevice2Vtbl; // ecx
  void *v5; // eax
  int context; // [esp+Ch] [ebp-Ch] BYREF
  IDirectDrawSurface *v7; // [esp+10h] [ebp-8h]
  unk0 *v8; // [esp+14h] [ebp-4h]

  if ( ((int)a1->field_27 & 2) != 0 )
    return 0;
  if ( !dev )
    return -2005522670;
  d3dDevice2Vtbl = dev->lpVtbl;
  context = 1;
  v8 = a1;
  v7 = 0;
  result = d3dDevice2Vtbl->EnumTextureFormats(
             dev,
             (LPD3DENUMTEXTUREFORMATSCALLBACK)enumTextureFormatsCallback,
             &context);
  if ( result >= 0 )
  {
    if ( context && v7 && a1[3].field_3 == v7 )
    {
      v5 = a1->field_27;
      LOBYTE(v5) = (int)a1->field_27 | 2;
      a1->field_27 = v5;
      result = 0;
    }
    else
    {
      result = -2005522671;
    }
  }
  return result;
}
