#include "types-win32.h"
//----- (100061A0) --------------------------------------------------------
int __cdecl math_100061A0(unk00214 *u214, float a2[40]) {
    __int16 v2;          // ax
    __int16 v3;          // ax
    __int16 v4;          // ax
    __int16 v5;          // ax
    unsigned int v6;     // eax
    unsigned int v7;     // eax
    __int16 v8;          // ax
    __int16 v9;          // ax
    __int16 v10;         // ax
    char v11;            // al
    char v12;            // al
    char v13;            // al
    char v14;            // al
    char v15;            // al
    unsigned __int8 v16; // al
    int v17;             // eax
    unsigned __int8 v18; // al
    unsigned __int8 v19; // al
    unsigned __int8 v20; // al
    int result;          // eax

    v2 = math_ClampFloor32768Int(*a2);
    meth_unk00214_10073E70(u214, v2 >> 8, 8);
    v3 = math_ClampFloor32768Int(a2[1]);
    meth_unk00214_10073E70(u214, v3 >> 8, 8);
    v4 = math_ClampFloor32768Int(a2[2]);
    meth_unk00214_10073E70(u214, v4 >> 8, 8);
    v5 = math_ClampFloor32768Int(a2[3]);
    meth_unk00214_10073E70(u214, v5 >> 8, 8);
    v6 = math_ClampFloor1677215(a2[4]);
    meth_unk00214_10073E70(u214, v6 >> 7, 17);
    v7 = math_ClampFloor1677215(a2[5]);
    meth_unk00214_10073E70(u214, v7 >> 7, 17);
    v8 = math_ClampFloorNeg128(a2[6]);
    meth_unk00214_10073E70(u214, v8 >> 1, 15);
    v9 = math_ClampFloor32768(a2[7]);
    meth_unk00214_10073E70(u214, v9, 16);
    v10 = math_ClampFloor32768(a2[8]);
    meth_unk00214_10073E70(u214, v10, 16);
    v11 = math_ClampFloor128(a2[10]);
    meth_unk00214_10073E70(u214, v11 >> 3, 5);
    v12 = math_ClampFloor128(a2[11]);
    meth_unk00214_10073E70(u214, v12 >> 3, 5);
    v13 = math_ClampFloor128(a2[12]);
    meth_unk00214_10073E70(u214, v13 >> 3, 5);
    v14 = math_ClampFloor128(a2[13]);
    meth_unk00214_10073E70(u214, v14 >> 4, 4);
    v15 = math_ClampFloor32Int(a2[14]);
    meth_unk00214_10073E70(u214, v15 >> 2, 4);
    v16 = math_ClampFloor255(a2[15]);
    meth_unk00214_10073E70(u214, v16 >> 4, 4);
    meth_unk00214_10073E70(u214, a2[19] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[20] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[21] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[22] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[27] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[28] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[29] != 0.0, 1);
    v17 = math_ClampFloor8388607(a2[30]);
    meth_unk00214_10073E70(u214, v17, 24);
    v18 = math_ClampFloor63(a2[31]);
    meth_unk00214_10073E70(u214, v18, 6);
    v19 = math_100066A0(a2[32]);
    meth_unk00214_10073E70(u214, v19, 2);
    v20 = math_100066A0(a2[33]);
    meth_unk00214_10073E70(u214, v20, 2);
    meth_unk00214_10073E70(u214, a2[34] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[35] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[36] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[37] != 0.0, 1);
    meth_unk00214_10073E70(u214, a2[38] != 0.0, 1);
    if (a2[39] == 0.0)
        result = meth_unk00214_10073E70(u214, 0, 1);
    else
        result = meth_unk00214_10073E70(u214, 1, 1);
    return result;
}
