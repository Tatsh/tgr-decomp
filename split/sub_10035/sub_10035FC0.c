//----- (10035FC0) --------------------------------------------------------
int __thiscall sub_10035FC0(_DWORD *this)
{
  int result; // eax

  result = this[1] & *this;
  *this &= ~this[1];
  this[1] = result;
  return result;
}
