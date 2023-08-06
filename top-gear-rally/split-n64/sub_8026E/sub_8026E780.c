#include "../../types-n64.h"
//----- (8026E780) --------------------------------------------------------
int __fastcall sub_8026E780(int a1, int a2, _DWORD *a3)
{
  int result; // $v0

  while ( (MEMORY[0xA4600010] & 3) != 0 )
    ;
  result = 0;
  *a3 = *(_DWORD *)(*(_DWORD *)(a1 + 12) | a2 | 0xA0000000);
  return result;
}
