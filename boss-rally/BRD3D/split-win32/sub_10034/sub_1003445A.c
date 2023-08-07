#include "../../types-win32.h"
//----- (1003445A) --------------------------------------------------------
int __cdecl sub_1003445A(int a1) {
    int result; // eax
    __int16 v2; // cx
    BOOL v3;    // [esp+0h] [ebp-8h]

    dword_106C666C = 0;
    v3 = g_chosenTrack != 2 && g_chosenTrack != 8;
    if ((*(_WORD *)(a1 + 76) & 4) == 0)
        dword_106C666C = v3;
    result = sub_100341B3(*(_DWORD **)(a1 + 68), (int)&unk_100AA8D8);
    if (result) {
        result = a1;
        v2 = *(_WORD *)(a1 + 76);
        LOBYTE(v2) = v2 | 8;
        *(_WORD *)(a1 + 76) = v2;
    }
    return result;
}
// 100B380C: using guessed type int g_chosenTrack;
// 106C666C: using guessed type int dword_106C666C;
