#include "types-win32.h"
//----- (1003D850) --------------------------------------------------------
int __stdcall sub_1003D850(int a1, int a2, LPCSTR lpString, int a4) {
  const CHAR *v4; // ebx

  v4 = lpString;
  if (!memcmp((const void *)a1, &dword_100909E0, 0x10u) && lstrlenA(lpString)) {
    do
      v4 += lstrlenA(v4) + 1;
    while (lstrlenA(v4));
  }
  return 1;
}
// 100909E0: using guessed type int dword_100909E0;
