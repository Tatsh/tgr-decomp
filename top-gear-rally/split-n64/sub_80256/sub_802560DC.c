#include "../../types-n64.h"
//----- (802560DC) --------------------------------------------------------
void __fastcall sub_802560DC(unsigned int a1, unsigned int a2, int a3, int (__fastcall *a4)(unsigned int, unsigned int), void (__fastcall *a5)(unsigned int, unsigned int, int))
{
  unsigned int v5; // $s2
  unsigned int v9; // $s6
  BOOL i; // $at
  unsigned int v11; // $s1
  unsigned int v12; // $s0
  unsigned int j; // $a0

  v5 = a2;
  if ( a1 < a2 )
  {
    v9 = a1 + a3;
    for ( i = a2 < a1 + a3; ; i = v5 < v9 )
    {
      v11 = a1;
      v12 = v9;
      if ( !i )
      {
        for ( j = v9; ; j = v12 )
        {
          if ( a4(j, v11) > 0 )
            v11 = v12;
          v12 += a3;
          if ( v5 < v12 )
            break;
        }
      }
      a5(v11, v5, a3);
      v5 -= a3;
      if ( a1 >= v5 )
        break;
    }
  }
}
