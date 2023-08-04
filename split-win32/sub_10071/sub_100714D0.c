#include "../../types-win32.h"
//----- (100714D0) --------------------------------------------------------
int __cdecl sub_100714D0(int a1)
{
  int v1; // edi

  WaitForSingleObject(*(&dword_11786828 + 603 * a1), 0xFFFFFFFF);
  v1 = dword_11786854[603 * a1];
  ReleaseMutex(*(&dword_11786828 + 603 * a1));
  return v1;
}
// 11786854: using guessed type int dword_11786854[];
