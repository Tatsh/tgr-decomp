#include "../../types-n64.h"
//----- (80260B74) --------------------------------------------------------
unsigned __int8 *__fastcall sub_80260B74(unsigned __int8 *a1, unsigned __int8 a2)
{
  int v2; // $v1

  v2 = *a1;
  if ( a2 == v2 )
    return a1;
  do
  {
    if ( !v2 )
      return 0;
    v2 = *++a1;
  }
  while ( a2 != v2 );
  return a1;
}
