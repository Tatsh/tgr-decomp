#include "types-win32.h"
//----- (10061620) --------------------------------------------------------
void car_10061620() {
    char **v0; // esi

    car_100613B0();
    v0 = gDamageBitmapPtrs;
    do {
        if (*v0) {
            free(*v0);
            *v0 = 0;
        }
        ++v0;
    } while ((int)v0 < (int)&gDamagePtrsMaxAddress);
}
// 10AA345C: using guessed type int gDamagePtrsMaxAddress;
