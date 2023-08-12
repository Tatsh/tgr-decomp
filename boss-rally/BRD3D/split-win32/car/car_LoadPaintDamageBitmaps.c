#include "types-win32.h"
//----- (10061410) --------------------------------------------------------
char *car_LoadPaintDamageBitmaps() {
  int index;         // edi 1-3 inclusive
  char **p;          // esi
  char *result;      // eax
  char buffer[1024]; // [esp+8h] [ebp-400h] BYREF

  index = 0;
  p = gDamageBitmapPtrs;
  do {
    sprintf(buffer, "Paint\\damage%d.bmp", ++index);
    result = car_LoadImageWrapper(buffer);
    *p++ = result;
  } while ((int)p < (int)&gDamagePtrsMaxAddress);
  return result;
}
// 10AA345C: using guessed type int gDamagePtrsMaxAddress;
