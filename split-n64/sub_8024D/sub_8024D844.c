#include "../../types-n64.h"
//----- (8024D844) --------------------------------------------------------
int __fastcall sub_8024D844(int a1, int a2, char a3)
{
  int v3; // $v0
  int result; // $v0

  v3 = ((8 * (a3 & 1)) ^ a2) >> 1;
  if ( (a2 & 1) != 0 )
    result = *(_BYTE *)(a1 + v3) & 0xF;
  else
    result = (int)*(unsigned __int8 *)(a1 + v3) >> 4;
  return result;
}
