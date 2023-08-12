#include "types-win32.h"
//----- (10006090) --------------------------------------------------------
BOOL atomic_sub_10006090() {
  WaitForSingleObject(gMutex7, 0xFFFFFFFF);
  dword_10220DD0 = 1;
  return ReleaseMutex(gMutex7);
}
// 10220DD0: using guessed type int dword_10220DD0;
