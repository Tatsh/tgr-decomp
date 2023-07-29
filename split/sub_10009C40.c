//----- (10009C40) --------------------------------------------------------
IDirectDraw2 *__thiscall sub_10009C40(unk2 *this, IDirect3DDevice2 *dev, unsigned __int8 *a3, DWORD dwWidth, DWORD dwHeight, int a6, DWORD dwColorKeyValue)
{
  IDirectDraw2 *dd; // eax
  IDirectDraw2 *dd_1; // ebp
  HRESULT (__stdcall *createSurfaceFunc)(IDirectDraw2 *, LPDDSURFACEDESC, LPDIRECTDRAWSURFACE *, IUnknown *); // esi
  LPDIRECTDRAWSURFACE *lpDDSurface; // edi
  LPDIRECTDRAWSURFACE ddSurface; // [esp+3Ch] [ebp-284h]
  IDirect3DTexture2 *d3dTex2; // [esp+50h] [ebp-270h] BYREF
  DDCOLORKEY aColorSpaceValues; // [esp+54h] [ebp-26Ch] BYREF
  DDSURFACEDESC ddSurfaceDesc; // [esp+5Ch] [ebp-264h] BYREF
  D3DDEVICEDESC hardwareDesc; // [esp+C8h] [ebp-1F8h] BYREF
  D3DDEVICEDESC helDesc; // [esp+1C4h] [ebp-FCh] BYREF

  dd = GetDeviceIDirectDraw2_Released(dev);
  dd_1 = dd;
  if ( !dd )
    return dd;
  sub_1000A0B0(this);
  memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
  ddSurfaceDesc.dwSize = 108;
  qmemcpy(&ddSurfaceDesc.ddpfPixelFormat, GetDDPixelFormatPtr(a6), sizeof(ddSurfaceDesc.ddpfPixelFormat));
  ddSurfaceDesc.dwFlags |= 0x1007u;
  ddSurfaceDesc.dwHeight = dwHeight;
  memset(&hardwareDesc, 0, sizeof(hardwareDesc));
  ddSurfaceDesc.dwWidth = dwWidth;
  memset(&helDesc, 0, sizeof(helDesc));
  hardwareDesc.dwSize = 252;
  helDesc.dwSize = 252;
  dev->lpVtbl->GetCaps(dev, &hardwareDesc, &helDesc);
  createSurfaceFunc = dd_1->lpVtbl->CreateSurface;
  lpDDSurface = &this->lpDDSurface;
  ddSurfaceDesc.ddsCaps.dwCaps = hardwareDesc.dcmColorModel != 0 ? 0x4005000 : 0x1800;
  if ( createSurfaceFunc(dd_1, &ddSurfaceDesc, &this->lpDDSurface, 0) )
    goto LABEL_10;
  if ( hardwareDesc.dcmColorModel )
  {
    ddSurfaceDesc.ddsCaps.dwCaps = 0x1800;
    if ( !createSurfaceFunc(dd_1, &ddSurfaceDesc, &this->ddSurface, 0) )
      goto LABEL_7;
LABEL_10:
    sub_1000A0B0(this);
    return 0;
  }
  ddSurface = *lpDDSurface;
  this->ddSurface = *lpDDSurface;
  ddSurface->lpVtbl->AddRef(ddSurface);
LABEL_7:
  if ( dwColorKeyValue )
  {
    aColorSpaceValues.dwColorSpaceLowValue = dwColorKeyValue;
    aColorSpaceValues.dwColorSpaceHighValue = dwColorKeyValue;
    this->ddSurface->lpVtbl->SetColorKey(this->ddSurface, 8, &aColorSpaceValues);
    (*lpDDSurface)->lpVtbl->SetColorKey(*lpDDSurface, 8, &aColorSpaceValues);
  }
  if ( !sub_10009ED0(this, (char *)a3, dwWidth, dwHeight) )
    goto LABEL_10;
  (*lpDDSurface)->lpVtbl->QueryInterface(*lpDDSurface, &CLSID_IDirect3DTexture2, (LPVOID *)&d3dTex2);
  d3dTex2->lpVtbl->GetHandle(d3dTex2, dev, &this->d3dTextureHandle);
  d3dTex2->lpVtbl->Release(d3dTex2);
  return (IDirectDraw2 *)1;
}
