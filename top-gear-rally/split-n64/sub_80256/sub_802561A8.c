#include "../../types-n64.h"
//----- (802561A8) --------------------------------------------------------
int __fastcall sub_802561A8(char *a1, char *a2, int a3)
{
  int result; // $v0
  bool v4; // dc
  int v5; // $a2
  char v6; // $v1

  result = a3;
  if ( a1 != a2 )
  {
    v4 = a3 == 0;
    v5 = a3 - 1;
    if ( !v4 )
    {
      do
      {
        v6 = *a1;
        result = v5;
        *a1++ = *a2;
        *a2++ = v6;
        v4 = v5-- != 0;
      }
      while ( v4 );
    }
  }
  return result;
}
