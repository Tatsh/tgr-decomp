#include "types-win32.h"
//----- (1003E260) --------------------------------------------------------
void __cdecl sub_1003E260(int a1) {
  LPCSTR text;    // edi
  LPCSTR caption; // eax

  if (a1 <= 8) {
    text = GetStringWithIndex(dword_100AC664[2 * a1]);
    caption = GetStringWithIndex(0xAAu);
    MessageBoxA(gHwnd, text + 1, caption, 0);
    if (dword_100AC660[2 * a1])
      exit(1);
  }
}
// 100AC660: using guessed type int dword_100AC660[];
