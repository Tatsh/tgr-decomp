#include "../types-win32.h"
//----- (10003460) --------------------------------------------------------
unsigned int sub_10003460() {
    int v0; // eax

    v0 = sub_100750F0();
    return (v0 - dword_10220DD8) % 0x64u / 0x21 + 3 * ((v0 - dword_10220DD8) / 0x64u);
}
// 10220DD8: using guessed type int dword_10220DD8;
