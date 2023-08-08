#include "types-n64.h"
//----- (8024843C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8024843C() {
    char *v0;   // $s0
    int i;      // $v0
    int v2;     // $v1
    int *v3;    // $s0
    int v4;     // $s0
    int result; // $v0
    int v6;     // [sp+54h] [-5Ch] BYREF
    int v7;     // [sp+58h] [-58h]
    int v8;     // [sp+5Ch] [-54h]
    int v9;     // [sp+60h] [-50h]
    char v10;   // [sp+64h] [-4Ch] BYREF
    int v11;    // [sp+84h] [-2Ch]
    int v12;    // [sp+88h] [-28h]
    int v13;    // [sp+ACh] [-4h]

    v12 = 317;
    v11 = 331;
    v8 = 102;
    v9 = 44;
    v6 = 171;
    v7 = 191;
    v0 = &v10;
    for (i = 98; i < 294; i += 98) {
        *((_DWORD *)v0 + 2) = 90;
        v0 += 16;
        *((_DWORD *)v0 - 1) = v9;
        *((_DWORD *)v0 - 4) = i + v6 + v8 - 90;
        *((_DWORD *)v0 - 3) = v7;
    }
    sub_80246F90(153, 131, 334, 218, 3, 0, 0);
    sub_8022F5D0(16);
    sub_8022F504();
    sub_8022F4F8();
    formatter("%rySELECT OPTION", 159, 85);
    sub_8022F5D0(14);
    formatter("%wwMIRROR", 110, 110);
    formatter("%wwFLIP H", 162, 110);
    formatter("%wwFLIP V", 211, 110);
    v2 = 0;
    v3 = &v6;
    do {
        if (v2)
            v13 = v2;
        else
            v13 = 0;
        sub_80246BCC();
        v2 = v13 + 1;
        v3 += 4;
    } while (v13 != 2);
    sub_80246F90(172, 248, 296, 58, 1, 1, 1);
    sub_8022F5D0(11);
    sub_8022F530(255, 255, 255, 255, 245, 0);
    formatter("MIRROR CURRENT DECAL TO", 159, 135);
    formatter("THE RIGHT FRONT FENDER", 159, 148);
    sub_8022F5D0(10);
    sub_8022F514();
    v4 = (v12 + 18) >> 1;
    formatter("%wwSELECT", 120, v4);
    formatter("%wwCANCEL", (unsigned int)(v11 + 30) >> 1, v4);
    sub_80245604((int)&dword_8028D0B0, 211, v12);
    sub_80245604((int)&dword_8028D0E0, v11, v12);
    sub_80255ADC((int)dword_8036A8E0);
    result = sub_80255910(dword_8036A8E0, 32);
    byte_8028CFBC = 0;
    byte_8028DBE0 = 0;
    byte_8028DB60 = 1;
    return result;
}
// 802484C0: write access to const memory at 8028DBB8 has been detected
// 80248A04: write access to const memory at 8028DBB8 has been detected
// 80248A08: write access to const memory at 8028DBB8 has been detected
// 80248A9C: write access to const memory at 8028DBB8 has been detected
// 80248ADC: write access to const memory at 8028DBB8 has been detected
// 80248B0C: write access to const memory at 8028CFBC has been detected
// 80248B4C: write access to const memory at 8028CFBC has been detected
// 80248B5C: write access to const memory at 8028DBE0 has been detected
// 80248B64: write access to const memory at 8028DB60 has been detected
// 80248A44: conditional instruction was optimized away because of '$t5.4==0'
// 8028CFBC: using guessed type char byte_8028CFBC;
// 8028D0B0: using guessed type int dword_8028D0B0;
// 8028D0E0: using guessed type int dword_8028D0E0;
// 8028DB60: using guessed type char byte_8028DB60;
// 8028DB64: using guessed type char byte_8028DB64;
// 8028DB68: using guessed type char byte_8028DB68;
// 8028DBB8: using guessed type char byte_8028DBB8;
// 8028DBC0: using guessed type char byte_8028DBC0;
// 8028DBCC: using guessed type char byte_8028DBCC;
// 8028DBE0: using guessed type char byte_8028DBE0;
// 8036A8E0: using guessed type int dword_8036A8E0[];
