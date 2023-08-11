#include "types-win32.h"
//----- (10073C90) --------------------------------------------------------
unsigned int __thiscall meth_10073C90(int *this, int a2) {
    int v3;              // ecx
    unsigned int result; // eax
    int v5;              // edx
    char v6;             // di
    int v7;              // ebx
    unsigned int v8;     // ebp
    int v9;              // ecx
    int i;               // [esp+4h] [ebp-4h]

    v3 = a2;
    result = 0;
    for (i = 0; a2; a2 -= v5) {
        v5 = 8 - *this;
        if (v5 <= v3) {
            v6 = 0;
        } else {
            v5 = v3;
            v6 = 8 - *(_BYTE *)this - v3;
        }
        v7 = this[1];
        v8 = (*(char *)(this[4] + v7) & (unsigned int)(((1 << v5) - 1) << v6)) >> v6;
        v9 = v5 + *this;
        *this = v9;
        result = v8 | (result << v5);
        i += v5;
        if (v9 >= 8) {
            *this = 0;
            this[1] = v7 + 1;
        }
        v3 = a2 - v5;
    }
    return result;
  }
