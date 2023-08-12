#include "types-win32.h"
//----- (10073060) --------------------------------------------------------
int *sub_10073060() {
  int *result; // eax

  result = dword_100B6C00;
  do {
    *(result - 432) = 0;
    *result = 0;
    result[18] = 0;
    ++result;
  } while ((int)result < (int)&unk_100B6C3C);
  return result;
}
