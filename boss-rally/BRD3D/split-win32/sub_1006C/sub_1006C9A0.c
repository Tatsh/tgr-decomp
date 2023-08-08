#include "../types-win32.h"
//----- (1006C9A0) --------------------------------------------------------
double __cdecl sub_1006C9A0(int a1, float a2, int a3) {
    return *(float *)(a3 + 4) * *(float *)(a1 + 4) + *(float *)(a3 + 8) * *(float *)(a1 + 8) +
           *(float *)a1 * *(float *)a3 + a2;
}
