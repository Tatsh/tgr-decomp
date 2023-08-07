#include "../../types-n64.h"
//----- (8023BB50) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8023BB50() {
    int *v0;   // $t3
    int i;     // $s0
    int v2;    // $a3
    _WORD *v3; // $a2
    int v4;    // $t0
    _WORD *v5; // $s0
    int v6;    // $s2
    int v7;    // $s4
    int v8;    // $s5

    dword_8028A858 = 8;
    MEMORY[0] = -1157627903;
    MEMORY[4] = -1;
    v0 = dword_803239A0;
    for (i = 1805591161;; i = v0[24]) {
        v0 += 30;
        v2 = 0;
        if (i) {
            v3 = (_WORD *)(i + 6632);
            v4 = i + 4368;
            dword_8028A858 = 8;
            MEMORY[4] = i + 7560;
            MEMORY[0] = 17170496;
            do {
                v5 = v3;
                v6 = 0;
                dword_8028A858 = 8;
                MEMORY[4] = v4;
                MEMORY[0] = 67142143;
                do {
                    if (v5[3] || v5[4] || v5[5] || v5[15] || v5[16] || v5[17]) {
                        v7 = (unsigned __int8)(2 * v6 + 8) << 8;
                        dword_8028A858 = 8;
                        v8 = (unsigned __int8)(2 * v6 + 2);
                        MEMORY[0] = ((unsigned __int8)(2 * v6) << 16) | v7 | v8 | 0xB1000000;
                        MEMORY[4] = (v8 << 16) | v7 | (unsigned __int8)(2 * v6 + 10);
                        v6 += 4;
                    } else {
                        v6 += 4;
                    }
                    v5 += 12;
                } while (v6 != 28);
                v2 += 576;
                v3 += 108;
                v4 += 576;
            } while (v2 != 2304);
            dword_8028A858 = 8;
            MEMORY[4] = 0;
            MEMORY[0] = -1124073472;
        }
        if (v0 >= &dword_80323A0C[3])
            break;
    }
    dword_8028A858 = 8;
    MEMORY[4] = 0x2000;
    MEMORY[0] = -1224736768;
}
// 8023BBA8: write access to const memory at 8028A858 has been detected
// 8023BBC4: write access to const memory at 8028A858 has been detected
// 8023BBE0: write access to const memory at 8028A858 has been detected
// 8023BC04: write access to const memory at 8028A858 has been detected
// 8023BC28: write access to const memory at 8028A858 has been detected
// 8023BC44: write access to const memory at 8028A858 has been detected
// 8023BC64: write access to const memory at 8028A858 has been detected
// 8023BC90: write access to const memory at 8028A858 has been detected
// 8023BCAC: write access to const memory at 8028A858 has been detected
// 8023BCCC: write access to const memory at 8028A858 has been detected
// 8023BCE8: write access to const memory at 8028A858 has been detected
// 8023BD04: write access to const memory at 8028A858 has been detected
// 8023BD20: write access to const memory at 8028A858 has been detected
// 8023BD40: write access to const memory at 8028A858 has been detected
// 8023BD60: write access to const memory at 8028A858 has been detected
// 8023BD84: write access to const memory at 8028A858 has been detected
// 8023BF34: write access to const memory at 8028A858 has been detected
// 8023BEF4: write access to const memory at 8028A858 has been detected
// 8023BE8C: write access to const memory at 8028A858 has been detected
// 8023BE20: write access to const memory at 8028A858 has been detected
// 8023BE04: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028B940: using guessed type int dword_8028B940;
// 803239A0: using guessed type int dword_803239A0[24];
// 80323A0C: using guessed type int[512];
