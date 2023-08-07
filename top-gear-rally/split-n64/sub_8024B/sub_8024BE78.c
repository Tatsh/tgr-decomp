#include "../../types-n64.h"
//----- (8024BE78) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8024BE78() {
    double v0; // $f12
    float v1;  // $f2
    BOOL v2;   // $v0
    float v3;  // $f2

    v0 = 0.0;
    if (COERCE_FLOAT(-2143332071) < 0.0)
        v1 = -COERCE_FLOAT(-2143332071);
    else
        v1 = COERCE_FLOAT(-2143332071);
    if (v1 < 0.050000001) {
        dword_8028D12C = 245;
    } else {
        v2 = sub_8024D3F0(&dword_8028DB94);
        v0 = 0.0;
        if (v2)
            dword_8028D12C = (int)(float)(COERCE_FLOAT(-2143332071) * 6.0) + 244;
        else
            dword_8028D12C = (int)(float)(COERCE_FLOAT(-2143332071) * 12.0) + 244;
    }
    if (v0 > 0.023030501)
        v3 = -0.023030501;
    else
        v3 = 0.023030501;
    if (v3 < 0.050000001) {
        dword_8028D130 = 273;
    } else if (sub_8024D3F0(&dword_8028DB94)) {
        dword_8028D130 = 272 - (int)(float)(0.023030501 * 6.0);
    } else {
        dword_8028D130 = 272 - (int)(float)(0.023030501 * 12.0);
    }
    return 272;
}
// 8024BF70: write access to const memory at 8028D12C has been detected
// 8024BFB4: write access to const memory at 8028D12C has been detected
// 8024BFD8: write access to const memory at 8028D12C has been detected
// 8024BFF4: write access to const memory at 8028D12C has been detected
// 8024C160: write access to const memory at 8028D130 has been detected
// 8024C170: write access to const memory at 8028D130 has been detected
// 8024C138: write access to const memory at 8028D12C has been detected
// 8024C148: write access to const memory at 8028D12C has been detected
// 8024C10C: write access to const memory at 8028D130 has been detected
// 8024C120: write access to const memory at 8028D130 has been detected
// 8024C0B0: write access to const memory at 8028D130 has been detected
// 8024C0EC: write access to const memory at 8028D130 has been detected
// 8024C12C: conditional instruction was optimized away because of '$v0.4==F4'
// 8024C140: conditional instruction was optimized away because of '$v0.4==F4'
// 8024C168: conditional instruction was optimized away because of '$v0.4==110'
// 8028D12C: using guessed type int dword_8028D12C;
// 8028D130: using guessed type int dword_8028D130;
// 8028DB94: using guessed type int dword_8028DB94;
// 8028DBC4: using guessed type char byte_8028DBC4;
// 8036A8E0: using guessed type int dword_8036A8E0[];
// 8036A8F8: using guessed type float flt_8036A8F8;
// 8036A8FC: using guessed type int dword_8036A8FC[3];
