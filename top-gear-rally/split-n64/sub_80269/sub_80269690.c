#include "../../types-n64.h"
//----- (80269690) --------------------------------------------------------
int __fastcall sub_80269690(unsigned __int8 *a1, int a2)
{
  BOOL v2; // $at
  unsigned __int16 v3; // $t2
  unsigned __int16 v6; // [sp+Ah] [-6h]
  int v7; // [sp+Ch] [-4h]

  v6 = 0;
  v7 = 0;
  if ( a2 > 0 )
  {
    do
    {
      v2 = ++v7 < a2;
      v3 = v6 + *a1++;
      v6 = v3;
    }
    while ( v2 );
  }
  return v6;
}
