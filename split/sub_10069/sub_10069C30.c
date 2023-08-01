//----- (10069C30) --------------------------------------------------------
char __thiscall sub_10069C30(_WORD *this, int a2, int a3)
{
  unsigned int v3; // eax
  int v4; // eax

  if ( a2 == 1 )
  {
    v3 = 3 * (a3 + 28);
    LOWORD(v3) = this[3 * a3 + 84];
    if ( (unsigned __int16)v3 >= 0x8000u )
      v3 >>= 8;
  }
  else
  {
    if ( a2 == 2 )
    {
      v4 = a3 + 56;
    }
    else
    {
      if ( a2 != 3 )
      {
        LOBYTE(v3) = this[3 * a3];
        return v3;
      }
      v4 = a3 + 84;
    }
    v3 = 3 * v4;
    LOWORD(v3) = this[v3];
    if ( (unsigned __int16)v3 >= 0x8000u )
      v3 >>= 8;
  }
  return v3;
}
