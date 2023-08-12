#include "types-win32.h"
//----- (10002440) --------------------------------------------------------
int pm_sub_10002440() {
  if (!gPlayMusic || !dword_10220CD0 || !dword_10220C3C)
      return 1;
  dword_10220C3C = 0;
  return EAR_DLL_ShutDownChannel(dword_100940A8);
}
// 100940A4: using guessed type int gPlayMusic;
// 10220C3C: using guessed type int dword_10220C3C;
// 10220CD0: using guessed type int dword_10220CD0;
// 10575470: using guessed type int (__stdcall *EAR_DLL_ShutDownChannel)(_DWORD);
