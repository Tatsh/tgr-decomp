#include "../../types-n64.h"
//----- (80258758) --------------------------------------------------------
int __fastcall sub_80258758(float *a1, int a2, float *a3)
{
  int v3; // $v1
  float *v5; // $a0
  float *v6; // $t0
  int result; // $v0
  float i; // $f14
  float v9; // $f16
  float v10; // $f18

  v3 = 0;
  do
  {
    *a1 = 0.0;
    v5 = (float *)(a2 + v3);
    v6 = a3;
    result = 1;
    for ( i = *a1 + (float)(*(float *)(a2 + v3) * *a3); ; i = v9 + v10 )
    {
      v5 += 4;
      ++result;
      ++v6;
      *a1 = i;
      v9 = *a1;
      v10 = *v5 * *v6;
      if ( result == 3 )
        break;
    }
    *a1 = v9 + v10;
    v3 += 4;
    ++a1;
  }
  while ( v3 != 12 );
  return result;
}
