//----- (10009BD0) --------------------------------------------------------
HRESULT __cdecl enumTextureFormatsSomething(IDirect3DDevice2 *dev)
{
  int *contextStart; // esi
  HRESULT (__stdcall *enumTextureFormats)(IDirect3DDevice2 *, LPD3DENUMTEXTUREFORMATSCALLBACK, void *); // ebp
  HRESULT result; // eax

  contextStart = &d3dEnumTextureFormatsContextStart;
  enumTextureFormats = dev->lpVtbl->EnumTextureFormats;
  do
  {
    memset(contextStart + 1, 0, 32u);
    *(_WORD *)contextStart = 8;
    enumTextureFormats(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
    *(_WORD *)contextStart = 16;
    enumTextureFormats(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
    result = contextStart[4];
    if ( !result )
    {
      *(_WORD *)contextStart = 32;
      result = enumTextureFormats(dev, d3dEnumTextureFormatsCallback, contextStart - 1);
    }
    contextStart += 10;
  }
  while ( (int)contextStart < (int)&g_D3dwaitflipdon );
  return result;
}
// 100A62FC: using guessed type int g_D3dwaitflipdon;
