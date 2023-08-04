#include "../../types-n64.h"
//----- (80228A3C) --------------------------------------------------------
int __fastcall sub_80228A3C(_WORD *a1)
{
  int result; // $v0
  _WORD *v2; // $v1

  result = 0;
  v2 = a1;
  do
  {
    result += 4;
    v2[4159] = 0;
    v2[4160] = 0;
    v2[4161] = 0;
    v2 += 4;
    v2[4154] = 0;
  }
  while ( result != 8 );
  a1[4166] = 0;
  return result;
}
