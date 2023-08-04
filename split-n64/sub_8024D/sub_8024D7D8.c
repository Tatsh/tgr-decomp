#include "../../types-n64.h"
//----- (8024D7D8) --------------------------------------------------------
int __fastcall sub_8024D7D8(int a1, char a2)
{
  int v2; // $v0
  int result; // $v0

  v2 = ((8 * (a2 & 1)) ^ a1) >> 1;
  if ( (a1 & 1) != 0 )
    result = *(_BYTE *)v2 & 0xF;
  else
    result = (int)*(unsigned __int8 *)v2 >> 4;
  return result;
}
