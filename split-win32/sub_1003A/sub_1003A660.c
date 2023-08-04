#include "../../types-win32.h"
//----- (1003A660) --------------------------------------------------------
int __cdecl sub_1003A660(int a1, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = a1;
  if ( a1 < 0 )
    v2 = 0;
  if ( v2 >= 64 )
    v2 = 63;
  result = a2;
  if ( a2 < 0 )
    result = 0;
  if ( result >= 64 )
    result = 63;
  if ( v2 < dword_10A9BBD0[result] )
    dword_10A9BBD0[result] = v2;
  if ( v2 > dword_10A9BCD0[result] )
    dword_10A9BCD0[result] = v2;
  return result;
}
// 10A9BBD0: using guessed type int dword_10A9BBD0[];
