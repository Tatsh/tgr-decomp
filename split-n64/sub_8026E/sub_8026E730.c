#include "../../types-n64.h"
//----- (8026E730) --------------------------------------------------------
int __fastcall sub_8026E730(int a1, int a2, int a3)
{
  while ( (MEMORY[0xA4600010] & 3) != 0 )
    ;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) | a2 | 0xA0000000) = a3;
  return 0;
}
