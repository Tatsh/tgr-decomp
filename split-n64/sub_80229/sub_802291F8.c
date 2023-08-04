#include "../../types-n64.h"
//----- (802291F8) --------------------------------------------------------
// sub_100662A0 on PC
int *__fastcall sub_802291F8(int size)
{
  int v2; // $t7
  char *v3; // $v1
  char v4; // $t2
  int v5; // $v1
  int *result; // $v0
  int v7; // $t7
  float v8; // $f4
  float v9; // $f6
  int v10; // $t2

  v2 = (size - (int)dword_803239A0) / 120;
  *(_DWORD *)(size + 100) = v2;
  v3 = (char *)dword_8028B904 + 3 * v2;
  *(_BYTE *)(size + 92) = *v3;
  *(_BYTE *)(size + 93) = v3[1];
  v4 = v3[2];
  *(_DWORD *)(size + 104) = 0;
  *(_BYTE *)(size + 94) = v4;
  *(_DWORD *)(size + 116) = v2 >= 14;
  v5 = *(_DWORD *)(size + 100);
  if ( v5 >= 1 )
  {
    v7 = *(_DWORD *)(size + 116);
    *(_DWORD *)(size + 96) = 0;
    if ( v7 == 1 )
      *(float *)(size + 80) = (float)(600 * (*(_DWORD *)(size + 100) - 1) - 7760);
    else
      *(float *)(size + 80) = (float)(520 * *(_DWORD *)(size + 100));
    sub_80228E4C(MEMORY[0x80025C70], *(float *)(size + 80));
    *(float *)size = -2.9421496e-34;
    *(float *)(size + 4) = 9.0549455e22;
    *(float *)(size + 8) = 1.9692021e31;
    *(_DWORD *)(size + 40) = 0;
    *(_DWORD *)(size + 44) = 0;
    *(_DWORD *)(size + 76) = 0;
    *(_DWORD *)(size + 72) = 0;
    *(_DWORD *)(size + 68) = 0;
    *(_DWORD *)(size + 64) = 0;
    debugPrint("Initial lap.gate for %d(%d): %d.%d (dist=%f)\n");
    v8 = *(float *)(size + 4);
    v9 = *(float *)(size + 8);
    *(_DWORD *)(size + 12) = *(_DWORD *)size;
    *(float *)(size + 48) = 0.0;
    *(float *)(size + 56) = 0.0;
    *(float *)(size + 52) = 0.0;
    *(float *)(size + 16) = v8;
    *(float *)(size + 20) = v9;
    result = 0;
    v10 = *(_DWORD *)(size + 100);
    *(_DWORD *)(size + 60) = MEMORY[0xDC5AB398];
    *(_DWORD *)(size + 84) = -v10;
  }
  else
  {
    result = &dword_8031B760[2084 * v5];
    *(_DWORD *)(size + 96) = result;
    result[948] = size;
  }
  return result;
}
// 8026FF08: using guessed type int dword_8026FF08;
// 8026FF18: using guessed type int dword_8026FF18;
// 8028B7F0: using guessed type int dword_8028B7F0;
// 8028B7F4: using guessed type int dword_8028B7F4;
// 8028B824: using guessed type int dword_8028B824;
// 8028B828: using guessed type int dword_8028B828;
// 8028B82C: using guessed type int dword_8028B82C;
// 8028B830: using guessed type int dword_8028B830;
// 8028B904: using guessed type int dword_8028B904[6];
// 8028B940: using guessed type int dword_8028B940;
// 8028C800: using guessed type int dword_8028C800;
// 8031B750: using guessed type float flt_8031B750;
// 8031B760: using guessed type int dword_8031B760[512];
// 803239A0: using guessed type int dword_803239A0[24];
