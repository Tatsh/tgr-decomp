#include "types-win32.h"
//----- (10073820) --------------------------------------------------------
int sub_10073820() {
  int i;      // esi
  int j;      // esi
  int k;      // esi
  int l;      // esi
  int result; // eax

  if (dword_100B8C90 <= 1) {
    for (i = 0; i < 27; ++i)
        dword_11829238[i] = tex_sub_dword_118AA0AC((char *)&unk_1009B4C8 + dword_100A6070[i],
                                                   0,
                                                   64,
                                                   64,
                                                   704,
                                                   1,
                                                   3,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   1,
                                                   0);
    for (j = 0; j < 26; ++j)
        dword_118292A8[j] = tex_sub_dword_118AA0AC((char *)&unk_100946C8 + dword_100A60E0[j],
                                                   0,
                                                   64,
                                                   64,
                                                   704,
                                                   1,
                                                   3,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   0,
                                                   1,
                                                   0);
  }
  for (k = 0; k < 27; ++k)
    dword_11829158[k] = tex_sub_dword_118AA0AC(
        (char *)&unk_100A4170 + dword_100A6150[k], 0, 32, 32, 392, 1, 3, 0, 0, 0, 0, 0, 0, 1, 0);
  for (l = 0; l < 26; ++l) {
    result = tex_sub_dword_118AA0AC(
        (char *)&unk_100A22D0 + dword_100A61C0[l], 0, 32, 32, 392, 1, 3, 0, 0, 0, 0, 0, 0, 1, 0);
    dword_118291C8[l] = result;
  }
  return result;
}
// 100A6070: using guessed type int dword_100A6070[];
// 100A60E0: using guessed type int dword_100A60E0[];
// 100A6150: using guessed type int dword_100A6150[];
// 100A61C0: using guessed type int dword_100A61C0[];
// 100B8C90: using guessed type int dword_100B8C90;
// 11829158: using guessed type int dword_11829158[];
// 118291C8: using guessed type int dword_118291C8[];
// 11829238: using guessed type int dword_11829238[];
// 118292A8: using guessed type int dword_118292A8[];
// 118AA0AC: using guessed type int (__cdecl *tex_sub_dword_118AA0AC)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
