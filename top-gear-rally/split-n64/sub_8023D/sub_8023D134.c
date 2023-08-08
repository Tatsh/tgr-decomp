#include "types-n64.h"
//----- (8023D134) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8023D134(int a1) {
    int v1;     // $ra
    float v2;   // $f18
    int result; // $v0
    int *v4;    // $s1
    float v5;   // $f0
    float v6;   // $f14
    float v7;   // $f16
    float v8;   // $f4
    float v9;   // $f14
    float v10;  // $f2
    float v11;  // $f12
    float v12;  // $f16
    int v13;    // $a3
    int v14;    // $t3
    float v15;  // [sp+48h] [-88h]
    int v16;    // [sp+A4h] [-2Ch]
    float v17;  // [sp+C0h] [-10h] BYREF
    float v18;  // [sp+C4h] [-Ch]
    float v19;  // [sp+C8h] [-8h]
    float v20;  // [sp+CCh] [-4h]

    v1 = -884975911;
    v2 = (float)-2141650302;
    result = a1;
    while (result) {
        v4 = &dword_80366A80[8 * result];
        v16 = v1;
        v15 = v2;
        sub_80224DDC(&v17, (float *)v4, (float *)dword_80368A80);
        v1 = v16;
        v2 = v15;
        if (v20 <= 0.001) {
            if (v20 >= -0.001) {
                result = *((unsigned __int16 *)v4 + 14);
                continue;
            }
            v5 = 1.0 / v20;
        } else {
            v5 = 1.0 / v20;
        }
        v6 = v19 * v5;
        v19 = v19 * v5;
        if (v19 < 1.0) {
            v19 = v6;
            if (v6 > -0.30000001) {
                v7 = v17 * v5;
                v8 = *((float *)v4 + 6);
                v17 = v7;
                v9 = v8 * (float)(4.0 * v5);
                v10 = v9 + 1.0;
                v11 = -(float)(v9 + 1.0);
                if (v7 > v11) {
                    v17 = v7;
                    if (v10 > v7) {
                        v12 = v18 * v5;
                        v18 = v12;
                        if (v12 > v11) {
                            v18 = v12;
                            if (v10 > v12) {
                                v13 = (int)(float)((float)(v15 * 0.75) * v9);
                                if (v13 <= 0)
                                    goto LABEL_23;
                                v14 = (int)(float)(v15 * v9);
                                if (v14 > 0) {
                                    dword_8028A858 = 8;
                                    MEMORY[0] = -1291845632;
                                    MEMORY[4] =
                                        ((129024 / v13) << 16) | (unsigned __int16)(-129024 / v14);
                                LABEL_23:
                                    result = *((unsigned __int16 *)v4 + 14);
                                    continue;
                                }
                                result = *((unsigned __int16 *)v4 + 14);
                            } else {
                                result = *((unsigned __int16 *)v4 + 14);
                            }
                        } else {
                            result = *((unsigned __int16 *)v4 + 14);
                        }
                    } else {
                        result = *((unsigned __int16 *)v4 + 14);
                    }
                } else {
                    result = *((unsigned __int16 *)v4 + 14);
                }
            } else {
                result = *((unsigned __int16 *)v4 + 14);
            }
        } else {
            result = *((unsigned __int16 *)v4 + 14);
        }
    }
    return result;
}
// 8023D6DC: write access to const memory at 8028A858 has been detected
// 8023D4F0: write access to const memory at 8028A858 has been detected
// 8023D360: write access to const memory at 8028A858 has been detected
// 8023D3B0: write access to const memory at 8028A858 has been detected
// 8023D414: write access to const memory at 8028A858 has been detected
// 8023D460: write access to const memory at 8028A858 has been detected
// 8023D518: conditional instruction was optimized away because of '$a3.4>=1'
// 8023D5B4: conditional instruction was optimized away because of '$a3.4>=1'
// 8023D5F8: conditional instruction was optimized away because of '$t3.4>=1'
// 8023D68C: conditional instruction was optimized away because of '$t3.4>=1'
// 8028A858: using guessed type int dword_8028A858;
// 8028A8A8: using guessed type int dword_8028A8A8;
// 8031B2C8: using guessed type int dword_8031B2C8;
// 8031B2CC: using guessed type int dword_8031B2CC;
// 8031B2D0: using guessed type int dword_8031B2D0;
// 8031B2D4: using guessed type int dword_8031B2D4;
// 80366A80: using guessed type int dword_80366A80[8];
// 80368A80: using guessed type int dword_80368A80[16];
