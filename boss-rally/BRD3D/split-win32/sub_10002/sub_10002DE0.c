#include "../types-win32.h"
//----- (10002DE0) --------------------------------------------------------
int __cdecl sub_10002DE0(float a1, float a2) {
    unsigned __int16 v2; // si

    if (a1 < 0.0 || a1 >= 2048.0 || a2 < 0.0 || a2 >= 2048.0)
        return 0;
    v2 = (unsigned __int8)(__int64)(a1 * 0.03125) + ((unsigned __int8)(__int64)(a2 * 0.03125) << 6);
    return *(unsigned __int16 *)(dword_106C7C6C + 2 * v2) |
           ((0xFFFF * *(unsigned __int16 *)(dword_106C7C6C + 2 * v2) +
             *(unsigned __int16 *)(dword_106C7C6C + 2 * (unsigned __int16)(v2 + 1)))
            << 16);
}
// 106C7C6C: using guessed type int dword_106C7C6C;
