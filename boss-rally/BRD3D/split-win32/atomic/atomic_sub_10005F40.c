#include "types-win32.h"
//----- (10005F40) --------------------------------------------------------
int __cdecl atomic_sub_10005F40(int mutexMult) {
  int v1; // esi

  WaitForSingleObject(gMutexes[606 * mutexMult], INFINITE);
  v1 = (atomic_sub_10004A10(mutexMult) & 0x3F) - 4;
  ReleaseMutex(gMutexes[606 * mutexMult]);
  return v1 <= 0 ? 0 : v1;
}
