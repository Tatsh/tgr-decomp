#include "types-win32.h"
//----- (10041970) --------------------------------------------------------
int __cdecl sub_10041970(int a1) {
    sub_100419D0(asc_100AD300);
    gGameMode = GAME_MODE_4;
    if (dword_10AA2A40) {
        dword_106805B8 = 2;
        dword_10AA289C = 0;
    } else {
        dword_106805B8 = 1;
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 0x2AE8) + 0x68) = 0;
    (*(void(__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x2AE8) + 24))(
        *(_DWORD *)(a1 + 0x2AE8), 0);
    return 0;
}
// 106805B8: using guessed type int dword_106805B8;
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA2A40: using guessed type int dword_10AA2A40;
