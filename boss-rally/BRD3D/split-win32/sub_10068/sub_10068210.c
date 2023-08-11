#include "types-win32.h"
//----- (10068210) --------------------------------------------------------
void __cdecl sub_10068210(int a1, int *a2, int a3) {
  int v3; // eax
  int v4; // edx

  v3 = -1;
  v4 = 128;
  if (gChosenTrack == 4 || gChosenTrack == 10) {
    v3 = 15;
    v4 = 384;
  }
  if (v3 != -1)
    sub_10067E50(a1, v3, v4, 11000.0, a2, a3);
}
// 100B380C: using guessed type int g_chosenTrack;
