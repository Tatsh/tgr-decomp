#include "types-win32.h"
//----- (10072E00) --------------------------------------------------------
int sub_10072E00() {
  int *v0; // edi
  int v1;  // esi

  if (gPlaysfx && g_DSound && dword_118290FC) {
    v0 = dword_11828F08;
    do {
      v1 = *v0;
      if (*v0) {
        (*(void(__stdcall **)(_DWORD, int))(**(_DWORD **)(v1 + 156) + 60))(*(_DWORD *)(v1 + 156),
                                                                           -10000);
        (*(void(__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v1 + 156) + 64))(*(_DWORD *)(v1 + 156),
                                                                              0);
      }
      ++v0;
    } while ((int)v0 < (int)&unk_11828F44);
  }
  return 1;
}
// 100B5DE8: using guessed type int g_Playsfx;
// 118290FC: using guessed type int dword_118290FC;
