#include "types-win32.h"
//----- (10061010) --------------------------------------------------------
int __cdecl car_LoadCarPaint(int carIndex, int bSomething) {
    CarPart *carPart;    // ebx
    _BYTE *mem;          // esi
    int *v4;             // ebp
    int *mem_1;          // eax
    int result;          // eax
    int v7;              // [esp+10h] [ebp-408h]
    int sizeofCarPart;   // [esp+14h] [ebp-404h]
    char filename[1024]; // [esp+18h] [ebp-400h] BYREF

    sizeofCarPart = 0x1E;
    carPart = &gCarPartArray[0x1E * carIndex];
    do {
        if (!carPart->imageData) {
            if (carPart->filename) {
                sprintf(filename, "Paint\\%s", carPart->filename);
                if (CHK_FileExists(filename)) {
                    carPart->imageData = car_LoadImageWrapper(filename);
                    filename[8] = 'd';
                    if (CHK_FileExists(filename)) {
                        mem = car_LoadImageWrapper(filename);
                        if (carPart->imageData) {
                            if (mem) {
                                car_10061210(carPart->imageData, gBmWidth, gBmHeight, mem);
                                free(mem);
                            }
                        }
                    }
                    if (carPart->imageData && carPart->field_10 >= 0 && bSomething &&
                        dword_100ADFC8) {
                        v7 = 1;
                        v4 = &carPart->field_4;
                        do {
                            mem_1 = (int *)malloc(4 * gBmWidth * gBmHeight);
                            *v4 = (int)mem_1;
                            if (mem_1) {
                                qmemcpy(mem_1, carPart->imageData, 4 * gBmWidth * gBmHeight);
                                car_10061290(v7, *v4, gBmWidth, gBmHeight);
                            }
                            ++v4;
                            ++v7;
                        } while (v7 < 4);
                    }
                }
            }
        }
        ++carPart;
        result = --sizeofCarPart;
    } while (sizeofCarPart);
    return result;
}
// 100ADFC8: using guessed type int dword_100ADFC8;
// 10AA3464: using guessed type int gBmWidth;
// 10AA3468: using guessed type int gBmHeight;
