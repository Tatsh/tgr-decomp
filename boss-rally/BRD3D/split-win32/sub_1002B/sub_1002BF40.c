#include "../../types-win32.h"
//----- (1002BF40) --------------------------------------------------------
int __cdecl sub_1002BF40(int a1) {
    int v2; // eax
    int *i; // ecx

    if (!a1)
        return 1;
    v2 = 0;
    if (dword_1067B548 <= 0)
        return 0;
    for (i = dword_1067B550; *i != a1; ++i) {
        if (++v2 >= dword_1067B548)
            return 0;
    }
    return 1;
}
// 1067B548: using guessed type int dword_1067B548;
