#include "../../types-n64.h"
//----- (802663A0) --------------------------------------------------------
int __fastcall sub_802663A0(int a1, _DWORD *a2)
{
  int result; // $v0

  while ( (MEMORY[0xA4600010] & 3) != 0 )
    ;
  result = 0;
  *a2 = *(_DWORD *)(MEMORY[0x80000308] | a1 | 0xA0000000);
  return result;
}
