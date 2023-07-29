//----- (1000A480) --------------------------------------------------------
int __thiscall sub_1000A480(gameSpecificUnk0 *this)
{
  gameSpecificUnk1 *v2; // eax
  int result; // eax
  GUID *v4; // eax
  HRESULT v5; // edi
  int v6; // edi
  int v7; // eax

  if ( !this->gameSpecificUnk1_instance )
  {
    v2 = sub_1001A550(0);
    this->gameSpecificUnk1_instance = v2;
    if ( !v2 )
      return -2005522669;
  }
  v4 = getDirectDrawLPGUID(this->gameSpecificUnk1_instance);
  v5 = DirectDrawCreate(v4, &this->lpDDraw, 0);
  if ( v5 < 0 )
    goto LABEL_8;
  v6 = this->lpDDraw->lpVtbl->QueryInterface(this->lpDDraw, &CLSID_IDirectDraw2, (LPVOID *)&this->ddraw2);
  if ( v6 < 0 )
  {
    MessageBoxA(this->hwnd, Text, Caption, 0x10u);
    releaseD3D2_DDraw2_DDraw(this);
    return v6;
  }
  v5 = this->ddraw2->lpVtbl->QueryInterface(this->ddraw2, &IID_IDirect3D2, (LPVOID *)&this->d3d2);
  if ( v5 >= 0 )
  {
    g_pD3D2 = this->d3d2;
    v7 = this->field_1C;
    LOBYTE(v7) = v7 | 1;
    this->field_1C = v7;
    result = 0;
  }
  else
  {
LABEL_8:
    releaseD3D2_DDraw2_DDraw(this);
    result = v5;
  }
  return result;
}
