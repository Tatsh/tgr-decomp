//----- (10073BC0) --------------------------------------------------------
char __thiscall sub_10073BC0(_DWORD *this)
{
  int v2; // ecx
  char result; // al

  sub_10073D20(this);
  v2 = this[1];
  result = *(_BYTE *)(this[4] + v2);
  this[1] = v2 + 1;
  return result;
}
