//----- (1000A590) --------------------------------------------------------
int __thiscall setCooperativeLevel(gameSpecificUnk0 *this)
{
  HRESULT v2; // eax

  if ( !this->hwnd || !IsWindow(this->hwnd) )
    return -2005522669;
  v2 = this->ddraw2->lpVtbl->SetCooperativeLevel(this->ddraw2, this->hwnd, 17);
  return v2 >= 0 ? 0 : v2;
}
