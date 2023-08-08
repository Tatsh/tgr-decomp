#include "../types-win32.h"
//----- (1006DAF0) --------------------------------------------------------
int __cdecl sub_1006DAF0(float *a1, float *a2) {
    int result; // eax

    result = sub_1006D2B0((int)a1);
    if (result == -1)
        result = sub_1006D9A0(a1, a2);
    return result;
}
