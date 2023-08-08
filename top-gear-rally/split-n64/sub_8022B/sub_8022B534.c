#include "types-n64.h"
//----- (8022B534) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8022B534() {
    int v0;   // $v1
    float v1; // [sp+4Ch] [-14h] BYREF
    float v2; // [sp+50h] [-10h] BYREF
    int v3;   // [sp+54h] [-Ch] BYREF
    float v4; // [sp+58h] [-8h]

    if ((MEMORY[0xC710271C] & 1) == 0) {
        dword_8028B7EC = -1;
        dword_8028B7D8 = -1;
        dword_8028B7E8 = 0;
        v4 = 0.0 * sub_8022B0F8(&flt_8028B7A0, &flt_8028B7AC, (float *)0x30, &flt_8028B7C0);
        sub_8022B1D4(&flt_8028B7A0, 0, &v2, &v1, &v3, 0);
        v3 = 0;
        dword_8028B7E8 = 1;
        sub_80257B78(3, 0, 0, -1);
        if (!MEMORY[0x72328048]) {
            HIDWORD(qword_802A4970) = sub_80266A08((float)(v4 * 0.000090909089) * 4294967300.0);
            LODWORD(qword_802A4970) = v0;
            dword_802A497C = ((int)(float)((float)((int)(float)((float)v3 * v2) << 16) +
                                           (float)(v1 * (float)v3)) >>
                              1) &
                             0x7FFF7FFF;
        }
        flt_8028B7AC = 0.0;
        flt_8028B7B0 = 0.0;
        flt_8028B7B4 = 0.0;
        flt_8028B7C0 = MEMORY[0x30];
        flt_8028B7C4 = MEMORY[0x34];
        flt_8028B7C8 = MEMORY[0x38];
        dword_8028B7D8 = 0;
        dword_8028B7BC = 0;
        dword_8028B7D0 = 0;
    }
}
// 8022B80C: write access to const memory at 802A497C has been detected
// 8022B594: write access to const memory at 8028B7D8 has been detected
// 8022B59C: write access to const memory at 8028B7E8 has been detected
// 8022B79C: write access to const memory at 802A4970 has been detected
// 8022B7A0: write access to const memory at 802A4974 has been detected
// 8022B934: write access to const memory at 8028B7D8 has been detected
// 8022B938: write access to const memory at 8028B7BC has been detected
// 8022B93C: write access to const memory at 8028B7D0 has been detected
// 8022B91C: write access to const memory at 8028B7E8 has been detected
// 8022B92C: write access to const memory at 802A497C has been detected
// 8022B8E4: write access to const memory at 8028B7AC has been detected
// 8022B8E8: write access to const memory at 8028B7B0 has been detected
// 8022B8EC: write access to const memory at 8028B7B4 has been detected
// 8022B8FC: write access to const memory at 8028B7C0 has been detected
// 8022B908: write access to const memory at 8028B7C4 has been detected
// 8022B914: write access to const memory at 8028B7C8 has been detected
// 8022B6E4: write access to const memory at 8028B7E8 has been detected
// 8022B5C4: write access to const memory at 802A497C has been detected
// 8022B5C8: write access to const memory at 802A4978 has been detected
// 8022B5CC: write access to const memory at 802A4970 has been detected
// 8022B5D0: write access to const memory at 802A4974 has been detected
// 8022B590: write access to const memory at 8028B7EC has been detected
// 8022B584: conditional instruction was optimized away because of '$t3.4==0'
// 8022B5E8: conditional instruction was optimized away because of '$t1.4==0'
// 8022B7A0: variable 'v0' is possibly undefined
// 8028B7A0: using guessed type float flt_8028B7A0;
// 8028B7A4: using guessed type float flt_8028B7A4;
// 8028B7A8: using guessed type float flt_8028B7A8;
// 8028B7AC: using guessed type float flt_8028B7AC;
// 8028B7B0: using guessed type float flt_8028B7B0;
// 8028B7B4: using guessed type float flt_8028B7B4;
// 8028B7B8: using guessed type int dword_8028B7B8;
// 8028B7BC: using guessed type int dword_8028B7BC;
// 8028B7C0: using guessed type float flt_8028B7C0;
// 8028B7C4: using guessed type float flt_8028B7C4;
// 8028B7C8: using guessed type float flt_8028B7C8;
// 8028B7CC: using guessed type int dword_8028B7CC;
// 8028B7D0: using guessed type int dword_8028B7D0;
// 8028B7D4: using guessed type int dword_8028B7D4;
// 8028B7D8: using guessed type int dword_8028B7D8;
// 8028B7E4: using guessed type int dword_8028B7E4;
// 8028B7E8: using guessed type int dword_8028B7E8;
// 8028B7EC: using guessed type int dword_8028B7EC;
// 8028BC04: using guessed type int dword_8028BC04[];
// 802A4970: using guessed type __int64 qword_802A4970;
// 802A4978: using guessed type int dword_802A4978;
// 802A497C: using guessed type int dword_802A497C;
// 8031B2D8: using guessed type int dword_8031B2D8;
