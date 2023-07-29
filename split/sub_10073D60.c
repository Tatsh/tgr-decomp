//----- (10073D60) --------------------------------------------------------
int __thiscall sub_10073D60(_DWORD *this, char a2)
{
  int result; // eax

  sub_10073F20();
  *(_BYTE *)(this[4] + this[3]) = a2;
  result = this[3] + 1;
  this[3] = result;
  return result;
}
// 10073F20: using guessed type int sub_10073F20(void);
