#include "../../types-n64.h"
//----- (80233FDC) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int sub_80233FDC() {
    int result; // $v0

    result = 0;
    dword_8028C75C = (int)dword_80353580;
    dword_8028C760 = (int)dword_80353580;
    dword_8028C764 = (int)dword_803554C0;
    dword_8028C768 = (int)dword_803554C0;
    return result;
}
// 8023402C: write access to const memory at 8028C760 has been detected
// 8023404C: write access to const memory at 8028C768 has been detected
// 80234018: write access to const memory at 8028C75C has been detected
// 80234040: write access to const memory at 8028C764 has been detected
// 8028C75C: using guessed type int dword_8028C75C;
// 8028C760: using guessed type int dword_8028C760;
// 8028C764: using guessed type int dword_8028C764;
// 8028C768: using guessed type int dword_8028C768;
// 80353580: using guessed type int dword_80353580[512];
// 803554C0: using guessed type int dword_803554C0[512];
