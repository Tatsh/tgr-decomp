#include "../../types-n64.h"
//----- (80268230) --------------------------------------------------------
int __fastcall sub_80268230(unsigned int a1)
{
  float v2; // $f12
  unsigned int v7; // $a1
  unsigned int v9; // $a2

  _$A1 = 1;
  v2 = (float)((float)COERCE_INT(3.3916759e-37) / (float)a1) + 0.5;
  __asm
  {
    cfc1    $t7, FCSR
    ctc1    $a1, FCSR
    cfc1    $a1, FCSR
  }
  if ( (_$A1 & 0x78) != 0 )
  {
    _$A1 = 1;
    __asm
    {
      ctc1    $a1, FCSR
      cfc1    $a1, FCSR
    }
    if ( (_$A1 & 0x78) == 0 )
    {
      v7 = (int)(float)(v2 - 2147483600.0) | 0x80000000;
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v7 = (int)v2;
  if ( (int)v2 < 0 )
LABEL_4:
    v7 = -1;
LABEL_6:
  __asm { ctc1    $t7, FCSR }
  if ( v7 < 0x84 )
    return -1;
  v9 = (unsigned __int8)(v7 / 0x42);
  if ( v9 >= 0x11 )
    v9 = 16;
  MEMORY[0xA4500010] = v7 - 1;
  MEMORY[0xA4500014] = v9 - 1;
  MEMORY[0xA4500008] = 1;
  return 48681812 / (int)v7;
}
// 80268364: conditional instruction was optimized away because of '$a1.4>=84u'
// 802A6148: using guessed type int dword_802A6148;
