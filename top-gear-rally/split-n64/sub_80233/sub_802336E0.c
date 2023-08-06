#include "../../types-n64.h"
//----- (802336E0) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_802336E0(int a1)
{
  char **v1; // $v1
  int v2; // $f10
  int v3; // $f6
  int result; // $v0
  int *v5; // [sp+24h] [-4h]

  dword_8028A858 = 8;
  MEMORY[4] = &word_8028A874;
  MEMORY[0] = -1140850674;
  v5 = sub_80255CD0();
  v1 = &(&gCarData)[24 * *(_DWORD *)(4 * ((*(_DWORD *)(a1 + 8312) - (int)dword_803C8000) / 57224) - 2144226760)];
  *(float *)&v2 = *((float *)v1 + 22) / 256.0;
  *(float *)&v3 = (*((float *)v1 + 23) + *((float *)v1 + 23)) / 256.0;
  sub_80260800((int)&flt_8031AB10, v2, v3, 998244352);
  sub_80260B20((int)&flt_8031AB50, (char *)a1, 64);
  flt_8031AB48 = 0.0000030332469 - 0.18000001;
  sub_80260940(&flt_8031AB10, &flt_8031AB50, (int)&flt_8031AB50);
  sub_80260ED0(&flt_8031AB50, (int)v5);
  result = 0;
  dword_8028A858 = 8;
  MEMORY[4] = dword_8028C5D8;
  MEMORY[0] = 100663296;
  return result;
}
// 80233704: write access to const memory at 8028A858 has been detected
// 80233734: write access to const memory at 8028A858 has been detected
// 80233818: write access to const memory at 8031AB48 has been detected
// 8023383C: write access to const memory at 8028A858 has been detected
// 80233860: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028A874: using guessed type __int16 word_8028A874;
// 8028A878: using guessed type int dword_8028A878;
// 8028AE0C: using guessed type char *off_8028AE0C;
// 8028C5D8: using guessed type int dword_8028C5D8[8];
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB48: using guessed type float flt_8031AB48;
// 8031AB50: using guessed type float flt_8031AB50;
// 803C8000: using guessed type int dword_803C8000[512];
