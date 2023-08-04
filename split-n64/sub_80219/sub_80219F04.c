#include "../../types-n64.h"
//----- (80219F04) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 sub_80219F04()
{
  __int64 result; // $v1

  LODWORD(result) = 0;
  dword_8028A858 = 8;
  MEMORY[0] = 58720272;
  MEMORY[4] = unkThread3Stack;
  dword_8028AB64 = -23622;
  dword_8028AB68 = -1259;
  return result;
}
// 80219F58: write access to const memory at 8028AB64 has been detected
// 80219F68: write access to const memory at 8028AB68 has been detected
// 80219F1C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028AB64: using guessed type int dword_8028AB64;
// 8028AB68: using guessed type int dword_8028AB68;
// 80318CD0: using guessed type int dword_80318CD0[128];
