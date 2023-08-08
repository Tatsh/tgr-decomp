#include "../types-win32.h"
//----- (1001D940) --------------------------------------------------------
float *__cdecl sub_1001D940(int a1, int a2, float a3) {
    float *result; // eax

    result = (float *)dword_104C0BBC;
    if (dword_104C0BBC)
        dword_104C0BBC = *(_DWORD *)dword_104C0BBC;
    result[1] = (*(float *)(a2 + 4) - *(float *)(a1 + 4)) * a3 + *(float *)(a1 + 4);
    result[2] = (*(float *)(a2 + 8) - *(float *)(a1 + 8)) * a3 + *(float *)(a1 + 8);
    result[3] = (*(float *)(a2 + 12) - *(float *)(a1 + 12)) * a3 + *(float *)(a1 + 12);
    result[4] = (*(float *)(a2 + 16) - *(float *)(a1 + 16)) * a3 + *(float *)(a1 + 16);
    result[5] = (*(float *)(a2 + 20) - *(float *)(a1 + 20)) * a3 + *(float *)(a1 + 20);
    result[6] = (*(float *)(a2 + 24) - *(float *)(a1 + 24)) * a3 + *(float *)(a1 + 24);
    result[7] = (*(float *)(a2 + 28) - *(float *)(a1 + 28)) * a3 + *(float *)(a1 + 28);
    result[8] = (*(float *)(a2 + 32) - *(float *)(a1 + 32)) * a3 + *(float *)(a1 + 32);
    result[9] = (*(float *)(a2 + 36) - *(float *)(a1 + 36)) * a3 + *(float *)(a1 + 36);
    return result;
}
// 104C0BBC: using guessed type int dword_104C0BBC;
