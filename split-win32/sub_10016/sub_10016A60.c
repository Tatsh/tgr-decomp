#include "../../types-win32.h"
//----- (10016A60) --------------------------------------------------------
int *__cdecl sub_10016A60(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int *v5; // eax
  _DWORD *v6; // eax
  int *result; // eax

  v5 = (unsigned int *)dword_106C0680;
  dword_106C0680 += 8;
  v5[1] = 1;
  *v5 = a1 & 0xFFFFFF | 0xDC000000;
  v6 = (_DWORD *)dword_106C0680;
  dword_106C0680 += 8;
  *v6 = -234872830;
  v6[1] = ((a4 << 14) - 0x2000) & 0xFFF000 | (4 * (_WORD)a5 - 2) & 0xFFF;
  result = (int *)dword_106C0680;
  dword_106C0680 += 8;
  *result = ((4 * (a3 + a5)) >> 2) & 0xFFF | (((4 * ((unsigned __int16)a2 + (unsigned __int16)a4)) & 0x3FFC | 0x38C000) >> 2 << 12);
  result[1] = ((4 * a3) >> 2) & 0xFFF | ((((4 * a2) >> 2) & 0xFFF) << 12);
  return result;
}
// 106C0680: using guessed type int dword_106C0680;
