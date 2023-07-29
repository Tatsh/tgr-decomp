//----- (1001AF20) --------------------------------------------------------
HRESULT __thiscall sub_1001AF20(GUID *guid, IDirect3DDevice2 *dev)
{
  HRESULT result; // eax
  IDirect3DDevice2Vtbl *v4; // ecx
  unsigned int v5; // eax
  int context; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h]
  GUID *v8; // [esp+14h] [ebp-4h]

  if ( (guid->Data1 & 2) != 0 )
    return 0;
  if ( !dev )
    return -2005522670;
  v4 = dev->lpVtbl;
  context = 1;
  v8 = guid;
  v7 = 0;
  result = v4->EnumTextureFormats(dev, (LPD3DENUMTEXTUREFORMATSCALLBACK)enumTextureFormatsCallback, &context);
  if ( result >= 0 )
  {
    if ( context && v7 && *(_DWORD *)&guid[33].Data2 == v7 )
    {
      v5 = guid->Data1;
      LOBYTE(v5) = guid->Data1 | 2;
      guid->Data1 = v5;
      result = 0;
    }
    else
    {
      result = -2005522671;
    }
  }
  return result;
}
