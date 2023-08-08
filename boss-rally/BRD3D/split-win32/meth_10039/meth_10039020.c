#include "../types-win32.h"
//----- (10039020) --------------------------------------------------------
void __thiscall meth_10039020(int this) {
    __int16 v2;         // ax
    unsigned __int8 v4; // c0
    unsigned __int8 v5; // c3
    int v6;             // eax
    double v7;          // st7
    unsigned int v8;    // esi
    __int16 v9;         // dx
    __int16 v10;        // cx
    int v11;            // eax
    int v12;            // ecx
    double v13;         // st7
    float v14;          // [esp+0h] [ebp-28h]
    float v15;          // [esp+0h] [ebp-28h]
    float v16;          // [esp+14h] [ebp-14h]
    float v17;          // [esp+18h] [ebp-10h]
    float v18;          // [esp+18h] [ebp-10h]
    int v19[3];         // [esp+1Ch] [ebp-Ch] BYREF

    v2 = sub_1003BD50();
    *(float *)(this + 4188) =
        ((double)(v2 & 0x1FFF) * 0.000015258789 - *(float *)(this + 3620) * -0.001 - -1.0) *
            *(float *)&dword_106C2CFC +
        *(float *)(this + 4188);
    if (!(v4 | v5)) {
        v6 = (unsigned __int16)dword_10A99BA8;
        if ((_WORD)dword_10A99BA8) {
            v7 = *(float *)(this + 3620) * 0.001;
            v8 = 32 * (unsigned __int16)dword_10A99BA8;
            *(_DWORD *)(this + 4188) = 0;
            v9 = dword_10A99BB0;
            v17 = v7;
            v10 = word_10A99BD4[16 * v6];
            LOWORD(dword_10A99BB0) = v6;
            LOWORD(dword_10A99BA8) = v10;
            word_10A99BD4[v8 / 2] = v9;
            v14 = -1.5 - v17;
            sub_1003ACE0((int)&flt_10A99BC4[8 * v6], this, v14);
            sub_1003AEE0((float *)v19, (float *)(this + 240), (float *)this);
            sub_1003AFE0((int)v19, (int)v19, this + 32, 0.2);
            sub_1003AFE0((int)v19, (int)v19, this + 16, 0.2);
            v16 = (double)(unsigned __int16)sub_1003BD50() * 0.000015259022;
            sub_1003AEE0(&flt_10A99BB8[v8 / 4], (float *)(this + 4192), (float *)v19);
            v15 = v16 * v16;
            sub_1003AFE0((int)&flt_10A99BB8[v8 / 4], (int)v19, (int)&flt_10A99BB8[v8 / 4], v15);
            v11 = v19[1];
            v12 = v19[2];
            v13 = v17 * 0.1 - -1.0;
            *(_DWORD *)(this + 4192) = v19[0];
            *(_DWORD *)(this + 4196) = v11;
            *(_DWORD *)(this + 4200) = v12;
            v18 = v13;
            flt_10A99BD0[v8 / 4] = v13 * 0.15000001;
            byte_10A99BD6[v8] =
                (__int64)(1.0 / (sub_1003B170((float *)(this + 4132)) + v18) * 255.0);
            byte_10A99BD7[v8] = -1;
        }
    }
}
// 10039070: variable 'v4' is possibly undefined
// 10039070: variable 'v5' is possibly undefined
// 106C2CFC: using guessed type int dword_106C2CFC;
// 10A99BA8: using guessed type int dword_10A99BA8;
// 10A99BB0: using guessed type int dword_10A99BB0;
// 10A99BB8: using guessed type float flt_10A99BB8[];
// 10A99BC4: using guessed type float flt_10A99BC4[];
// 10A99BD0: using guessed type float flt_10A99BD0[];
// 10A99BD4: using guessed type __int16 word_10A99BD4[];
