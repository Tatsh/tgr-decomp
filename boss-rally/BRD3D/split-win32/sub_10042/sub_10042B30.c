#include "types-win32.h"
//----- (10042B30) --------------------------------------------------------
int sub_10042B30() {
  int v0;         // eax
  int v1;         // esi
  int v2;         // eax
  int v3;         // eax
  int v4;         // esi
  const char *v5; // eax
  LPCSTR v7;      // [esp-4h] [ebp-Ch]

  if (dword_10AA33D4) {
    v0 = ++dword_100AC654;
    if (dword_100AC654 > 31) {
      v0 = 0;
      dword_100AC654 = 0;
    }
    v1 = v0;
    if (!sub_1003F320(v0)) {
      do {
        v2 = ++dword_100AC654;
        if (dword_100AC654 > 31) {
          v2 = 0;
          dword_100AC654 = 0;
        }
        if (v2 == v1)
          goto LABEL_19;
      } while (!sub_1003F320(v2));
    }
  LABEL_18:
    v2 = dword_100AC654;
    goto LABEL_19;
  }
  if (!dword_10AA33D0[0])
    goto LABEL_18;
  v3 = --dword_100AC654;
  if (dword_100AC654 < 0) {
    v3 = 31;
    dword_100AC654 = 31;
  }
  v4 = v3;
  if (sub_1003F320(v3))
    goto LABEL_18;
  while (1) {
    v2 = --dword_100AC654;
    if (dword_100AC654 < 0) {
      v2 = 31;
      dword_100AC654 = 31;
    }
    if (v2 == v4)
      break;
    if (sub_1003F320(v2))
      goto LABEL_18;
  }
LABEL_19:
  gChosenCar = dword_100AC420[v2];
  if (unk) {
    if (v2 > 15)
      v2 -= 16;
    v7 = GetStringWithIndex(dword_100AC368[v2]);
    v5 = GetStringWithIndex(0xB7u);
    sprintf(byte_10A9DD28, v5, v7);
    sub_1003D210(gHwnd, dword_10A9D008, 1);
    strcpy(byte_10A9DD28, String2);
  }
  return 1;
}
// 10042B30: using guessed type int sub_10042B30();
// 100AC654: using guessed type int dword_100AC654;
// 1022B34C: using guessed type int g_chosenCar;
// 10AA33D0: using guessed type int dword_10AA33D0[];
// 10AA33D4: using guessed type int dword_10AA33D4;
