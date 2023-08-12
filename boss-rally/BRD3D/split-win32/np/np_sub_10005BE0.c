#include "types-win32.h"
//----- (10005BE0) --------------------------------------------------------
BOOL np_sub_10005BE0() {
  BOOL v0;    // ebp
  HANDLE *v1; // esi

  if (gNetworkPlay > 1)
      sub_10072270();
  v0 = sub_1000C510((HANDLE *)&unk) == 0;
  if (gMutex8) {
      CloseHandle(gMutex8);
      gMutex8 = 0;
  }
  if (gMutex7) {
      CloseHandle(gMutex7);
      gMutex7 = 0;
  }
  if (gMutex5) {
      CloseHandle(gMutex5);
      gMutex5 = 0;
  }
  if (gMutex6) {
      CloseHandle(gMutex6);
      gMutex6 = 0;
  }
  if (gMutex3) {
      CloseHandle(gMutex3);
      gMutex3 = 0;
  }
  if (gMutex4) {
      CloseHandle(gMutex4);
      gMutex4 = 0;
  }
  if (gMutex1) {
      CloseHandle(gMutex1);
      gMutex1 = 0;
  }
  if (gMutex2) {
      CloseHandle(gMutex2);
      gMutex2 = 0;
  }
  if (gMutex0) {
      CloseHandle(gMutex0);
      gMutex0 = 0;
  }
  if (gMutex9) {
      CloseHandle(gMutex9);
      gMutex9 = 0;
  }
  v1 = gMutexes;
  do {
      if (*v1) {
          CloseHandle(*v1);
          *v1 = 0;
      }
      v1 += 606;
  } while ((int)v1 < (int)&gMutexesEnd);
  return v0;
}
// 1022AF18: using guessed type int gNetworkPlay;
