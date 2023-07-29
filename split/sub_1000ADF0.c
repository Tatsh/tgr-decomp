//----- (1000ADF0) --------------------------------------------------------
int __thiscall sub_1000ADF0(gameSpecificUnk0 *this)
{
  IDirect3D2 *v2; // eax
  IDirect3DViewport2 **v3; // esi
  int result; // eax
  int v5; // ebx
  int v6; // ebx
  int v7; // eax

  v2 = this->d3d2;
  if ( !v2 || !this->lpD3DDevice2 )
    return -2005522669;
  v3 = &this->lpD3DViewport;
  result = v2->lpVtbl->CreateViewport(v2, &this->lpD3DViewport, 0);
  if ( result < 0 )
    return result;
  v5 = this->lpD3DDevice2->lpVtbl->AddViewport(this->lpD3DDevice2, *v3);
  if ( v5 < 0 )
    goto LABEL_9;
  v6 = sub_1000AFB0(this);
  if ( v6 < 0 )
  {
    this->lpD3DDevice2->lpVtbl->DeleteViewport(this->lpD3DDevice2, *v3);
    (*v3)->lpVtbl->Release(*v3);
    *v3 = 0;
    return v6;
  }
  v5 = flipSurfaces(this);
  if ( v5 < 0 )
  {
    this->lpD3DDevice2->lpVtbl->DeleteViewport(this->lpD3DDevice2, *v3);
LABEL_9:
    (*v3)->lpVtbl->Release(*v3);
    *v3 = 0;
    return v5;
  }
  v7 = this->field_1C;
  LOBYTE(v7) = v7 | 0x10;
  this->field_1C = v7;
  return 0;
}
