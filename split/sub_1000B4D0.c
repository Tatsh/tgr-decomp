//----- (1000B4D0) --------------------------------------------------------
HRESULT __thiscall sub_1000B4D0(gameSpecificUnk0 *this, int a2, int a3, IID *a4, int a5)
{
  gameSpecificUnk1 *v6; // edi
  IID **v7; // ebp
  unk0 *v8; // eax
  unk0 *v9; // ebx
  HRESULT result; // eax
  IID *v11; // edi
  HRESULT v12; // edi
  unk0 *v13; // [esp+10h] [ebp-4h]

  if ( !this->hwnd || !IsWindow(this->hwnd) )
    return -2005522669;
  v6 = this->gameSpecificUnk1_instance;
  v7 = (IID **)this->refclsid;
  v13 = this->u0;
  v8 = sub_1001B490(v6, a2, a3, (int)a4, 0, 0, 0);
  v9 = v8;
  if ( !v8 )
    return -2005522670;
  if ( sub_1001ACF0(v8, v7) )
  {
    v11 = 0;
  }
  else
  {
    v11 = (IID *)sub_1001B7C0(v6, v7 + 1, v9, (IID **__attribute__((__org_arrdim(0,3))) *)&a4, 0);
    if ( !v11 )
    {
      v11 = a4;
      if ( !a4 )
        return -2005522671;
    }
  }
  sub_1000AD70(this);
  sub_1000A8A0(this);
  this->u0 = v9;
  if ( v11 )
    this->refclsid = v11;
  result = sub_1000A5D0(this);
  if ( result >= 0 )
  {
    v12 = sub_1000A820(this);
    if ( v12 < 0 )
    {
      this->u0 = v13;
LABEL_17:
      this->refclsid = (IID *)v7;
      sub_1000A5D0(this);
      sub_1000A820(this);
      sub_1000AB70(this);
      return v12;
    }
    v12 = sub_1000AB70(this);
    if ( v12 < 0 )
    {
      sub_1000A8A0(this);
      this->u0 = v13;
      goto LABEL_17;
    }
    SendMessageA(this->hwnd, 0xBD3u, 0, 0);
    result = 0;
  }
  return result;
}
