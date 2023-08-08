#include "types-n64.h"
//----- (8021AA08) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
void sub_8021AA08() {
    dword_8028A858 = 8;
    MEMORY[4] = 0;
    MEMORY[0] = -1207959552;
    dword_8031A9A8[0] = 1;
    dword_8031A9A8[4] = (int)sub_8026EAD0;
    dword_8031A9A8[6] = (int)&dword_802ABC00;
    dword_8031A9A8[1] = 6;
    dword_8031A9A8[10] = (int)dword_803B1000;
    dword_8031A9A8[5] = 4096;
    dword_8031A9A8[11] = (int)dword_803C8000;
    dword_8031A9A8[7] = 2048;
    dword_8031A9A8[8] = (unsigned int)&byte_8031A5A7 & 0xFFFFFFF0;
    dword_8031A9A8[9] = 1024;
    dword_8031A9A8[2] = (int)sub_8026EA00;
    dword_8031A9A8[3] = (char *)sub_8026EAD0 - (char *)sub_8026EA00;
    dword_8031A9A8[12] = 512;
    dword_8031A9A8[13] = -512;
    dword_8028AB70 = -64;
    sub_802649C0();
    dword_8028AB80 = 1;
    sub_8022D7E0(0, 200, 0, 200, 255);
    dword_8028AA24 = 0;
    sub_8022D7E0(2, 200, 0, 0, 255);
    sub_8022D7E0(1, 200, 100, 0, 255);
    sub_80264C7C((int)dword_8031A9A8);
    sub_80264E0C();
    dword_8028A85C = 1;
}
// 8021ACA4: write access to const memory at 8031B31C has been detected
// 8021ADF8: write access to const memory at 8031B31C has been detected
// 8021AE10: write access to const memory at 8028AAE8 has been detected
// 8021AE34: write access to const memory at 8028AAE0 has been detected
// 8021AEE0: write access to const memory at 8028A854 has been detected
// 8021B00C: write access to const memory at 8028AAE4 has been detected
// 8021B024: write access to const memory at 8028AAE8 has been detected
// 8021B02C: write access to const memory at 8028AB80 has been detected
// 8021B074: write access to const memory at 8028AA24 has been detected
// 8021B0B8: write access to const memory at 8028A85C has been detected
// 8021AA20: write access to const memory at 8028A858 has been detected
// 8021AA40: write access to const memory at 8028A858 has been detected
// 8021AA84: write access to const memory at 8031A9A8 has been detected
// 8021AA88: write access to const memory at 8031A9B8 has been detected
// 8021AA8C: write access to const memory at 8031A9C0 has been detected
// 8021AA90: write access to const memory at 8031A9AC has been detected
// 8021AAA0: write access to const memory at 8031A9D0 has been detected
// 8021AAAC: write access to const memory at 8031A9BC has been detected
// 8021AAD0: write access to const memory at 8031A9D4 has been detected
// 8021AAD4: write access to const memory at 8031A9C4 has been detected
// 8021AAF0: write access to const memory at 8031A9C8 has been detected
// 8021AAF4: write access to const memory at 8031A9CC has been detected
// 8021AAF8: write access to const memory at 8031A9B0 has been detected
// 8021AAFC: write access to const memory at 8031A9B4 has been detected
// 8021AB2C: write access to const memory at 8031A9D8 has been detected
// 8021AB5C: write access to const memory at 8031A9DC has been detected
// 8021AC0C: write access to const memory at 8028AB70 has been detected
// 8026EA00: using guessed type int sub_8026EA00();
// 8026EAD0: using guessed type int sub_8026EAD0();
// 8028A848: using guessed type int dword_8028A848;
// 8028A84C: using guessed type int dword_8028A84C;
// 8028A850: using guessed type int dword_8028A850;
// 8028A854: using guessed type int dword_8028A854;
// 8028A858: using guessed type int dword_8028A858;
// 8028A85C: using guessed type int dword_8028A85C;
// 8028A884: using guessed type int dword_8028A884;
// 8028A888: using guessed type int dword_8028A888;
// 8028AA24: using guessed type int dword_8028AA24;
// 8028AA94: using guessed type int dword_8028AA94;
// 8028AAE0: using guessed type int dword_8028AAE0;
// 8028AAE4: using guessed type int dword_8028AAE4;
// 8028AAE8: using guessed type int dword_8028AAE8;
// 8028AB70: using guessed type int dword_8028AB70;
// 8028AB80: using guessed type int dword_8028AB80;
// 8028C75C: using guessed type int dword_8028C75C;
// 8028C760: using guessed type int dword_8028C760;
// 8028C764: using guessed type int dword_8028C764;
// 8028C768: using guessed type int dword_8028C768;
// 802ABC00: using guessed type int dword_802ABC00;
// 8031A5A7: using guessed type char;
// 8031A9A8: using guessed type int dword_8031A9A8[32];
// 8031AA2C: using guessed type int dword_8031AA2C;
// 8031B31C: using guessed type int dword_8031B31C;
// 803B1000: using guessed type int dword_803B1000[244];
// 803C8000: using guessed type int dword_803C8000[512];
