#include "types-win32.h"
//----- (10074DD0) --------------------------------------------------------
int sub_10074DD0() {
  int v0;     // ecx
  _BYTE *v1;  // eax
  int result; // eax

  sub_100737E0();
  sub_10073820();
  sub_10073950();
  sub_10073980();
  sub_100739B0();
  sub_100739E0();
  dword_11829100[0] = dword_118AA0B0(&unk_104B3DE8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
  dword_11829104 = dword_118AA0B0(&unk_104B7DE8, 0, 64, 64, 1, 4, 0, 0, 1, 1, 0, 0, 1, 0);
  v0 = 0;
  v1 = &unk_11829331;
  do {
    *(v1 - 1) = -1;
    *v1 = -1;
    v1[1] = -1;
    v1[2] = v0 | (16 * v0);
    v1 += 4;
    ++v0;
  } while ((int)v1 < (int)dword_11829370 + 1);
  result = (int)graphics_100098A0(byte_11829118, (unsigned __int8 *)&unk_11829330, 64, 2) / 16;
  dword_11829318 = result;
  return result;
}
// 11829100: using guessed type int dword_11829100[];
// 11829104: using guessed type int dword_11829104;
// 11829318: using guessed type int dword_11829318;
// 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
