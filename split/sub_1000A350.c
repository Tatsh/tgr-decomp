//----- (1000A350) --------------------------------------------------------
int __thiscall sub_1000A350(gameSpecificUnk0 *this)
{
  SendMessageA(this->hwnd, 0xBD1u, 0, (LPARAM)this);
  ReleaseDDrawSurface(this);
  ReleaseDDraw2Surface(this);
  RestoreDisplayMode(this);
  releaseD3D2_DDraw2_DDraw(this);
  return 0;
}
