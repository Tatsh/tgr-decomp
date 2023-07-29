//----- (1000C000) --------------------------------------------------------
int __cdecl sub_1000C000(int a1, int *a2, int a3, int a4, int a5)
{
  int result; // eax

  result = *a2;
  if ( (unsigned int)*a2 > 0x21 )
  {
    result -= 49;
    if ( result == 214 )
      result = sub_100360F0(a1, a2[3], a2[4], a2[2], a5);
  }
  else if ( *a2 != 33 )
  {
    result -= 3;
    if ( result )
    {
      result -= 2;
      if ( !result )
      {
        result = dword_100AC300;
        if ( !dword_100AC300 )
        {
          sub_10071480(a2[2]);
          result = sub_10005FE0(a2[2]);
        }
      }
    }
  }
  return result;
}
// 100360F0: using guessed type _DWORD __cdecl sub_100360F0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10071480: using guessed type _DWORD __cdecl sub_10071480(_DWORD);
// 100AC300: using guessed type int dword_100AC300;
