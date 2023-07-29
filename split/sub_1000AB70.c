//----- (1000AB70) --------------------------------------------------------
int __thiscall sub_1000AB70(gameSpecificUnk0 *this)
{
  LPDIRECTDRAWSURFACE lpSurface; // eax
  IDirectDrawSurfaceVtbl *iSurface; // edx
  int result; // eax
  BOOL v5; // eax
  IID *v6; // edi
  unsigned __int8 *v7; // edi
  int v8; // ebp
  char v9; // al
  IDirectDrawSurfaceVtbl *v10; // edx
  DWORD v11; // ebx
  int v12; // edx
  IDirectDraw2 *v13; // eax
  LPDIRECTDRAWSURFACE *ddSurface; // edi
  IDirectDraw2Vtbl *v15; // edx
  LPDIRECT3DDEVICE2 *lplpD3DDevice2; // edi
  int *v17; // esi
  LPDIRECTDRAWSURFACE v18; // [esp-8h] [ebp-8Ch]
  unsigned int v19; // [esp-4h] [ebp-88h]
  DDSCAPS v20; // [esp+10h] [ebp-74h] BYREF
  DWORD v21; // [esp+14h] [ebp-70h]
  DDSURFACEDESC v22; // [esp+18h] [ebp-6Ch] BYREF

  if ( !this->hwnd )
    return -2005522669;
  if ( !IsWindow(this->hwnd) )
    return -2005522669;
  if ( !this->refclsid )
    return -2005522669;
  if ( !this->u0 )
    return -2005522669;
  if ( !this->ddraw2 )
    return -2005522669;
  if ( !this->d3d2 )
    return -2005522669;
  lpSurface = this->lpDDrawSurface2;
  if ( !lpSurface )
    return -2005522669;
  iSurface = lpSurface->lpVtbl;
  v20.dwCaps = 4;
  result = iSurface->GetAttachedSurface(lpSurface, &v20, &this->lpDDrawSurface1);
  if ( result < 0 )
    return result;
  v5 = sub_1001AD90((IID **)this->refclsid);
  v6 = this->refclsid;
  if ( v5 )
  {
    v7 = &v6[1].Data4[4];
    v8 = 0x4000;
  }
  else
  {
    v7 = v6[17].Data4;
    v8 = 2048;
  }
  v9 = this->unkMeth1;
  this->field_C = 0;
  if ( (v9 & 4) != 0 && v7 && *((_DWORD *)v7 + 40) )
  {
    v18 = this->lpDDrawSurface2;
    v10 = v18->lpVtbl;
    v22.dwSize = 108;
    result = v10->GetSurfaceDesc(v18, &v22);
    if ( result < 0 )
      return result;
    v11 = v22.dwWidth;
    v19 = *((_DWORD *)v7 + 40);
    v21 = v22.dwHeight;
    v12 = sub_1001A870(v19);
    memset(&v22, 0, sizeof(v22));
    v13 = this->ddraw2;
    v22.dwHeight = v21;
    ddSurface = &this->lpDDSurface;
    v22.dwMipMapCount = v12;
    v15 = v13->lpVtbl;
    v22.dwSize = 108;
    v22.dwFlags = 71;
    v22.ddsCaps.dwCaps = v8 | 0x20000;
    v22.dwWidth = v11;
    if ( v15->CreateSurface(v13, &v22, &this->lpDDSurface, 0) >= 0 )
    {
      if ( this->lpDDrawSurface1->lpVtbl->AddAttachedSurface(this->lpDDrawSurface1, *ddSurface) >= 0 )
      {
        this->field_C = 1;
      }
      else if ( *ddSurface )
      {
        (*ddSurface)->lpVtbl->Release(*ddSurface);
        *ddSurface = 0;
      }
    }
  }
  lplpD3DDevice2 = &this->lpD3DDevice2;
  result = this->d3d2->lpVtbl->CreateDevice(
             this->d3d2,
             (IID *)&this->refclsid->Data2,
             this->lpDDrawSurface1,
             &this->lpD3DDevice2);
  if ( result >= 0 )
  {
    g_D3DDevice2 = *lplpD3DDevice2;
    setup_g_DevCaps(g_D3DDevice2);
    sub_1001AF20(this->refclsid, *lplpD3DDevice2);
    this->field_1C |= 8u;
    result = sub_1000ADF0(this);
    if ( result >= 0 )
    {
      v17 = (int *)this[1].field_30;
      if ( v17 )
        sub_10001160(v17);
      enumTextureFormatsSomething(g_D3DDevice2);
      result = 0;
    }
  }
  return result;
}
