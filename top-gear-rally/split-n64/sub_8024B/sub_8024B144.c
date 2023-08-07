#include "../../types-n64.h"
//----- (8024B144) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
char *sub_8024B144() {
    int v0;          // $s2
    int v1;          // $s3
    int v2;          // $s2
    const char **v3; // $s1
    int v4;          // $s0
    int v5;          // $s0
    float v6;        // $f2
    char *result;    // $v0
    int *v8;         // $v1
    char v9;         // $t5
    _DWORD v10[5];   // [sp+60h] [-70h] BYREF
    char v11;        // [sp+74h] [-5Ch]
    char v12[12];    // [sp+78h] [-58h] BYREF
    int v13;         // [sp+84h] [-4Ch]
    int v14;         // [sp+A0h] [-30h]
    int v15;         // [sp+A4h] [-2Ch]

    v10[3] = -16777216;
    v10[4] = -16777216;
    v11 = -1;
    v10[0] = "R";
    v10[1] = "G";
    v10[2] = "B";
    v15 = 313;
    v13 = 0;
    v14 = 266;
    sub_80246F90(173, 182, 294, 116, 3, 0, 0);
    sub_80246F90(187, 194, 60, 60, 1, 0, 1);
    v0 = 0;
    v1 = 194;
    do {
        if (v0)
            sub_80246F90(285, v1, 128, 16, 1, 1, 1);
        else
            sub_80246F90(285, v1, 128, 16, 1, 0, 1);
        if (*((_BYTE *)&dword_80369BD4 + v0 + 16)) {
            sub_80246E10();
            if (!v0)
                sub_80246F90(285, v1, 89, 16, 1, 0, 0);
            ++v0;
        } else {
            ++v0;
        }
        v1 += 22;
    } while (v0 < 3);
    v2 = 0;
    v3 = (const char **)v10;
    v4 = 104;
    do {
        if (v2)
            sub_8022F530(200, 200, 200, 128, 128, 128);
        else
            sub_8022F530(255, 255, 255, 255, 255, 0);
        sub_8022F5D0(11);
        sub_8022F514();
        formatter(*v3, 131, v4);
        sub_8022F5D0(10);
        sub_8022F520();
        sub_80260DD4((int)v12,
                     (unsigned __int8 *)&dword_802AAEA4,
                     *((unsigned __int8 *)&dword_80369BD4 + v2 + 16));
        formatter(v12, 226, v4);
        ++v2;
        ++v3;
        v4 += 11;
    } while (v2 < 3);
    sub_80245604((int)&dword_8028D0B0, 229, v14);
    sub_80245604((int)&dword_8028D0E0, v15, v14);
    sub_8022F514();
    sub_8022F5D0(10);
    v5 = (v14 + 18) >> 1;
    formatter("%wwOK", 129, v5);
    formatter("%wwCANCEL", (unsigned int)(v15 + 30) >> 1, v5);
    sub_80255954(dword_8036A8E0, &dword_8036A8E4[1], (float *)dword_8036A8FC, 8);
    sub_80255A18(dword_8036A8E0, &dword_8036A8E4[2], (float *)dword_8036A8FC, 2);
    if (COERCE_FLOAT(-2143332071) < 0.0)
        v6 = -COERCE_FLOAT(-2143332071);
    else
        v6 = COERCE_FLOAT(-2143332071);
    if (v6 < 0.1)
        v13 = 1;
    else
        v13 = (int)(float)(COERCE_FLOAT(-2143332071) * 10.0);
    sub_80255910(dword_8036A8E0, 1026);
    byte_8028DCE0 = 1;
    if (v13 + 179 >= 0) {
        if (v13 + 179 < 256)
            HIBYTE(dword_80369BE4) = v13 - 77;
        else
            HIBYTE(dword_80369BE4) = -1;
    } else {
        HIBYTE(dword_80369BE4) = 0;
    }
    if (v13)
        MEMORY[6] = MEMORY[6] & 1 | 0xB004;
    sub_80255910(dword_8036A8E0, 32);
    MEMORY[6] = MEMORY[6] & 1 | 0xC342;
    result = &byte_80369DA8;
    v8 = &dword_80369BD4;
    do {
        v9 = *result++;
        v8 = (int *)((char *)v8 + 1);
        *((_BYTE *)v8 + 15) = v9;
    } while (result < &byte_80369DAB);
    byte_8028DCE0 = 0;
    byte_8028DBD4 = 0;
    return result;
}
// 8024B7AC: write access to const memory at 8028DCE0 has been detected
// 8024B7C0: write access to const memory at 8028DCE0 has been detected
// 8024B7F0: write access to const memory at 8028DCE0 has been detected
// 8024B800: write access to const memory at 8028DCE0 has been detected
// 8024BB70: write access to const memory at 8028DCE0 has been detected
// 8024BB84: write access to const memory at 8028DBD4 has been detected
// 8024BE44: write access to const memory at 8028DCE0 has been detected
// 8024BE4C: write access to const memory at 8028DBD4 has been detected
// 8024BB94: write access to const memory at 8028DBB4 has been detected
// 8024B854: write access to const memory at 80369BBC has been detected
// 8024B864: write access to const memory at 80369BBC has been detected
// 8024B870: write access to const memory at 80369BBC has been detected
// 8024B354: conditional instruction was optimized away because of '$a1.4==3'
// 8024B748: conditional instruction was optimized away because of '$t8.4==0'
// 8024B75C: conditional instruction was optimized away because of '$t9.4==200'
// 8024B8B0: write access to const memory at 80369BE4 has been detected
// 8024B8C0: write access to const memory at 80369BE4 has been detected
// 8024B8CC: write access to const memory at 80369BE4 has been detected
// 8028AB08: using guessed type int dword_8028AB08;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DBB4: using guessed type char byte_8028DBB4;
// 8028DBD4: using guessed type char byte_8028DBD4;
// 8028DCE0: using guessed type char byte_8028DCE0;
// 802AAEA4: using guessed type int dword_802AAEA4;
// 80369BBC: using guessed type char byte_80369BBC;
// 80369BD4: using guessed type int dword_80369BD4;
// 80369BE4: using guessed type int;
// 80369DA8: using guessed type char byte_80369DA8;
// 80369DAB: using guessed type char byte_80369DAB;
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036A8E4: using guessed type int[5];
// 8036A8F8: using guessed type float flt_8036A8F8;
// 8036A8FC: using guessed type int[3];
