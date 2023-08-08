#include "../types-win32.h"
//----- (10017CD0) --------------------------------------------------------
double __cdecl sub_10017CD0(int a1, int a2) {
    double result; // st7
    int v3;        // esi
    int *v4;       // edx
    int v5;        // ebx
    double v6;     // st6

    result = 0.0;
    v3 = 255;
    if (dword_100B36FC > 0) {
        v4 = (int *)(a1 + 4088);
        v5 = dword_100B36FC;
        do {
            if (v3 > *v4) {
                v3 = *v4;
                result = *((float *)v4 - 1) - *(float *)(a1 + 11112 * a2 + 4084);
            }
            v4 += 2778;
            --v5;
        } while (v5);
    }
    if (result != 0.0) {
        v6 = *(float *)(a1 + 11112 * a2 + 4144) * 0.44642857;
        if (v6 == 0.0) {
            result = 1000.0;
        } else {
            if (v6 < 25.0)
                v6 = 25.0;
            result = result / v6;
        }
    }
    return result;
}
// 100B36FC: using guessed type int dword_100B36FC;
