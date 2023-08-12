#include "types-win32.h"
//----- (100048D0) --------------------------------------------------------
BOOL __cdecl sub_100048D0(unk00214 *a1) {
  meth_unk00214_10073B80(a1);
  WaitForSingleObject(gMutex4, INFINITE);
  dword_10221310 = sub_10003460();
  meth_unk00214_10073DC0(a1, dword_10221310);
  return ReleaseMutex(gMutex4);
}
// 10221310: using guessed type int dword_10221310;
