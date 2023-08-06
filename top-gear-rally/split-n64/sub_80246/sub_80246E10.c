#include "../../types-n64.h"
//----- (80246E10) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80246E10()
{
  int result; // $v0

  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -1174399998;
  return result;
}
// 80246E78: write access to const memory at 8028A858 has been detected
// 80246E94: write access to const memory at 8028A858 has been detected
// 80246EB0: write access to const memory at 8028A858 has been detected
// 80246ECC: write access to const memory at 8028A858 has been detected
// 80246F28: write access to const memory at 8028A858 has been detected
// 80246F68: write access to const memory at 8028A858 has been detected
// 80246F80: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
