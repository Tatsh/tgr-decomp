#include "types-win32.h"
//----- (10061410) --------------------------------------------------------
char *LoadPaintDamageBitmaps() {
  int v0;            // edi
  _DWORD *v1;        // esi
  char *result;      // eax
  char Buffer[1024]; // [esp+8h] [ebp-400h] BYREF

  v0 = 0;
  v1 = &unk_10AA3450;
  do {
    sprintf(Buffer, "Paint\\damage%d.bmp", ++v0);
    result = LoadImageWrapper(Buffer);
    *v1++ = result;
  } while ((int)v1 < (int)&dword_10AA345C);
  return result;
}
// 10AA345C: using guessed type int dword_10AA345C;
