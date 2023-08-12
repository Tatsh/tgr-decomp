#include "types-win32.h"
//----- (10061210) --------------------------------------------------------
unsigned int __cdecl car_10061210(char *imageData,
                                  int bmHeight_1,
                                  int bmHeight,
                                  unsigned __int8 *mem) {
  int totalPixels;     // ebp
  int v7;              // esi
  unsigned int v8;     // kr00_4
  unsigned int v9;     // edx
  unsigned int v10;    // esi
  unsigned int result; // eax

  totalPixels = bmHeight_1 * bmHeight;
  if (bmHeight_1 * bmHeight > 0) {
    do {
      v7 = *mem;
      v8 = v7 * (unsigned __int8)*imageData;
      v9 = (unsigned __int8)imageData[1] * v7;
      imageData += 4;
      mem += 4;
      v10 = (unsigned __int8)*(imageData - 2) * v7;
      result = 0x80808081 * v10;
      LOBYTE(result) = v9 / 0xFF;
      *(imageData - 4) = v8 / 0xFF;
      *(imageData - 3) = result;
      *(imageData - 2) = v10 / 0xFF;
      --totalPixels;
    } while (totalPixels);
  }
  return result;
}
