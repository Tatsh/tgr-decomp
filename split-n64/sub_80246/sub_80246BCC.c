#include "../../types-n64.h"
//----- (80246BCC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80246BCC()
{
  int result; // $v0

  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = 0;
  MEMORY[0] = -1174399998;
  return result;
}
// 80246C44: write access to const memory at 8028A858 has been detected
// 80246C60: write access to const memory at 8028A858 has been detected
// 80246C7C: write access to const memory at 8028A858 has been detected
// 80246CA0: write access to const memory at 8028A858 has been detected
// 80246CFC: write access to const memory at 8028A858 has been detected
// 80246D50: write access to const memory at 8028A858 has been detected
// 80246D88: write access to const memory at 8028A858 has been detected
// 80246DB8: write access to const memory at 8028A858 has been detected
// 80246DDC: write access to const memory at 8028A858 has been detected
// 80246DF4: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
