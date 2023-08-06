#include "../../types-n64.h"
//----- (8021D070) --------------------------------------------------------
unsigned int __fastcall sub_8021D070(unsigned int *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int result; // $v0

  result = *a1;
  if ( *a1 >= a2 && *a1 < a3 )
    *a1 = result - a2 + a4;
  return result;
}
