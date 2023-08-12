#include "types-win32.h"
//----- (10007BA0) --------------------------------------------------------
void SetupGMemoryStatus() {
  struct _MEMORYSTATUS GMemoryStatus; // [esp+0h] [ebp-20h] BYREF

  GMemoryStatus.dwLength = 32;
  GlobalMemoryStatus(&GMemoryStatus);
  gTotalPhys = GMemoryStatus.dwTotalPhys;
}
// 1022B348: using guessed type int gTotalPhys;
