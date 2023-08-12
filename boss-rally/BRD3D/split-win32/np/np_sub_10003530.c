#include "types-win32.h"
//----- (10003530) --------------------------------------------------------
BOOL __cdecl np_sub_10003530(const char *a1) {
  HANDLE mutex; // [esp-4h] [ebp-Ch]

  WaitForSingleObject(gMutex9, INFINITE);
  mutex = gMutex9;
  strcpy(&byte_10220E80, a1);
  dword_1022AF08 = 1;
  return ReleaseMutex(mutex);
}
// 10220E80: using guessed type char byte_10220E80;
// 1022AF08: using guessed type int dword_1022AF08;
