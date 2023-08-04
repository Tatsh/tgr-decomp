#include "../../types-n64.h"
//----- (802561E4) --------------------------------------------------------
unsigned int __fastcall sub_802561E4(__int16 *a1, __int16 *a2, unsigned int a3)
{
  unsigned int v3; // $t6
  unsigned int v4; // $a2
  unsigned int result; // $v0
  bool v6; // dc
  unsigned int v7; // $a2
  __int16 v8; // $v1

  v3 = a3 >> 1;
  v4 = a3 >> 1;
  if ( a1 != a2 )
  {
    result = v3;
    v6 = v4 == 0;
    v7 = v4 - 1;
    if ( !v6 )
    {
      do
      {
        v8 = *a1;
        result = v7;
        *a1++ = *a2;
        *a2++ = v8;
        v6 = v7-- != 0;
      }
      while ( v6 );
    }
  }
  return result;
}
