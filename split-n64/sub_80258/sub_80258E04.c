#include "../../types-n64.h"
//----- (80258E04) --------------------------------------------------------
int __fastcall sub_80258E04(int a1, int a2, float *a3)
{
  int i; // $t0
  int result; // $v0
  float *v8; // $a0
  float *v9; // $a1
  int v10; // $a2
  float v11; // $f0

  for ( i = 0; i != 12; i += 4 )
  {
    result = 0;
    v8 = a3;
    v9 = (float *)(a1 + i);
    v10 = a2;
    do
    {
      v11 = *v8;
      ++result;
      ++v8;
      *v9 = v11;
      v9 += 3;
      v10 += 4;
      *(float *)(v10 - 4) = v11;
    }
    while ( result != 3 );
    a3 += 4;
    a2 += 12;
  }
  return result;
}
