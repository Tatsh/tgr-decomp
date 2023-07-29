//----- (1000A350) --------------------------------------------------------
int __thiscall sub_1000A350(gameSpecificUnk0 *this)
{
  SendMessageA(this->hwnd, 0xBD1u, 0, (LPARAM)this);
  sub_1000AD70(this);
  sub_1000A8A0(this);
  sub_1000A800(this);
  releaseD3D2_DDraw2_DDraw(this);
  return 0;
}
