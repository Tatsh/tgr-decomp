#include "types-win32.h"
//----- (10004A50) --------------------------------------------------------
BOOL __cdecl atomic_sub_10004A50(int a1, int a2) {
  WaitForSingleObject(gMutexes[606 * a1], INFINITE);
  unk_10221354[606 * a1] = a2;
  return ReleaseMutex(gMutexes[606 * a1]);
}
