#include "types-n64.h"
//----- (80247B0C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80247B0C() {
    int *v0;         // $s1
    int v1;          // $v0
    int v2;          // $s0
    int *v3;         // $s1
    unsigned int v4; // $s7
    unsigned int v5; // $s3
    unsigned int v6; // $s6
    unsigned int v7; // $fp
    int v8;          // $s0
    int result;      // $v0
    int v10;         // [sp+78h] [-88h] BYREF
    int v11;         // [sp+7Ch] [-84h]
    int v12;         // [sp+80h] [-80h]
    int v13;         // [sp+84h] [-7Ch]
    int v14;         // [sp+88h] [-78h]
    int v15;         // [sp+8Ch] [-74h]
    int v16;         // [sp+98h] [-68h]
    int v17;         // [sp+9Ch] [-64h]
    int v18;         // [sp+A0h] [-60h]
    int v19;         // [sp+A4h] [-5Ch]
    int v20;         // [sp+A8h] [-58h]
    int v21;         // [sp+ACh] [-54h]
    int v22;         // [sp+B8h] [-48h]
    int v23;         // [sp+BCh] [-44h]

    v23 = 328;
    v22 = 329;
    v0 = &v10;
    v1 = 185;
    do {
        *v0 = v1;
        v1 += 70;
        v0 += 4;
        *(v0 - 2) = 60;
        *(v0 - 1) = 78;
        *(v0 - 3) = 172;
    } while (v1 < 465);
    sub_80246F90(167, 120, 306, 240, 3, 0, 0);
    v2 = 0;
    v3 = &v10;
    do {
        sub_80246BCC();
        if (v2)
            ++v2;
        else
            v2 = 1;
        v3 += 4;
    } while (v2 != 4);
    v4 = (unsigned int)(v18 - 48) >> 1;
    v5 = (unsigned int)(v12 - 16) >> 1;
    v6 = (unsigned int)(v13 - 21) >> 1;
    v7 = (unsigned int)(v19 - 70) >> 1;
    sub_8024594C((int)&dword_8028CC30, v10 + v5, v11 + v6, 16, 21);
    sub_8024594C((int)&dword_8028CBA0, v16 + v4, v17 + v7, 48, 70);
    sub_8024594C((int)&dword_8028CC30, v14 + v5, v15 + v6, 16, 21);
    sub_8024594C((int)&dword_8028CBA0, v20 + v4, v21 + v7, 48, 70);
    sub_8022F504();
    sub_8022F4F8();
    sub_8022F5D0(16);
    formatter("%rySELECT OPTION", 158, 78);
    sub_80246F90(186, v13 + v11 + 12, 268, 58, 1, 1, 1);
    sub_8022F5D0(11);
    sub_8022F530(255, 255, 255, 255, 245, 0);
    formatter("CLEAR CURRENT DECAL", 158, 142);
    formatter("TO SELECTED COLOR", 158, 155);
    sub_8022F5D0(10);
    sub_8022F514();
    v8 = (v23 + 18) >> 1;
    formatter("%wwSELECT", 120, v8);
    formatter("%wwCANCEL", (unsigned int)(v22 + 30) >> 1, v8);
    sub_80245604((int)&dword_8028D0B0, 211, v23);
    sub_80245604((int)&dword_8028D0E0, v22, v23);
    sub_80255ADC((int)dword_8036A8E0);
    result = sub_80255910(dword_8036A8E0, 32);
    byte_8028CFEC = 0;
    byte_8028DB60 = 1;
    return result;
}
// 80248164: write access to const memory at 8028DB60 has been detected
// 80248208: write access to const memory at 8028DB60 has been detected
// 80248234: write access to const memory at 8028DB70 has been detected
// 80248260: write access to const memory at 8028DB78 has been detected
// 80248274: write access to const memory at 8028DB7C has been detected
// 802482B0: write access to const memory at 8028DB8C has been detected
// 8024834C: write access to const memory at 8028DB68 has been detected
// 80248378: write access to const memory at 8028DB78 has been detected
// 8024838C: write access to const memory at 8028DB7C has been detected
// 802483CC: write access to const memory at 8028DB8C has been detected
// 802483E4: write access to const memory at 8028DB60 has been detected
// 80248404: write access to const memory at 8028DB60 has been detected
// 80248154: write access to const memory at 8028CFEC has been detected
// 802483D0: write access to const memory at 8028CFEC has been detected
// 802483AC: write access to const memory at 8028DB88 has been detected
// 80248294: write access to const memory at 8028DB88 has been detected
// 802483F8: write access to const memory at 8028CFEC has been detected
// 80248048: write access to const memory at 8028CFEC has been detected
// 8024804C: write access to const memory at 8028CFEC has been detected
// 802480A8: write access to const memory at 8028CFEC has been detected
// 802480E4: write access to const memory at 8028CFEC has been detected
// 80248084: conditional instruction was optimized away because of '$t2.4==0'
// 8028AB08: using guessed type int dword_8028AB08;
// 8028CBA0: using guessed type int dword_8028CBA0;
// 8028CC30: using guessed type int dword_8028CC30;
// 8028CFEC: using guessed type char byte_8028CFEC;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB58: using guessed type char byte_8028DB58;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DB70: using guessed type char byte_8028DB70;
// 8028DB78: using guessed type int dword_8028DB78;
// 8028DB7C: using guessed type int dword_8028DB7C;
// 8036A8E0: using guessed type int dword_8036A8E0[];
