#include "types-win32.h"
//----- (1002A5A0) --------------------------------------------------------
int sub_1002A5A0() {
    int result; // eax

    if (dword_11829844 <= (unsigned int)dword_11829848 || gD3DAlwaysSquareTextures) {
        dword_100B8C90 = 2;
        dword_100A7DFC = 64;
        dword_100A7E00 = 64;
        result = 32;
        dword_100A7E04 = 32;
        dword_100A7E08 = 32;
    } else {
        if ((unsigned int)gTotalPhys <= 0x2000000) {
            result = 256;
            dword_100B8C90 = 1;
        } else {
            dword_100B8C90 = (unsigned int)dword_11829844 < 0x3D0900;
            result = 256;
        }
        dword_100A7DFC = 256;
        dword_100A7E00 = 256;
        dword_100A7E04 = 256;
        dword_100A7E08 = 256;
    }
    return result;
}
// 100A7DFC: using guessed type int dword_100A7DFC;
// 100A7E00: using guessed type int dword_100A7E00;
// 100A7E04: using guessed type int dword_100A7E04;
// 100A7E08: using guessed type int dword_100A7E08;
// 100B8C90: using guessed type int dword_100B8C90;
// 1022B348: using guessed type int g_dwTotalPhys;
// 10575420: using guessed type int g_D3dalwayssquar;
// 11829844: using guessed type int dword_11829844;
// 11829848: using guessed type int dword_11829848;
