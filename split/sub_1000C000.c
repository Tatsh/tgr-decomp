//----- (1000C000) --------------------------------------------------------
void __cdecl sub_1000C000(int a1, int *a2)
{
  int v2; // eax
  int v3; // eax

  v2 = *a2;
  if ( (unsigned int)*a2 > 0x21 )
  {
    if ( v2 == 263 )
      sub_100360F0(a1, a2[3], a2[4], (void *)a2[2]);
  }
  else if ( *a2 != 33 )
  {
    v3 = v2 - 3;
    if ( v3 )
    {
      if ( v3 == 2 && !dword_100AC300 )
      {
        sub_10071480(a2[2]);
        np_sub_10005FE0(a2[2]);
      }
    }
  }
}
// 100AC300: using guessed type int dword_100AC300;
