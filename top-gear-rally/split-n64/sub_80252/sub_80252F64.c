#include "../../types-n64.h"
//----- (80252F64) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80252F64(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // $t3
  int result; // $v0

  v6 = a6 >> 1;
  MEMORY[4] = (unsigned __int16)(32 * a2);
  dword_8028A858 = 8;
  MEMORY[0] = -1291845632;
  if ( !(a5 >> 1) )
    __break(7u, 0);
  if ( a5 >> 1 == -1 && a1 << 10 == 0x80000000 )
    __break(6u, 0);
  if ( !v6 )
    __break(7u, 0);
  if ( v6 == -1 && -1024 * a2 == 0x80000000 )
    __break(6u, 0);
  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0x80000;
  MEMORY[0] = -1174400255;
  return result;
}
// 80252F7C: write access to const memory at 8028A858 has been detected
// 80252F98: write access to const memory at 8028A858 has been detected
// 80252FB4: write access to const memory at 8028A858 has been detected
// 80252FDC: write access to const memory at 8028A858 has been detected
// 80252FF8: write access to const memory at 8028A858 has been detected
// 80253024: write access to const memory at 8028A858 has been detected
// 80253184: write access to const memory at 8028A858 has been detected
// 802531A8: write access to const memory at 8028A858 has been detected
// 80253084: write access to const memory at 8028A858 has been detected
// 802530D8: write access to const memory at 8028A858 has been detected
// 80253100: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
