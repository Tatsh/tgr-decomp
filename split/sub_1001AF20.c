//----- (1001AF20) --------------------------------------------------------
HRESULT __thiscall sub_1001AF20(int a1, IDirect3DDevice2 *dev)
{
  HRESULT result; // eax
  IDirect3DDevice2Vtbl *d3dDevice2Vtbl; // ecx
  int v5; // eax
  int context; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  if ( (*(_BYTE *)a1 & 2) != 0 )
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
    if ( context && v7 && *(_DWORD *)(a1 + 532) == v7 )
    {
      v5 = *(_DWORD *)a1;
      LOBYTE(v5) = *(_DWORD *)a1 | 2;
      *(_DWORD *)a1 = v5;
      result = 0;
    }
    else
    {
      result = -2005522671;
    }
  }
  return result;
}
