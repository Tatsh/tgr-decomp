#include "types-win32.h"
//----- (10074F40) --------------------------------------------------------
BOOL sub_10074F40() {
  BOOL result; // eax

  dword_118A9878 = 0;
  dword_118AA098 = 0;
  result = CloseHandle(dword_118AA0A0);
  dword_118AA0A0 = 0;
  return result;
}
// 118A9878: using guessed type int dword_118A9878;
// 118AA098: using guessed type int dword_118AA098;
