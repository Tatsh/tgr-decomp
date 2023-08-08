#include "../types-win32.h"
//----- (1002A210) --------------------------------------------------------
int __cdecl sub_1002A210(_DWORD *a1) {
    int result; // eax

    result = *a1 & 0xFF00;
    if (result == 3584)
        return sub_1002A250((int)a1);
    if (result == 4352) {
        result = a1[1] == 0x40000;
        dword_1057544C = result;
    }
    return result;
}
// 1057544C: using guessed type int dword_1057544C;
