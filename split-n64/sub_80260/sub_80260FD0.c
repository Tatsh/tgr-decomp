#include "../../types-n64.h"
//----- (80260FD0) --------------------------------------------------------
int __fastcall sub_80260FD0(float *a1)
{
  int result; // $v0

  for ( result = 0; result != 4; ++result )
  {
    if ( result )
      *a1 = 0.0;
    else
      *a1 = 1.0;
    if ( result == 1 )
      a1[1] = 1.0;
    else
      a1[1] = 0.0;
    if ( result == 2 )
      a1[2] = 1.0;
    else
      a1[2] = 0.0;
    if ( result == 3 )
      a1[3] = 1.0;
    else
      a1[3] = 0.0;
    a1 += 4;
  }
  return result;
}
