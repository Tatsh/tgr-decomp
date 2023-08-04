#include "../../types-win32.h"
//----- (1000A2C0) --------------------------------------------------------
HRESULT __thiscall sub_1000A2C0(unk0 *this)
{
  HRESULT result; // eax
  HRESULT v3; // esi

  if ( !this->hwnd || !IsWindow(this->hwnd) )
    return -2005522669;
  result = sub_1000A390(this);
  if ( result >= 0 )
  {
    v3 = meth_1000A480(this);
    if ( v3 >= 0
      && (v3 = SetCooperativeLevel(this), v3 >= 0)
      && (v3 = meth_1000A5D0(this), v3 >= 0)
      && (v3 = meth_1000A820(this), v3 >= 0)
      && (v3 = meth_1000AB70(this), v3 >= 0) )
    {
      SendMessageA(this->hwnd, 0xBD0u, 0, (LPARAM)this);
      result = 0;
    }
    else
    {
      sub_1000A350(this);
      result = v3;
    }
  }
  return result;
}
