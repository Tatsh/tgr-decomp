#include "../../types-win32.h"
//----- (100058D0) --------------------------------------------------------
void __cdecl sub_100058D0(float *a1) {
    if (*a1 < -1.0)
        *a1 = -1.0;
    if (*a1 > 1.0)
        *a1 = 1.0;
}