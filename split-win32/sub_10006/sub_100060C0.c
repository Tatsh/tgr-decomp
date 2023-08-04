#include "../../types-win32.h"
//----- (100060C0) --------------------------------------------------------
BOOL sub_100060C0()
{
  WaitForSingleObject(g_hMutex_7, 0xFFFFFFFF);
  dword_10220DD0 = 0;
  return ReleaseMutex(g_hMutex_7);
}
// 10220DD0: using guessed type int dword_10220DD0;
