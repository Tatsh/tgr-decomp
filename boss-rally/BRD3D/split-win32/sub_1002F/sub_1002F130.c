#include "types-win32.h"
//----- (1002F130) --------------------------------------------------------
int __cdecl sub_1002F130(int a1) {
    int v1;     // eax
    int v2;     // ebx
    char *v3;   // edi
    int v4;     // edx
    int v5;     // eax
    int v6;     // edx
    int result; // eax

    v1 = atomic_sub_10005DE0(a1,
                             &byte_10AD0854[11112 * dword_100B36FC],
                             &byte_10AD0855[11112 * dword_100B36FC],
                             &byte_10AD0856[11112 * dword_100B36FC]);
    meth_10076AE0(&stru_10ACDEA8[2778 * dword_100B36FC], v1);
    v2 = 2778 * dword_100B36FC;
    v3 = atomic_sub_10005E70(a1);
    v4 = dword_100B36FC;
    strcpy(&byte_10ACDFF0[v2 * 4], v3);
    sub_10068260(v4, dword_10AD0850[v2]);
    v5 = 463 * dword_100B36FC++;
    v6 = 3 * v5;
    result = dword_100B36F8 + 1;
    dword_10ACDFEC[2 * v6] = a1;
    dword_100B36F8 = result;
    return result;
}
// 100B36F8: using guessed type int dword_100B36F8;
// 100B36FC: using guessed type int dword_100B36FC;
// 10ACDFEC: using guessed type int dword_10ACDFEC[];
// 10AD0850: using guessed type int dword_10AD0850[];
