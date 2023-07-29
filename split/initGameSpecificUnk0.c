//----- (1000A190) --------------------------------------------------------
gameSpecificUnk0 *__thiscall initGameSpecificUnk0(gameSpecificUnk0 *this)
{
  int v1; // eax

  memset(this, 0, 0x8Cu);
  v1 = this->unkMeth1;
  this->field_10 = 140;
  LOBYTE(v1) = v1 | 4;
  this->unkMeth1 = v1;
  return this;
}
