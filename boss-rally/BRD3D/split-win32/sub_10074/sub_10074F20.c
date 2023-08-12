#include "types-win32.h"
//----- (10074F20) --------------------------------------------------------
HANDLE sub_10074F20() {
  HANDLE result; // eax

  dword_118A9878 = 0;
  dword_118AA098 = 0;
  result = CreateMutexA(0, 0, 0);
  dword_118AA0A0 = result;
  return result;
}
// 118A9878: using guessed type int dword_118A9878;
// 118AA098: using guessed type int dword_118AA098;
