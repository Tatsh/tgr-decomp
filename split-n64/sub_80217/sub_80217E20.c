#include "../../types-n64.h"
//----- (80217E20) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80217E20()
{
  int result; // $v0

  result = 0;
  dword_8028A858 = 8;
  MEMORY[0] = -15728321;
  MEMORY[4] = -977305704;
  return result;
}
// 80217E38: write access to const memory at 8028A858 has been detected
// 80217E54: write access to const memory at 8028A858 has been detected
// 80217E70: write access to const memory at 8028A858 has been detected
// 80217E94: write access to const memory at 8028A858 has been detected
// 80217ED8: write access to const memory at 8028A858 has been detected
// 80217EF8: write access to const memory at 8028A858 has been detected
// 80217F4C: write access to const memory at 8028A858 has been detected
// 80217F6C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8031AA28: using guessed type int dword_8031AA28;
