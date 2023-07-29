//----- (10069BC0) --------------------------------------------------------
int __thiscall sub_10069BC0(_WORD *this, int a2, int a3)
{
  switch ( a2 )
  {
    case 1:
      return this[3 * a3 + 84] & 0xFF00;
    case 2:
      return this[3 * a3 + 168] & 0xFF00;
    case 3:
      return this[3 * a3 + 252] & 0xFF00;
  }
  return this[3 * a3] & 0xFF00;
}
