#include "../../types-win32.h"
//----- (1003E2C0) --------------------------------------------------------
unk1 *sub_1003E2C0() {
    int v0;       // ebx
    int v1;       // esi
    int v2;       // edi
    unk1 *result; // eax

    v0 = dword_10B4E6F0;
    v1 = dword_10B4E6E8;
    v2 = dword_10B4E6EC;
    dword_118AC238 = sub_1001A550((gameSpecificUnk1 *)&dword_10B4E6F8);
    result = meth_1001A570(dword_118AC238, v1, v2, v0, 0, (IID *)dword_118AC23C);
    dword_118AC240 = (int)result;
    return result;
}
// 10B4E6E8: using guessed type int dword_10B4E6E8;
// 10B4E6EC: using guessed type int dword_10B4E6EC;
// 10B4E6F0: using guessed type int dword_10B4E6F0;
// 10B4E6F8: using guessed type int dword_10B4E6F8;
// 118AC23C: using guessed type int dword_118AC23C;
// 118AC240: using guessed type int dword_118AC240;