#include "types-win32.h"
//----- (10005D40) --------------------------------------------------------
int atomic_sub_10005D40() {
  int v0;     // esi
  int result; // eax

  WaitForSingleObject(gMutex1, INFINITE);
  if (dword_10220DD4 < 0) {
      ReleaseMutex(gMutex1);
      result = -1;
  } else {
      v0 = dword_10220D90[dword_10220DD4--];
      ReleaseMutex(gMutex1);
      result = v0;
  }
  return result;
}
// 10220DD4: using guessed type int dword_10220DD4;
