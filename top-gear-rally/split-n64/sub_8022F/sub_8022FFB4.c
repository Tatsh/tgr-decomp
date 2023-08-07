#include "../../types-n64.h"
//----- (8022FFB4) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_8022FFB4(int a1) {
    int v1;    // $s6
    float *v2; // $s7
    int *v3;   // $s1
    int *v4;   // $v0

    v1 = 0;
    v2 = (float *)(a1 + 64);
    if (MEMORY[0xBC]) {
        do {
            dword_8028A858 = 8;
            MEMORY[4] = 0x100000;
            MEMORY[0] = -1174399998;
            if (*(_BYTE *)(a1 + 8291) == 2) {
                dword_8028A858 = 8;
                MEMORY[4] = -15207873;
                MEMORY[0] = -65896449;
            } else {
                dword_8028A858 = 8;
                MEMORY[0] = -1191181539;
                MEMORY[4] = 1122864;
            }
            sub_80260800((int)&flt_8031AB50,
                         COERCE_INT(0.0039215689),
                         COERCE_INT(0.0039215689),
                         COERCE_INT(0.0039215689));
            sub_80260940(&flt_8031AB50, v2, (int)dword_80351CC0);
            v3 = sub_80255CD0();
            sub_80260ED0((float *)dword_80351CC0, (int)v3);
            dword_8028A858 = 8;
            MEMORY[4] = v3;
            MEMORY[0] = 17170496;
            sub_80260940((float *)dword_80351CC0, &flt_8031AA50, (int)&flt_8031AB10);
            sub_802174B4(&flt_8031AB10);
            v4 = sub_80255CD0();
            sub_80260ED0(&flt_8031AB10, (int)v4);
            dword_8028A858 = 8;
            MEMORY[4] = 83886080;
            MEMORY[0] = -184549120;
            v1 += 64;
            v2 += 16;
            if (MEMORY[0xBC]) {
                dword_8028A858 = 8;
                MEMORY[0] = 100663296;
                MEMORY[4] = MEMORY[0xBC];
            }
            dword_8028A858 = 8;
            MEMORY[4] = 0;
            MEMORY[0] = -1124073472;
        } while (v1 != 256);
    }
}
// 80230390: write access to const memory at 8028A858 has been detected
// 8023036C: write access to const memory at 8028A858 has been detected
// 802301D8: write access to const memory at 8028A858 has been detected
// 802301FC: write access to const memory at 8028A858 has been detected
// 80230220: write access to const memory at 8028A858 has been detected
// 80230248: write access to const memory at 8028A858 has been detected
// 80230270: write access to const memory at 8028A858 has been detected
// 80230290: write access to const memory at 8028A858 has been detected
// 802302AC: write access to const memory at 8028A858 has been detected
// 802302C8: write access to const memory at 8028A858 has been detected
// 802302E4: write access to const memory at 8028A858 has been detected
// 80230300: write access to const memory at 8028A858 has been detected
// 80230188: write access to const memory at 8028A858 has been detected
// 80230098: write access to const memory at 8028A858 has been detected
// 802300C4: write access to const memory at 8028A858 has been detected
// 802300EC: write access to const memory at 8028A858 has been detected
// 8023010C: write access to const memory at 8028A858 has been detected
// 8023012C: write access to const memory at 8028A858 has been detected
// 80230040: write access to const memory at 8028A858 has been detected
// 8023005C: write access to const memory at 8028A858 has been detected
// 8028A858: using guessed type int dword_8028A858;
// 8028AA84: using guessed type int dword_8028AA84;
// 8028AB08: using guessed type int dword_8028AB08;
// 8031AA50: using guessed type float flt_8031AA50;
// 8031AB10: using guessed type float flt_8031AB10;
// 8031AB50: using guessed type float flt_8031AB50;
// 80351CC0: using guessed type int dword_80351CC0[16];
