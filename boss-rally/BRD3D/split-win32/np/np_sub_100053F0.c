#include "types-win32.h"
//----- (100053F0) --------------------------------------------------------
int np_sub_100053F0() {
  HANDLE v0;  // esi
  int result; // eax
  int v2;     // esi

  WaitForSingleObject(gMutex3, INFINITE);
  v0 = gMutexesEnd;
  result = ReleaseMutex(gMutex3);
  if (v0) {
      v2 = sub_10005470();
      result = sub_1000C670();
      if (v2 == result)
          result = sub_10004760(&unk,
                                dword_10094294,
                                gChosenCar,
                                byte_10AD0854[0],
                                byte_10AD0855[0],
                                byte_10AD0856[0],
                                dword_10277B48,
                                (int)dplay4aShortName,
                                3,
                                0);
  }
  return result;
}
// 10094294: using guessed type int dword_10094294;
// 1022B34C: using guessed type int gChosenCar;
// 10277B48: using guessed type int dword_10277B48;
