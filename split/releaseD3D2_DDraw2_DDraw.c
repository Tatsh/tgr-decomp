//----- (1000A540) --------------------------------------------------------
int __thiscall releaseD3D2_DDraw2_DDraw(gameSpecificUnk0 *this)
{
  IDirect3D2 *v2; // eax
  IDirectDraw2 *v3; // eax
  LPDIRECTDRAW v4; // eax

  v2 = this->d3d2;
  this->field_1C &= 0xFFFFFFFE;
  if ( v2 )
  {
    v2->lpVtbl->Release(v2);
    this->d3d2 = 0;
    g_pD3D2 = 0;
  }
  v3 = this->ddraw2;
  if ( v3 )
  {
    v3->lpVtbl->Release(this->ddraw2);
    this->ddraw2 = 0;
  }
  v4 = this->lpDDraw;
  if ( v4 )
  {
    v4->lpVtbl->Release(this->lpDDraw);
    this->lpDDraw = 0;
  }
  return 0;
}
