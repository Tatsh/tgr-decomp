#include "../../types-win32.h"
//----- (10073B00) --------------------------------------------------------
void *sub_10073B00()
{
  void *result; // eax

  result = (void *)dword_118AA0B0(&ciBuffer_0, &ciBuffer, 32, 128, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0);
  off_100A64A0 = result;
  off_100A649C = result;
  return result;
}
// 100A649C: using guessed type void *off_100A649C;
// 100A64A0: using guessed type void *off_100A64A0;
// 118AA0B0: using guessed type int (__cdecl *dword_118AA0B0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
