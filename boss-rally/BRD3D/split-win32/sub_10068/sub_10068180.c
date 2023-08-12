#include "types-win32.h"
//----- (10068180) --------------------------------------------------------
void __cdecl sub_10068180(int a1, int *a2, int a3) {
  int v3; // eax
  int v4; // edx
  int v5; // [esp+0h] [ebp-4h]

  v3 = -1;
  v5 = 0x462BE000;
  v4 = 128;
  switch (gChosenTrack) {
  case 2:
  case 8:
    v3 = 0;
    v5 = 0x46ABE000;
    goto LABEL_4;
  case 4:
  case 10:
    v3 = 0;
    v5 = 0x462BE000;
  LABEL_4:
    v4 = 0xFF;
    break;
  default:
    break;
  }
  if (v3 != -1)
    sub_10067E50(a1, v3, v4, *(float *)&v5, a2, a3);
}
// 100B380C: using guessed type int gChosenTrack;
