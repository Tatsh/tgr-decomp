//----- (1000A800) --------------------------------------------------------
int __thiscall RestoreDisplayMode(gameSpecificUnk0 *this)
{
  IDirectDraw2 *ddraw2; // ecx

  this->field_1C &= 0xFFFFFFFD;
  ddraw2 = this->ddraw2;
  if ( ddraw2 )
    ddraw2->lpVtbl->RestoreDisplayMode(ddraw2);
  return 0;
}
