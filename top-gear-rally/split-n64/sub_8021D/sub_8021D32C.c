#include "types-n64.h"
//----- (8021D32C) --------------------------------------------------------
unsigned int __fastcall sub_8021D32C(unsigned int *a1) {
    unsigned int *v1;    // $s3
    int v2;              // $s7
    unsigned int *v3;    // $fp
    int v4;              // $s1
    unsigned int *v5;    // $s0
    unsigned int *v6;    // $s2
    int v7;              // $s1
    unsigned int *v8;    // $s0
    signed int v9;       // $s7
    int v10;             // $s0
    unsigned int *v11;   // $a0
    unsigned int i;      // $t0
    unsigned int j;      // $t3
    unsigned int result; // $v0
    unsigned int *v15;   // [sp+44h] [-1Ch]

    v1 = a1;
    v2 = 0;
    v3 = a1;
    v15 = a1;
    do {
        v4 = 0;
        v5 = v3;
        v6 = v3 + 6;
        do {
            sub_8021D070(v6, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
            sub_8021D098((_DWORD *)v5[6],
                         (unsigned int)dword_803C8000,
                         (unsigned int)dword_803D5F88,
                         (int)v1);
            v4 += 4;
            ++v5;
            ++v6;
        } while (v4 < 40);
        v7 = 0;
        v8 = v15;
        do {
            if (v8[47]) {
                sub_8021D070(
                    v8 + 47, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
                sub_8021D098((_DWORD *)v8[47],
                             (unsigned int)dword_803C8000,
                             (unsigned int)dword_803D5F88,
                             (int)v1);
            }
            v7 += 4;
            ++v8;
        } while (v7 != 12);
        ++v2;
        v15 += 3;
        v3 += 10;
    } while (v2 < 3);
    sub_8021D070(v1 + 5, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
    sub_8021D070(v1 + 36, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
    sub_8021D070(v1 + 37, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
    v9 = 0;
    v10 = 0;
    if ((int)v1[4] > 0) {
        for (i = v1[5];; i = v1[5]) {
            sub_8021D070((unsigned int *)(i + v10),
                         (unsigned int)dword_803C8000,
                         (unsigned int)dword_803D5F88,
                         (int)v1);
            sub_8021D070((unsigned int *)(v1[5] + v10 + 4),
                         (unsigned int)dword_803C8000,
                         (unsigned int)dword_803D5F88,
                         (int)v1);
            ++v9;
            v10 += 36;
            if (v9 >= (int)v1[4])
                break;
        }
        v9 = 0;
        v11 = v1 + 71;
    } else {
        v11 = v1 + 71;
    }
    sub_8021D070(v11, (unsigned int)dword_803C8000, (unsigned int)dword_803D5F88, (int)v1);
    for (j = v1[71];; j = v1[71]) {
        result = sub_8021D070((unsigned int *)(j + 4 * v9++),
                              (unsigned int)dword_803C8000,
                              (unsigned int)dword_803D5F88,
                              (int)v1);
        if (v9 == 12)
            break;
    }
    return result;
}
// 803C8000: using guessed type int dword_803C8000[512];
// 803D5F88: using guessed type int dword_803D5F88[224];
