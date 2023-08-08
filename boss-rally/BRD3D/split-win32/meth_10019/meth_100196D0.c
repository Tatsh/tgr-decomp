#include "../types-win32.h"
//----- (100196D0) --------------------------------------------------------
int __thiscall meth_100196D0(void *this) {
    void *v1;        // ecx
    int v2;          // esi
    int result;      // eax
    int v4;          // ecx
    double v5;       // st6
    double v6;       // st5
    double v7;       // st7
    long double v8;  // st7
    long double v9;  // st4
    long double v10; // st5
    double v11;      // st7
    int v12;         // edx
    int v13;         // eax
    int v14;         // ebx
    int v15;         // edi
    int v16;         // ebp
    _WORD *v17;      // esi
    bool v18;        // cc
    float v19;       // [esp+0h] [ebp-60h]
    float v20;       // [esp+14h] [ebp-4Ch]
    float v21;       // [esp+14h] [ebp-4Ch]
    int v22;         // [esp+14h] [ebp-4Ch]
    float v23;       // [esp+18h] [ebp-48h]
    int v24;         // [esp+18h] [ebp-48h]
    float v25;       // [esp+1Ch] [ebp-44h]
    int v26;         // [esp+1Ch] [ebp-44h]
    _WORD *v27;      // [esp+20h] [ebp-40h]
    int *v28;        // [esp+24h] [ebp-3Ch]
    float v29;       // [esp+28h] [ebp-38h]
    int v30;         // [esp+28h] [ebp-38h]
    float v31;       // [esp+2Ch] [ebp-34h]
    float v32;       // [esp+30h] [ebp-30h]
    int v33;         // [esp+34h] [ebp-2Ch]
    int v34;         // [esp+38h] [ebp-28h]
    int v35;         // [esp+44h] [ebp-1Ch]
    int v36;         // [esp+48h] [ebp-18h] BYREF
    int v37;         // [esp+4Ch] [ebp-14h]
    int v38;         // [esp+50h] [ebp-10h]
    int v39[3];      // [esp+54h] [ebp-Ch] BYREF

    meth_100194E0(this);
    v2 = 0;
    if (dword_106C6624)
        meth_10019620(v1);
    result = 512 / dword_100AA8B4;
    v33 = 0;
    dword_104B2550 = 512 / dword_100AA8B4;
    if (dword_100AA8B4 > 0) {
        v28 = dword_10AD05DC;
        v27 = &unk_104B2572;
        v34 = 0;
        do {
            sub_1003AFE0((int)&v36, *v28 + 48, *v28, 3.0);
            if (!dword_104BBE14) {
                sub_10019490();
                dword_104B0688 = v36;
                dword_104B068C = v37;
                dword_104B0690 = v38;
                dword_104B0694 = v36;
                dword_104B0698 = v37;
                dword_104B069C = v38;
                dword_104BBE14 = 1;
            }
            v4 = dword_106C6620;
            if (!dword_106C6620) {
                result = dword_106C6624;
                if (!dword_106C6624)
                    break;
            }
            v5 = *(float *)&v37 - *(float *)((char *)&dword_104B068C + v2);
            v6 = *(float *)&v36 - *(float *)((char *)&dword_104B0688 + v2);
            v7 = *(float *)&v38 - *(float *)((char *)&dword_104B0690 + v2);
            v23 = v6;
            v25 = v5;
            v20 = v7;
            v8 = sqrt(v6 * v23 + v5 * v25 + v7 * v20) / *(float *)&dword_106C2CFC;
            flt_104BBDE8 = v8;
            if (v8 <= 0.27777779) {
                flt_104B1F00 = 1.0;
            } else {
                v9 = sqrt(flt_104BBDE8 * 3.5999999) * 0.27777779 / flt_104BBDE8;
                flt_104B1F00 = v9;
                flt_104BBDE8 = v9 * flt_104BBDE8;
                v23 = v23 * flt_104B1F00;
                v25 = v25 * flt_104B1F00;
                v20 = v20 * flt_104B1F00;
            }
            if (dword_106C6620) {
                v21 = v20 - *(float *)&dword_106C2CFC * -0.5;
            } else {
                *(float *)v39 = v23;
                *(float *)&v39[1] = v25;
                *(float *)&v39[2] = v20;
                v29 = *(float *)&dword_106C2CFC + *(float *)&dword_106C2CFC;
                v10 = sin(*(float *)&dword_104BBE0C) * flt_100A79C8 * *(float *)&dword_106C2CFC;
                v11 = flt_104B1F00 * 0.5;
                *(float *)((char *)&unk_104BBDF0 + v2) =
                    cos(*(float *)&dword_104BBE0C) * flt_100A79C8 * *(float *)&dword_106C2CFC;
                *(float *)((char *)&flt_104BBDF4 + v2) = v10;
                *(float *)((char *)&flt_104BBDF8 + v2) = v29;
                v19 = v11;
                v23 = v23 + *(float *)((char *)&unk_104BBDF0 + v2);
                v25 = v25 + *(float *)((char *)&flt_104BBDF4 + v2);
                v21 = v20 + v29;
                sub_1003AD10((int)v39, v19);
                sub_1003AF70((float *)((char *)&unk_104BBDF0 + v2), (float *)v39);
                v4 = dword_106C6620;
            }
            if (v4) {
                v31 = ((double)(unsigned __int16)sub_1003BD50() * 0.000030518044 - 1.0) *
                      *(float *)&dword_106C2CFC * 0.25;
                v32 = ((double)(unsigned __int16)sub_1003BD50() * 0.000030518044 - 1.0) *
                      *(float *)&dword_106C2CFC * 0.25;
            } else {
                v32 = 0.0;
                v31 = 0.0;
            }
            v12 = v37;
            v13 = v38;
            *(int *)((char *)&dword_104B0688 + v2) = v36;
            *(int *)((char *)&dword_104B068C + v2) = v12;
            *(int *)((char *)&dword_104B0690 + v2) = v13;
            v14 = sub_1003BD50() & 0xF;
            v15 = sub_1003BD50() & 0xF;
            v30 = (__int64)(v23 * 16383.5);
            v24 = (__int64)(v25 * 16383.5);
            v35 = (__int64)(v21 * 16383.5);
            v26 = (__int64)(v31 * 16383.5);
            v16 = (__int64)(v32 * 16383.5);
            v22 = 0;
            if (dword_104B2550 > 0) {
                v17 = v27;
                do {
                    if (v14) {
                        *(v17 - 1) += v30;
                        --v14;
                    } else {
                        *(v17 - 1) += v26 + v30;
                        v26 = -v26;
                        v14 = sub_1003BD50() & 0xF;
                    }
                    if (v15) {
                        *v17 += v24;
                        --v15;
                    } else {
                        *v17 += v16 + v24;
                        v16 = -v16;
                        v15 = sub_1003BD50() & 0xF;
                    }
                    v17[1] += v35;
                    v17 += 3;
                    ++v22;
                } while (v22 < dword_104B2550);
                v2 = v34;
            }
            result = v33 + 1;
            v2 += 12;
            v18 = ++v33 < dword_100AA8B4;
            v27 += 1566;
            v28 += 2778;
            v34 = v2;
        } while (v18);
    }
    return result;
}
// 100196E7: variable 'v1' is possibly undefined
// 100A79C8: using guessed type float flt_100A79C8;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 104B0688: using guessed type int dword_104B0688;
// 104B068C: using guessed type int dword_104B068C;
// 104B0690: using guessed type int dword_104B0690;
// 104B0694: using guessed type int dword_104B0694;
// 104B0698: using guessed type int dword_104B0698;
// 104B069C: using guessed type int dword_104B069C;
// 104B1F00: using guessed type float flt_104B1F00;
// 104B2550: using guessed type int dword_104B2550;
// 104BBDE8: using guessed type float flt_104BBDE8;
// 104BBDF4: using guessed type float flt_104BBDF4;
// 104BBDF8: using guessed type float flt_104BBDF8;
// 104BBE0C: using guessed type int dword_104BBE0C;
// 104BBE14: using guessed type int dword_104BBE14;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C6620: using guessed type int dword_106C6620;
// 106C6624: using guessed type int dword_106C6624;
// 10AD05DC: using guessed type int dword_10AD05DC[];
