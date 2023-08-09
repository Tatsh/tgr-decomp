#include "types-win32.h"
//----- (100634F0) --------------------------------------------------------
enum MACRO_GAME_MODE __thiscall meth_100634F0(_DWORD *this) {
    int v2;                      // eax
    char v3;                     // cl
    char v4;                     // bl
    _DWORD *v5;                  // eax
    int v6;                      // ecx
    int v7;                      // eax
    enum MACRO_GAME_MODE result; // eax

    meth_10076C90((char *)this);
    v2 = ((char *)this - (char *)dword_10ACDEA8) / 11112;
    this[80] = v2;
    if (gGameMode != GAME_MODE_6) {
        v3 = byte_100B37D2[3 * v2];
        v4 = byte_100B37D0[3 * v2];
        *((_BYTE *)this + 10669) = byte_100B37D1[3 * v2];
        *((_BYTE *)this + 10668) = v4;
        *((_BYTE *)this + 10670) = v3;
    }
    if (v2 >= 2) {
        this[931] = 0;
    } else {
        v5 = (_DWORD *)((char *)&unk_10AF9890 + 332 * v2);
        this[931] = v5;
        *v5 = 0;
        *(_BYTE *)(this[931] + 4) = 0;
        *(_BYTE *)(this[931] + 5) = 0;
        *(_WORD *)(this[931] + 240) = 258;
        *(_WORD *)(this[931] + 242) = 4;
        *(_WORD *)(this[931] + 244) = 1;
        *(_DWORD *)(this[931] + 252) = 1;
        *(_DWORD *)(this[931] + 248) = 0;
        *(_DWORD *)(this[931] + 260) = 1;
        *(_DWORD *)(this[931] + 256) = 2;
        *(_DWORD *)(this[931] + 264) = 0;
        v6 = 0;
        *(_DWORD *)(this[931] + 264) = 5;
        if (dword_100AAB18 > 0) {
            v7 = 268;
            do {
                ++v6;
                *(_DWORD *)(this[931] + v7 - 92) = 0;
                *(_DWORD *)(this[931] + v7) = 0;
                v7 += 4;
            } while (v6 < dword_100AAB18);
        }
    }
    result = meth_10063420(this);
    this[930] = 0;
    return result;
}
// 100AAB18: using guessed type int dword_100AAB18;
