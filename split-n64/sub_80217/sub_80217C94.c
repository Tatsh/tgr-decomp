#include "../../types-n64.h"
//----- (80217C94) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80217C94()
{
  int result; // $v0

  result = 0;
  dword_8028A858 = 8;
  MEMORY[0] = -15728321;
  MEMORY[4] = -977305704;
  return result;
}
// 80217CAC: write access to const memory at 8028A858 has been detected
// 80217CC8: write access to const memory at 8028A858 has been detected
// 80217CE4: write access to const memory at 8028A858 has been detected
// 80217D08: write access to const memory at 8028A858 has been detected
// 80217D50: write access to const memory at 8028A858 has been detected
// 80217D70: write access to const memory at 8028A858 has been detected
// 80217DC0: write access to const memory at 8028A858 has been detected
// 80217DDC: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8031AA28: using guessed type int dword_8031AA28;
