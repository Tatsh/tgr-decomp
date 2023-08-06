#include "../../types-n64.h"
//----- (802465F0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_802465F0(int a1, int a2, __int16 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // $t3
  int result; // $v0

  v9 = a9 >> 1;
  MEMORY[4] = ((a2 - 1) << 21) | (unsigned __int16)(32 * (a3 + a5 - 1));
  dword_8028A858 = 8;
  MEMORY[0] = -1291845632;
  if ( !(a8 >> 1) )
    __break(7u, 0);
  if ( a8 >> 1 == -1 && a4 << 10 == -2147482624 )
    __break(6u, 0);
  if ( !v9 )
    __break(7u, 0);
  if ( v9 == -1 && a5 << 10 == 0x80000400 )
    __break(6u, 0);
  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0x80000;
  MEMORY[0] = -1174400255;
  return result;
}
// 80246610: write access to const memory at 8028A858 has been detected
// 80246630: write access to const memory at 8028A858 has been detected
// 8024664C: write access to const memory at 8028A858 has been detected
// 80246668: write access to const memory at 8028A858 has been detected
// 80246694: write access to const memory at 8028A858 has been detected
// 802466B0: write access to const memory at 8028A858 has been detected
// 802466D4: write access to const memory at 8028A858 has been detected
// 80246724: write access to const memory at 8028A858 has been detected
// 80246758: write access to const memory at 8028A858 has been detected
// 80246774: write access to const memory at 8028A858 has been detected
// 802467D8: write access to const memory at 8028A858 has been detected
// 802467F4: write access to const memory at 8028A858 has been detected
// 80246814: write access to const memory at 8028A858 has been detected
// 80246854: write access to const memory at 8028A858 has been detected
// 80246870: write access to const memory at 8028A858 has been detected
// 80246A44: write access to const memory at 8028A858 has been detected
// 80246A64: write access to const memory at 8028A858 has been detected
// 802468D4: write access to const memory at 8028A858 has been detected
// 80246920: write access to const memory at 8028A858 has been detected
// 80246974: write access to const memory at 8028A858 has been detected
// 802469A4: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
