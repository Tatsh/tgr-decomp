#include "../types-win32.h"
//----- (1002B670) --------------------------------------------------------
__int64 sub_1002B670() {
    char v1;        // c0
    bool v2;        // c0
    bool v3;        // c3
    int v4;         // eax
    int v5;         // esi
    int v6;         // edi
    int v7;         // edx
    int v8;         // eax
    int v9;         // eax
    char v11;       // c0
    char v13;       // c0
    __int64 result; // rax

    if (dword_10575524) {
        dword_10575524 = 0;
    } else if (*(float *)&dword_10575518 != *(float *)&dword_10575510) {
        *(float *)&dword_10575518 =
            flt_10575514 * *(float *)&dword_106C2CFC + *(float *)&dword_10575518;
        if (v1) {
            if (*(float *)&dword_10575518 < (double)*(float *)&dword_10575510)
                dword_10575518 = dword_10575510;
        } else if (*(float *)&dword_10575518 >= (double)*(float *)&dword_10575510) {
            dword_10575518 = dword_10575510;
            if (dword_10575530) {
                flt_10575514 = -flt_10575514;
                dword_10575510 = 0;
                dword_10575530 = 0;
            }
        }
    }
    v2 = flt_10575514 < 0.0;
    v3 = flt_10575514 == 0.0;
    v4 = dword_106C65EC;
    v5 = dword_10575508;
    v6 = dword_10575500;
    v7 = g_Height1;
    dword_105754F0[dword_106C65EC] = dword_10575508;
    dword_105754E8[v4] = v6;
    dword_1057550C = 0;
    dword_105754FC = v7;
    if (!v2 && !v3) {
        dword_10575508 = 0;
        v8 = (__int64)((double)g_Width1 * *(float *)&dword_10575518) + 3;
        LOBYTE(v8) = v8 & 0xFC;
    LABEL_16:
        dword_10575500 = v8;
        goto LABEL_17;
    }
    if (flt_10575514 >= 0.0) {
        v8 = g_Width1;
        dword_10575508 = 0;
        goto LABEL_16;
    }
    v9 = g_Width1 - (__int64)((double)g_Width1 * *(float *)&dword_10575518) - v5 + 3;
    LOBYTE(v9) = v9 & 0xFC;
    dword_10575508 = v9 + v5;
    dword_10575500 = v9 + v6;
    if (v9 + v6 > g_Width1)
        dword_10575500 = g_Width1;
LABEL_17:
    if (dword_1057552C) {
        dword_1057552C = 0;
    } else if (flt_100A81B8 != *(float *)&dword_100A81B4) {
        flt_100A81B8 = flt_10575520 * *(float *)&dword_106C2CFC + flt_100A81B8;
        if (v11) {
            if (flt_100A81B8 < (double)*(float *)&dword_100A81B4)
                LODWORD(flt_100A81B8) = dword_100A81B4;
        } else if (flt_100A81B8 > (double)*(float *)&dword_100A81B4) {
            LODWORD(flt_100A81B8) = dword_100A81B4;
        }
    }
    byte_100BBAE4 = (__int64)(flt_100A81B8 * 255.0);
    if (dword_10575528) {
        dword_10575528 = 0;
    } else if (flt_100A81B0 != *(float *)&dword_100A81AC) {
        flt_100A81B0 = flt_1057551C * *(float *)&dword_106C2CFC + flt_100A81B0;
        if (v13) {
            if (flt_100A81B0 < (double)*(float *)&dword_100A81AC)
                LODWORD(flt_100A81B0) = dword_100A81AC;
        } else if (flt_100A81B0 > (double)*(float *)&dword_100A81AC) {
            LODWORD(flt_100A81B0) = dword_100A81AC;
        }
    }
    result = (__int64)(flt_100A81B0 * 255.0);
    byte_100BBADC = result;
    return result;
}
// 1002B6D2: variable 'v1' is possibly undefined
// 100A81AC: using guessed type int dword_100A81AC;
// 100A81B0: using guessed type float flt_100A81B0;
// 100A81B4: using guessed type int dword_100A81B4;
// 100A81B8: using guessed type float flt_100A81B8;
// 100BBADC: using guessed type char byte_100BBADC;
// 100BBAE4: using guessed type char byte_100BBAE4;
// 105754E8: using guessed type int dword_105754E8[];
// 105754F0: using guessed type int dword_105754F0[];
// 105754FC: using guessed type int dword_105754FC;
// 10575500: using guessed type int dword_10575500;
// 10575508: using guessed type int dword_10575508;
// 1057550C: using guessed type int dword_1057550C;
// 10575510: using guessed type int dword_10575510;
// 10575514: using guessed type float flt_10575514;
// 10575518: using guessed type int dword_10575518;
// 1057551C: using guessed type float flt_1057551C;
// 10575520: using guessed type float flt_10575520;
// 10575524: using guessed type int dword_10575524;
// 10575528: using guessed type int dword_10575528;
// 1057552C: using guessed type int dword_1057552C;
// 10575530: using guessed type int dword_10575530;
// 106C0684: using guessed type int g_Width1;
// 106C299C: using guessed type int g_Height1;
// 106C2CFC: using guessed type int dword_106C2CFC;
// 106C65EC: using guessed type int dword_106C65EC;
