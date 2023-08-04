#include "../../types-n64.h"
//----- (80256290) --------------------------------------------------------
void __fastcall sub_80256290(int a1, __int16 a2, int _$A2)
{
  int v3; // $a1

  v3 = ((a2 + 63) & 0xFFC0) + a1;
  __asm
  {
    dsll    $a3, $a2, 16
    dsll    $a3, 16
  }
  _$A2 = _$A2 | _$A3;
  __asm { sd      $a2, 0($a0) }
  while ( 1 )
  {
    __asm
    {
      sd      $a2, 8($a0)
      sd      $a2, 0x10($a0)
      sd      $a2, 0x18($a0)
    }
    a1 += 64;
    __asm
    {
      sd      $a2, -0x20($a0)
      sd      $a2, -0x18($a0)
      sd      $a2, -0x10($a0)
      sd      $a2, -8($a0)
    }
    if ( v3 == a1 )
      break;
    __asm { sd      $a2, 0($a0) }
  }
}
