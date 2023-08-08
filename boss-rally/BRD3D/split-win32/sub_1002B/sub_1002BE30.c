#include "../types-win32.h"
//----- (1002BE30) --------------------------------------------------------
void *__cdecl sub_1002BE30(__int16 *a1, int a2) {
    float *v2;    // edx
    int v3;       // esi
    void *result; // eax
    int v6;       // [esp+Ch] [ebp+8h]

    v2 = (float *)off_100A81C8;
    v3 = a2;
    result = off_100A81C8;
    if (a2 > 0) {
        do {
            v6 = *a1;
            a1 += 8;
            *v2 = (float)v6;
            v2[1] = (float)*(a1 - 7);
            v2[2] = (float)*(a1 - 6);
            v2[3] = (float)*(a1 - 4);
            v2[4] = (float)*(a1 - 3);
            v2[5] = (double)*((char *)a1 - 4) * 0.0078125;
            v2[6] = (double)*((char *)a1 - 3) * 0.0078125;
            v2[7] = (double)*((char *)a1 - 2) * 0.0078125;
            v2 = (float *)((char *)off_100A81C8 + 32);
            --v3;
            off_100A81C8 = (char *)off_100A81C8 + 32;
            ++dword_1067D550;
        } while (v3);
    }
    return result;
}
// 100A81C8: using guessed type void *off_100A81C8;
// 1067D550: using guessed type int dword_1067D550;
