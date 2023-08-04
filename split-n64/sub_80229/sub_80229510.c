#include "../../types-n64.h"
//----- (80229510) --------------------------------------------------------
int __fastcall sub_80229510(float *a1, float *a2)
{
  int result; // $v0

  if ( *a2 < *a1 )
    return 1;
  result = 0;
  if ( *a1 < *a2 )
    result = -1;
  return result;
}
