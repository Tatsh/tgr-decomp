#include "../../types-win32.h"
//----- (1006AE20) --------------------------------------------------------
_DWORD *sub_1006AE20() {
    _DWORD *v0;     // eax
    int v1;         // edx
    _DWORD *result; // eax

    dword_117554C8[0] = 0;
    dword_117554A0 = 0;
    dword_117554CC = 0;
    dword_117554A4 = 0;
    dword_117554D0 = 0;
    dword_117554D8 = 0;
    v0 = &unk_1175033C;
    dword_117554D4 = 0;
    dword_117554DC = 0;
    do {
        v1 = 150;
        do {
            *(v0 - 1) = 0;
            *v0 = 0;
            v0[1] = 0;
            v0[2] = 0;
            v0[3] = 0;
            v0[4] = 0;
            v0[5] = 0;
            v0 += 8;
            --v1;
        } while (v1);
    } while ((int)v0 < (int)&dword_11754E3C);
    result = &unk_11754E54;
    do {
        *(result - 1) = 0;
        *result = 0;
        result += 2;
    } while ((int)result < (int)&dword_11755494);
    dword_11754E38 = 0;
    dword_117554E4 = 0;
    dword_117554E0 = 0;
    return result;
}
// 11754E38: using guessed type int dword_11754E38;
// 11755494: using guessed type int dword_11755494;
// 117554A0: using guessed type int dword_117554A0;
// 117554A4: using guessed type int dword_117554A4;
// 117554C8: using guessed type int dword_117554C8[];
// 117554CC: using guessed type int dword_117554CC;
// 117554D0: using guessed type int dword_117554D0;
// 117554D4: using guessed type int dword_117554D4;
// 117554D8: using guessed type int dword_117554D8;
// 117554DC: using guessed type int dword_117554DC;
// 117554E0: using guessed type int dword_117554E0;
// 117554E4: using guessed type int dword_117554E4;
