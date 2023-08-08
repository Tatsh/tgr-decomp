#include "types-n64.h"
//----- (80251CD4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80251CD4(int a1, int a2, int a3, int a4) {
    int v4;   // $fp
    char v5;  // $s1
    int v6;   // $s2
    int v7;   // $s7
    char v8;  // $t5
    int v9;   // $s3
    int v10;  // $s6
    char v11; // $t9
    char v12; // $t3
    char v13; // $t7
    char v14; // $s1
    int v16;  // [sp+68h] [+0h]
    int v17;  // [sp+6Ch] [+4h]
    int v18;  // [sp+74h] [+Ch]

    v4 = a3;
    v16 = a1;
    v17 = a2;
    v18 = a4;
    v5 = 0;
    word_8028DBB0 = 1;
    if (a3 < a1) {
        v16 = a3;
        v4 = a1;
    }
    if (a4 < a2) {
        v17 = a4;
        v18 = a2;
    }
    v6 = v16;
    v7 = v4 - 4;
    v8 = 1;
    if (v16 < v4 - 4) {
        while (1) {
            v5 = v8 & 1;
            sub_80246E10();
            v6 += 4;
            if (v6 >= v7)
                break;
            v8 = v5 + 1;
        }
        v6 = v16;
    }
    v9 = v17;
    v10 = v18 - 4;
    v11 = v5 + 1;
    if (v17 < v18 - 4) {
        while (1) {
            v5 = v11 & 1;
            sub_80246E10();
            v9 += 4;
            if (v9 >= v10)
                break;
            v11 = v5 + 1;
        }
        v9 = v17;
    }
    sub_80246E10();
    v12 = v5 + 1;
    if (v16 < v7) {
        while (1) {
            v5 = v12 & 1;
            sub_80246E10();
            v6 += 4;
            if (v6 >= v7)
                break;
            v12 = v5 + 1;
        }
    }
    v13 = v5 + 1;
    if (v17 < v10) {
        while (1) {
            v14 = v13 & 1;
            sub_80246E10();
            v9 += 4;
            if (v9 >= v10)
                break;
            v13 = v14 + 1;
        }
    }
    return sub_80246E10();
}
// 80251D2C: write access to const memory at 8028DBB0 has been detected
// 8028DBB0: using guessed type __int16 word_8028DBB0;
