#include "types-win32.h"
//----- (10060FB0) --------------------------------------------------------
int *__cdecl sub_10060FB0(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6) {
    int v6;      // eax
    int v7;      // edx
    int *result; // eax

    v6 = 40 * (a2 + 30 * a1);
    *a3 = *(int *)((char *)&gCarsArray[0].field_14 + v6);
    *a4 = *(_DWORD *)((char *)&gCarsArray[0].field_18 + v6);
    *a5 = *(int *)((char *)&gCarsArray[0].field_1A + v6 + 2);
    v7 = *(int *)((char *)&gCarsArray[0].field_1E + v6 + 2);
    result = a6;
    *a6 = v7;
    return result;
}
