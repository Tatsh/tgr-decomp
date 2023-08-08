#include "types-win32.h"
//----- (10074A50) --------------------------------------------------------
int *__cdecl sub_10074A50(_DWORD *a1, int *a2) {
    int v4;      // ebx
    int *result; // eax
    _DWORD *v6;  // ecx
    int v7;      // edx
    int v8;      // ebp

    v4 = 3;
    do {
        result = a2;
        v6 = a1;
        v7 = 3;
        do {
            v8 = *result++;
            *v6 = v8;
            v6 += 3;
            --v7;
        } while (v7);
        a2 += 4;
        ++a1;
        --v4;
    } while (v4);
    return result;
}
