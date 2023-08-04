#include "../../types-win32.h"
//----- (10008A00) --------------------------------------------------------
size_t __thiscall meth_10008A00(_DWORD *this, const char *a2, int a3, int a4, char a5, char a6)
{
  int v6; // edx
  char *v7; // esi

  v6 = 19 * dword_10277358++;
  v7 = (char *)&unk_1022B358 + 4 * v6;
  *(_DWORD *)v7 = 0;
  basename(a2, v7 + 12);
  if ( strlen(v7 + 12) > 0x40 )
    writeToRandomBufferAndExit(aAddNameIsTooLo);
  _strupr(v7 + 12);
  *(_DWORD *)v7 = ftell(dword_1027735C);
  v7[8] = a5;
  *((_DWORD *)v7 + 1) = a4;
  v7[9] = a6;
  return sub_10008C90(dword_1027735C, (void *)a3, a4);
}
// 10277358: using guessed type int dword_10277358;
