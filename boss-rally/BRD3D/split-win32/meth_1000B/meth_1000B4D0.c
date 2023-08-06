#include "../../types-win32.h"
//----- (1000B4D0) --------------------------------------------------------
HRESULT __thiscall meth_1000B4D0(unk0 *this, int a2, int a3, int a4, int a5)
{
  int v6; // edi
  int v7; // ebp
  unk0 *v8; // eax
  unk1 *v9; // ebx
  HRESULT result; // eax
  void *v11; // edi
  HRESULT v12; // edi
  int v13; // [esp+10h] [ebp-4h]

  if ( !this->hwnd || !IsWindow(this->hwnd) )
    return -2005522669;
  v6 = (int)this->gameSpecificUnk1_instance;
  v7 = (int)this->unk;
  v13 = (int)this->u0;
  v8 = (unk0 *)meth_1001B490((_DWORD *)v6, a2, a3, a4, 0, 0, 0);
  v9 = (unk1 *)v8;
  if ( !v8 )
    return -2005522670;
  if ( meth_1001ACF0(v8, v7) )
  {
    v11 = 0;
  }
  else
  {
    v11 = (void *)meth_1001B7C0((unk0 *)v6, (const void *)(v7 + 4), (unk0 *)v9, (int)&a4, 0);
    if ( !v11 )
    {
      v11 = (void *)a4;
      if ( !a4 )
        return -2005522671;
    }
  }
  ReleaseDDrawSurface(this);
  ReleaseDDraw2Surface(this);
  this->u0 = v9;
  if ( v11 )
    this->unk = v11;
  result = meth_1000A5D0(this);
  if ( result >= 0 )
  {
    v12 = meth_1000A820(this);
    if ( v12 < 0 )
    {
      this->u0 = (unk1 *)v13;
LABEL_17:
      this->unk = (void *)v7;
      meth_1000A5D0(this);
      meth_1000A820(this);
      meth_1000AB70(this);
      return v12;
    }
    v12 = meth_1000AB70(this);
    if ( v12 < 0 )
    {
      ReleaseDDraw2Surface(this);
      this->u0 = (unk1 *)v13;
      goto LABEL_17;
    }
    SendMessageA(this->hwnd, 0xBD3u, 0, 0);
    result = 0;
  }
  return result;
}
