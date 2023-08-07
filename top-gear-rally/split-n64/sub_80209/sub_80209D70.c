#include "../../types-n64.h"
//----- (80209D70) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_80209D70(unsigned int *a1, float *a2) {
    int *v3;           // $v0
    int *v4;           // $s1
    int *v5;           // $v0
    int v6;            // $v1
    unsigned int v7;   // $a0
    unsigned int v8;   // $s3
    unsigned int *v9;  // $s1
    __int16 v10;       // $v1
    unsigned int *v11; // $t8
    int v12;           // $t9
    int *v13;          // $s2
    __int16 v14;       // $v1
    __int64 result;    // $v1
    BOOL v16;          // [sp+64h] [-DCh]
    int v17;           // [sp+BCh] [-84h]

    dword_8028A858 = 8;
    MEMORY[0] = -1224736768;
    MEMORY[4] = 664069;
    v3 = sub_80255DD8();
    v4 = v3;
    sub_80261150(__SPAIR64__(&flt_8031AB50, (unsigned int)v3),
                 0.0,
                 -1.0,
                 15.0,
                 0.0,
                 0.0,
                 0.0,
                 0.0,
                 1.0,
                 0.0);
    dword_8028A858 = 8;
    MEMORY[4] = v4 + 4;
    MEMORY[0] = 58851344;
    v5 = sub_80255CD0();
    sub_80260ED0(a2, (int)v5);
    dword_8028A858 = 8;
    MEMORY[4] = 83886080;
    MEMORY[0] = -184549120;
    v6 = 0;
    v7 = *a1;
    do {
        v8 = 0;
        if (v7) {
            v16 = v6 == 0;
            v9 = a1;
            v17 = v6;
            do {
                v10 = *((_WORD *)v9 + 6);
                if (((v10 & 8) == 0) == v16) {
                    if (v9[2]) {
                        if ((v9[3] & 0x400) != 0) {
                            MEMORY[4] = 0;
                            dword_8028A858 = 8;
                            MEMORY[0] = -1140842486;
                            MEMORY[4] = dword_80271D9C[v9[3] & 3];
                            dword_8028A858 = 8;
                            MEMORY[0] = -1140841462;
                            MEMORY[4] = dword_80271D9C[v9[3] & 3];
                            v10 = *((_WORD *)v9 + 6);
                        }
                        if ((v10 & 4) != 0) {
                            dword_8028A858 = 8;
                            MEMORY[4] = 12288;
                            MEMORY[0] = -1241513984;
                            v12 = v9[3] & 0x80;
                        } else {
                            v12 = v10 & 0x80;
                        }
                        if (v12) {
                            dword_8028A858 = 8;
                            MEMORY[4] = 512;
                            MEMORY[0] = -1241513984;
                        }
                        dword_8028A858 = 8;
                        MEMORY[4] = 0;
                        MEMORY[0] = -402653184;
                        v13 = sub_80255CD0();
                        sub_80260E30((int)&flt_8031AB10, v9[4], v9[5], v9[6]);
                        sub_80260ED0(&flt_8031AB10, (int)v13);
                        dword_8028A858 = 8;
                        MEMORY[4] = 0;
                        MEMORY[0] = -1124073472;
                        v14 = *((_WORD *)v9 + 6);
                        if ((v14 & 0x80) != 0) {
                            dword_8028A858 = 8;
                            MEMORY[4] = 512;
                            MEMORY[0] = -1224736768;
                            v14 = *((_WORD *)v9 + 6);
                        }
                        if ((v14 & 4) != 0) {
                            dword_8028A858 = 8;
                            MEMORY[0] = -1224736768;
                            MEMORY[4] = 0x2000;
                            v14 = *((_WORD *)v9 + 6);
                        }
                        if ((v14 & 0x400) != 0) {
                            dword_8028A858 = 8;
                            MEMORY[0] = -1140841462;
                            MEMORY[4] = 1077952512;
                        }
                        v11 = a1;
                    } else {
                        v11 = a1;
                    }
                    v7 = *v11;
                    ++v8;
                } else {
                    ++v8;
                }
                v9 += 5;
            } while (v8 < v7);
            v6 = v17;
        }
        ++v6;
    } while (v6 != 2);
    result = 2LL;
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1124073472;
    return result;
}
// 80209DB0: write access to const memory at 8028A858 has been detected
// 80209DD0: write access to const memory at 8028A858 has been detected
// 8020A4E8: write access to const memory at 8028A858 has been detected
// 8020A464: write access to const memory at 8028A858 has been detected
// 8020A47C: write access to const memory at 8028A858 has been detected
// 8020A490: write access to const memory at 8028A858 has been detected
// 8020A4A4: write access to const memory at 8028A858 has been detected
// 8020A414: write access to const memory at 8028A858 has been detected
// 8020A3E8: write access to const memory at 8028A858 has been detected
// 8020A378: write access to const memory at 8028A858 has been detected
// 8020A390: write access to const memory at 8028A858 has been detected
// 8020A3B0: write access to const memory at 8028A858 has been detected
// 8020A310: write access to const memory at 8028A858 has been detected
// 8020A32C: write access to const memory at 8028A858 has been detected
// 8020A2F4: write access to const memory at 8028A858 has been detected
// 8020A2BC: write access to const memory at 8028A858 has been detected
// 8020A22C: write access to const memory at 8028A858 has been detected
// 8020A240: write access to const memory at 8028A858 has been detected
// 8020A254: write access to const memory at 8028A858 has been detected
// 8020A27C: write access to const memory at 8028A858 has been detected
// 8020A0EC: write access to const memory at 8028A858 has been detected
// 8020A108: write access to const memory at 8028A858 has been detected
// 8020A128: write access to const memory at 8028A858 has been detected
// 8020A144: write access to const memory at 8028A858 has been detected
// 8020A160: write access to const memory at 8028A858 has been detected
// 8020A17C: write access to const memory at 8028A858 has been detected
// 8020A19C: write access to const memory at 8028A858 has been detected
// 8020A09C: write access to const memory at 8028A858 has been detected
// 8020A0B8: write access to const memory at 8028A858 has been detected
// 80209E54: write access to const memory at 8028A858 has been detected
// 80209E78: write access to const memory at 8028A858 has been detected
// 80209E94: write access to const memory at 8028A858 has been detected
// 80209EB0: write access to const memory at 8028A858 has been detected
// 80209ECC: write access to const memory at 8028A858 has been detected
// 80209EE8: write access to const memory at 8028A858 has been detected
// 80209F14: write access to const memory at 8028A858 has been detected
// 80209F3C: write access to const memory at 8028A858 has been detected
// 80209F64: write access to const memory at 8028A858 has been detected
// 80209F78: write access to const memory at 8028A858 has been detected
// 80209F90: write access to const memory at 8028A858 has been detected
// 80209FA4: write access to const memory at 8028A858 has been detected
// 80209FB8: write access to const memory at 8028A858 has been detected
// 80209FD0: write access to const memory at 8028A858 has been detected
// 80209FF0: write access to const memory at 8028A858 has been detected
// 8020A00C: write access to const memory at 8028A858 has been detected
// 80209E30: write access to const memory at 8028A858 has been detected
// 80271D9C: using guessed type int dword_80271D9C[4];
// 8028A858: using guessed type int dword_8028A858;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
