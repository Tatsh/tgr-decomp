#include "types-win32.h"
//----- (100613B0) --------------------------------------------------------
CarPart *car_100613B0() {
    CarPart *result;      // eax
    CarPart *carPartPtr0; // ebx
    int v2;               // ebp
    CarPart *carPartPtr1; // esi
    int i;                // edi

    result = gCarPartArray;
    do {
        carPartPtr0 = result;
        v2 = 30;
        do {
            carPartPtr1 = carPartPtr0;
            i = 4;
            do {
                if (carPartPtr1->imageData) {
                    free(carPartPtr1->imageData);
                    carPartPtr1->imageData = 0;
                }
                carPartPtr1 = (CarPart *)((char *)carPartPtr1 + 4);
                --i;
            } while (i);
            ++carPartPtr0;
            --v2;
        } while (v2);
        result = carPartPtr0;
    } while ((int)carPartPtr0 < (int)&dword_100B2AD0);
    return result;
}
// 100B2AD0: using guessed type int dword_100B2AD0;
