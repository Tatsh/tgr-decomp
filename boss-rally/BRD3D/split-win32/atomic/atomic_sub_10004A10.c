#include "types-win32.h"
//----- (10004A10) --------------------------------------------------------
int __cdecl atomic_sub_10004A10(int mutexIndex) {
  int v1; // edi

  WaitForSingleObject(gMutexes[606 * mutexIndex], INFINITE);
  v1 = unk_10221354[606 * mutexIndex];
  ReleaseMutex(gMutexes[606 * mutexIndex]);
  return v1;
}
