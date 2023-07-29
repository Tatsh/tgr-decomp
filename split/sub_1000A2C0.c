//----- (1000A2C0) --------------------------------------------------------
HRESULT __thiscall sub_1000A2C0(gameSpecificUnk0 *lParam)
{
  HRESULT result; // eax
  HRESULT v3; // esi

  if ( !lParam->hwnd || !IsWindow(lParam->hwnd) )
    return -2005522669;
  result = sub_1000A390(lParam);
  if ( result >= 0 )
  {
    v3 = sub_1000A480(lParam);
    if ( v3 >= 0
      && (v3 = setCooperativeLevel(lParam), v3 >= 0)
      && (v3 = sub_1000A5D0(lParam), v3 >= 0)
      && (v3 = sub_1000A820(lParam), v3 >= 0)
      && (v3 = sub_1000AB70(lParam), v3 >= 0) )
    {
      SendMessageA(lParam->hwnd, 0xBD0u, 0, (LPARAM)lParam);
      result = 0;
    }
    else
    {
      sub_1000A350(lParam);
      result = v3;
    }
  }
  return result;
}
