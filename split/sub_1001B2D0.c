//----- (1001B2D0) --------------------------------------------------------
int __thiscall sub_1001B2D0(gameSpecificUnk1 *this, const void *a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)this;
  if ( (v3 & 1) != 0 )
  {
    if ( a2 )
    {
      if ( !memcmp(a2, &this[4], 0x10u) )
        return 1;
    }
    else if ( (v3 & 2) != 0 )
    {
      return 1;
    }
  }
  return 0;
}
