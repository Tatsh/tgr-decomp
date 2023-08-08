#include "types-n64.h"
//----- (80265910) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
s32 __fastcall sub_80265910(void *mq, void *msg, s32 a3) {
    __int64 v3;           // $v1
    unsigned __int64 v4;  // $v1
    __int64 v5;           // $v1
    __int64 v6;           // $v1
    int v7;               // $a1
    _DWORD v9[6];         // [sp+38h] [-48h] BYREF
    int v10[8];           // [sp+50h] [-30h] BYREF
    unsigned __int64 v11; // [sp+70h] [-10h]
    int v12;              // [sp+78h] [-8h]
    OSMesg v13;           // [sp+7Ch] [-4h] BYREF

    v12 = 0;
    dword_802A6130 = 1;
    v11 = sub_8026B960();
    HIDWORD(v3) = sub_80266188();
    HIDWORD(v4) = sub_80266088(v3, 1000000LL);
    if (v11 < v4) {
        osCreateMesgQueue((OSMesgQueue *)v9, &v13, 1);
        HIDWORD(v5) = sub_80266188();
        HIDWORD(v6) = sub_80266088(v5, 1000000LL);
        sub_80268390(v10, v7, (v6 - v11) >> 32, v6 - v11, 0, 0, (OSMesgQueue *)v9, (int)&v13);
        sub_802642E0((OSMesgQueue *)v9, &v13, 1);
    }
    byte_8037F431 = 4;
    sub_80265BD8(0);
    v12 = sub_802694D0(1, (unsigned int)dword_8037F3F0);
    sub_802642E0((OSMesgQueue *)mq, &v13, 1);
    v12 = sub_802694D0(0, (unsigned int)dword_8037F3F0);
    sub_802642E0((OSMesgQueue *)mq, &v13, 1);
    sub_80265B08(msg, (int *)a3);
    byte_8037F430 = 0;
    sub_80269410();
    osCreateMesgQueue((OSMesgQueue *)dword_8037F458, (OSMesg *)dword_8037F470, 1);
    return v12;
}
// 80265948: write access to const memory at 802A6130 has been detected
// 80265A6C: write access to const memory at 8037F431 has been detected
// 80265AD8: write access to const memory at 8037F430 has been detected
// 8026598C: variable 'v3' is possibly undefined
// 802659B0: variable 'v4' is possibly undefined
// 80265A00: variable 'v5' is possibly undefined
// 80265A50: variable 'v7' is possibly undefined
// 80265A54: variable 'v6' is possibly undefined
// 802A6130: using guessed type int dword_802A6130;
// 802A6140: using guessed type __int64 qword_802A6140;
// 8037F3F0: using guessed type int dword_8037F3F0[15];
// 8037F430: using guessed type char byte_8037F430;
// 8037F431: using guessed type char byte_8037F431;
// 8037F458: using guessed type int dword_8037F458[6];
// 8037F470: using guessed type int dword_8037F470[4];
