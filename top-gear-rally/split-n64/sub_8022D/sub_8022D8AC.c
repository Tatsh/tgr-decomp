#include "types-n64.h"
//----- (8022D8AC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_8022D8AC() {
    int i;      // $s0
    int *v1;    // $v1
    int *v2;    // $a0
    int result; // $v0
    int v4;     // $s0

    for (i = 0; i < 3; ++i)
        sub_8022D7E0(i, 255, 0, 255, 127);
    dword_8028BDA0 = 1;
    dword_8028BDAC = sub_802649F0();
    dword_8028BDA8 = 0;
    v1 = dword_803519B0;
    v2 = dword_8034E9B0;
    result = 3;
    v4 = 0;
    do {
        ++v4;
        ++v1;
        v2 += 512;
        *(v1 - 1) = 0;
        *(v2 - 511) = 0;
    } while (v4 != 3);
    return result;
}
// 8022D924: write access to const memory at 8028BDAC has been detected
// 8022D93C: write access to const memory at 8028BDA8 has been detected
// 8022D8FC: write access to const memory at 8028BDA0 has been detected
// 8028BDA0: using guessed type int dword_8028BDA0;
// 8028BDA8: using guessed type int dword_8028BDA8;
// 8028BDAC: using guessed type int dword_8028BDAC;
// 8034E9B0: using guessed type int dword_8034E9B0[512];
// 803519B0: using guessed type int dword_803519B0[6];
