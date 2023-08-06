#include "../../types-n64.h"
//----- (8021A0F8) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8021A0F8(int a1, __int16 a2, int a3, __int16 a4)
{
  int result; // $v0

  result = 0;
  dword_8028A858 = 8;
  MEMORY[0] = ((((_WORD)a1 + (_WORD)a3 + 3) & 0x3FF) << 14) | 0xF6000000 | (4 * ((a2 + a4 + 3) & 0x3FF));
  MEMORY[4] = (((a1 + a3 + 2) & 0x3FF) << 14) | (4 * ((a2 - 3) & 0x3FF));
  return result;
}
// 8021A11C: write access to const memory at 8028A858 has been detected
// 8021A13C: write access to const memory at 8028A858 has been detected
// 8021A160: write access to const memory at 8028A858 has been detected
// 8021A180: write access to const memory at 8028A858 has been detected
// 8021A1A0: write access to const memory at 8028A858 has been detected
// 8021A1BC: write access to const memory at 8028A858 has been detected
// 8021A224: write access to const memory at 8028A858 has been detected
// 8021A268: write access to const memory at 8028A858 has been detected
// 8021A290: write access to const memory at 8028A858 has been detected
// 8021A2C8: write access to const memory at 8028A858 has been detected
// 8021A2E4: write access to const memory at 8028A858 has been detected
// 8021A300: write access to const memory at 8028A858 has been detected
// 8021A31C: write access to const memory at 8028A858 has been detected
// 8021A338: write access to const memory at 8028A858 has been detected
// 8021A374: write access to const memory at 8028A858 has been detected
// 8021A3A8: write access to const memory at 8028A858 has been detected
// 8021A3DC: write access to const memory at 8028A858 has been detected
// 8021A408: write access to const memory at 8028A858 has been detected
// 8021A448: write access to const memory at 8028A858 has been detected
// 8021A47C: write access to const memory at 8028A858 has been detected
// 8021A49C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
