#include "types-n64.h"
//----- (80245B00) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_80245B00(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8) {
    int v8;      // $v0
    int v9;      // $a0
    __int16 v10; // $t0
    int v11;     // $a0
    int v12;     // $t6
    int v13;     // $t6
    int result;  // $v0
    int v15;     // [sp+E4h] [-14h]
    int v16;     // [sp+E8h] [-10h] BYREF
    int v17;     // [sp+ECh] [-Ch] BYREF
    int v18;     // [sp+F0h] [-8h] BYREF
    int v19;     // [sp+F4h] [-4h] BYREF
    int v23;     // [sp+110h] [+18h]
    int v24;     // [sp+114h] [+1Ch]

    v8 = 0;
    if (a7 < 0) {
        a7 = -a7;
        v8 = 1;
    }
    v15 = v8;
    sub_80217614(a3, &v17, &v19);
    sub_80217614(a4, &v16, &v18);
    dword_8028A858 = 8;
    MEMORY[0] = -1174402046;
    MEMORY[4] = 0;
    v9 = *(unsigned __int8 *)(a1 + 12);
    switch (v9) {
    case 4:
        if ((int *)a1 == &dword_8028CB40) {
            MEMORY[0] = -63924127;
            dword_8028A858 = 8;
            MEMORY[4] = 252329984;
        } else {
            MEMORY[0] = -50331649;
            dword_8028A858 = 8;
            MEMORY[4] = 5259840;
        }
        dword_8028A858 = 8;
        MEMORY[0] = -234881024;
        v10 = a4 - 1;
        MEMORY[4] = (((4 * (a3 - 1)) & 0xFFF) << 12) | (4 * (a4 - 1)) & 0xFFF;
        break;
    case 8:
        if (*(_BYTE *)(a1 + 44) == 99) {
            dword_8028A858 = 8;
            MEMORY[4] = -3079;
            MEMORY[0] = -65929693;
        } else {
            dword_8028A858 = 8;
            MEMORY[4] = -200071;
            MEMORY[0] = -50331649;
        }
        dword_8028A858 = 8;
        MEMORY[0] = -234881024;
        v10 = a4 - 1;
        MEMORY[4] = (((4 * (a3 - 1)) & 0xFFF) << 12) | (4 * (a4 - 1)) & 0xFFF;
        break;
    case 16:
        dword_8028A858 = 8;
        MEMORY[0] = -234881024;
        v10 = a4 - 1;
        MEMORY[4] = (((4 * (a3 - 1)) & 0xFFF) << 12) | (4 * (a4 - 1)) & 0xFFF;
        break;
    default:
        v10 = a4 - 1;
        break;
    }
    v23 = a7 >> 1;
    v24 = a8 >> 1;
    v11 = 0;
    MEMORY[4] = (((4 * (a5 >> 1)) & 0xFFF) << 12) | (4 * (a6 >> 1)) & 0xFFF;
    dword_8028A858 = 8;
    MEMORY[0] = -1275068416;
    if (v15)
        v11 = 32 * (a3 - 1);
    MEMORY[4] = (v11 << 16) | (unsigned __int16)(32 * v10);
    dword_8028A858 = 8;
    MEMORY[0] = -1291845632;
    if (v15) {
        if (!v23)
            __break(7u, 0);
        if (v23 == -1 && a3 << 10 == 0x80000400)
            __break(6u, 0);
        v12 = a4;
    } else {
        if (!v23)
            __break(7u, 0);
        if (v23 == -1 && a3 << 10 == -2147482624)
            __break(6u, 0);
        v12 = a4;
    }
    v13 = 1024 - (v12 << 10);
    if (!v24)
        __break(7u, 0);
    if (v24 == -1 && v13 == 0x80000000)
        __break(6u, 0);
    result = 0;
    dword_8028A858 = 8;
    MEMORY[4] = 0x80000;
    MEMORY[0] = -1174400255;
    return result;
}
// 80245B6C: write access to const memory at 8028A858 has been detected
// 80245B8C: write access to const memory at 8028A858 has been detected
// 80245BA8: write access to const memory at 8028A858 has been detected
// 80245BDC: write access to const memory at 8028A858 has been detected
// 802465B8: write access to const memory at 8028A858 has been detected
// 802465D0: write access to const memory at 8028A858 has been detected
// 802464CC: write access to const memory at 8028A858 has been detected
// 802463D0: write access to const memory at 8028A858 has been detected
// 8024641C: write access to const memory at 8028A858 has been detected
// 80246438: write access to const memory at 8028A858 has been detected
// 80246484: write access to const memory at 8028A858 has been detected
// 80246350: write access to const memory at 8028A858 has been detected
// 8024636C: write access to const memory at 8028A858 has been detected
// 802462AC: write access to const memory at 8028A858 has been detected
// 802462CC: write access to const memory at 8028A858 has been detected
// 80246310: write access to const memory at 8028A858 has been detected
// 80246114: write access to const memory at 8028A858 has been detected
// 80246138: write access to const memory at 8028A858 has been detected
// 80246164: write access to const memory at 8028A858 has been detected
// 80246190: write access to const memory at 8028A858 has been detected
// 802461D4: write access to const memory at 8028A858 has been detected
// 802461E8: write access to const memory at 8028A858 has been detected
// 80246050: write access to const memory at 8028A858 has been detected
// 80246070: write access to const memory at 8028A858 has been detected
// 802460B8: write access to const memory at 8028A858 has been detected
// 80245F00: write access to const memory at 8028A858 has been detected
// 80245F24: write access to const memory at 8028A858 has been detected
// 80245F44: write access to const memory at 8028A858 has been detected
// 80245F80: write access to const memory at 8028A858 has been detected
// 80245F94: write access to const memory at 8028A858 has been detected
// 80245EC0: write access to const memory at 8028A858 has been detected
// 80245EE4: write access to const memory at 8028A858 has been detected
// 80245DFC: write access to const memory at 8028A858 has been detected
// 80245E1C: write access to const memory at 8028A858 has been detected
// 80245E68: write access to const memory at 8028A858 has been detected
// 80245CCC: write access to const memory at 8028A858 has been detected
// 80245CEC: write access to const memory at 8028A858 has been detected
// 80245D28: write access to const memory at 8028A858 has been detected
// 80245D3C: write access to const memory at 8028A858 has been detected
// 80245C3C: write access to const memory at 8028A858 has been detected
// 80245C60: write access to const memory at 8028A858 has been detected
// 80245C88: write access to const memory at 8028A858 has been detected
// 80245CA8: write access to const memory at 8028A858 has been detected
// 80245DA8: conditional instruction was optimized away because of '$a0.4>=1'
// 80245DB8: conditional instruction was optimized away because of '$a0.4>=1'
// 80246008: conditional instruction was optimized away because of '$a0.4>=1'
// 80246018: conditional instruction was optimized away because of '$a0.4>=1'
// 80246254: conditional instruction was optimized away because of '$a0.4>=1'
// 80246264: conditional instruction was optimized away because of '$a0.4>=1'
// 8028A858: using guessed type int dword_8028A858;
// 8028CB40: using guessed type int dword_8028CB40;
