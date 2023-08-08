#include "types-win32.h"
//----- (10061010) --------------------------------------------------------
int __cdecl sub_10061010(int carIndex, int bSomething) {
    Car *car;              // ebx
    bool paintFileExists;  // al
    int paintFileExists_1; // eax
    _BYTE *mem;            // esi
    int *v6;               // ebp
    int *mem_1;            // eax
    int result;            // eax
    int v9;                // [esp+10h] [ebp-408h]
    int v10;               // [esp+14h] [ebp-404h]
    char filename[1024];   // [esp+18h] [ebp-400h] BYREF

    v10 = 30;
    car = &gCarsArray[carIndex];
    do {
        if (!car->imageData0) {
            if (*(_DWORD *)car->paintFilename) {
                sprintf(filename, "Paint\\%s", *(const char **)car->paintFilename);
                paintFileExists = CHK_FileExists(filename);
                if (*(_DWORD *)&paintFileExists) {
                    car->imageData0 = LoadImageWrapper(filename);
                    filename[8] = 0x64;
                    LOBYTE(paintFileExists_1) = CHK_FileExists(filename);
                    if (paintFileExists_1) {
                        mem = LoadImageWrapper(filename);
                        if (car->imageData0) {
                            if (mem) {
                                sub_10061210(car->imageData0, g_bmWidth, g_bmHeight, mem);
                                free(mem);
                            }
                        }
                    }
                    if (car->imageData0 && car->field_10 >= 0 && bSomething && dword_100ADFC8) {
                        v9 = 1;
                        v6 = &car->field_4;
                        do {
                            mem_1 = (int *)malloc(4 * g_bmWidth * g_bmHeight);
                            *v6 = (int)mem_1;
                            if (mem_1) {
                                qmemcpy(mem_1, car->imageData0, 4 * g_bmWidth * g_bmHeight);
                                sub_10061290(v9, *v6, g_bmWidth, g_bmHeight);
                            }
                            ++v6;
                            ++v9;
                        } while (v9 < 4);
                    }
                }
            }
        }
        car = (Car *)((char *)car + 40);
        result = --v10;
    } while (v10);
    return result;
}
// 10061071: variable 'paintFileExists' is possibly undefined
// 1006109A: variable 'paintFileExists_1' is possibly undefined
// 100ADFC8: using guessed type int dword_100ADFC8;
// 10AA3464: using guessed type int g_bmWidth;
// 10AA3468: using guessed type int g_bmHeight;
