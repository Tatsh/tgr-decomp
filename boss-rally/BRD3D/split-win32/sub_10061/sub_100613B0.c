#include "../../types-win32.h"
//----- (100613B0) --------------------------------------------------------
Car *sub_100613B0() {
    Car *result; // eax
    Car *v1;     // ebx
    int v2;      // ebp
    Car *v3;     // esi
    int v4;      // edi

    result = gCarsArray;
    do {
        v1 = result;
        v2 = 30;
        do {
            v3 = v1;
            v4 = 4;
            do {
                if (v3->imageData0) {
                    free(v3->imageData0);
                    v3->imageData0 = 0;
                }
                v3 = (Car *)((char *)v3 + 4);
                --v4;
            } while (v4);
            v1 = (Car *)((char *)v1 + 40);
            --v2;
        } while (v2);
        result = v1;
    } while ((int)v1 < (int)&dword_100B2AD0);
    return result;
}
// 100B2AD0: using guessed type int dword_100B2AD0;
