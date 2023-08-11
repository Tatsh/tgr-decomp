#include "types-win32.h"
//----- (10061010) --------------------------------------------------------
int __cdecl LoadCarPaint(int carIndex, int bSomething) {
  Car *car;            // ebx
  _BYTE *mem;          // esi
  int *v4;             // ebp
  int *mem_1;          // eax
  int result;          // eax
  int v7;              // [esp+10h] [ebp-408h]
  int v8;              // [esp+14h] [ebp-404h]
  char filename[1024]; // [esp+18h] [ebp-400h] BYREF

  v8 = 30;
  car = &gCarsArray[carIndex];
  do {
    if (!car->imageData0) {
        if (*(_DWORD *)car->paintFilename) {
            sprintf(filename, "Paint\\%s", *(const char **)car->paintFilename);
            if (CHK_FileExists(filename)) {
                car->imageData0 = LoadImageWrapper(filename);
                filename[8] = 0x64;
                if (CHK_FileExists(filename)) {
                    mem = LoadImageWrapper(filename);
                    if (car->imageData0) {
                        if (mem) {
                            sub_10061210(car->imageData0, g_bmWidth, g_bmHeight, mem);
                            free(mem);
                        }
                    }
                }
                if (car->imageData0 && car->field_10 >= 0 && bSomething && dword_100ADFC8) {
                    v7 = 1;
                    v4 = &car->field_4;
                    do {
                        mem_1 = (int *)malloc(4 * g_bmWidth * g_bmHeight);
                        *v4 = (int)mem_1;
                        if (mem_1) {
                            qmemcpy(mem_1, car->imageData0, 4 * g_bmWidth * g_bmHeight);
                            sub_10061290(v7, *v4, g_bmWidth, g_bmHeight);
                        }
                        ++v4;
                        ++v7;
                    } while (v7 < 4);
                }
            }
        }
    }
    car = (Car *)((char *)car + 40);
    result = --v8;
  } while (v8);
  return result;
}
// 100ADFC8: using guessed type int dword_100ADFC8;
// 10AA3464: using guessed type int g_bmWidth;
// 10AA3468: using guessed type int g_bmHeight;
