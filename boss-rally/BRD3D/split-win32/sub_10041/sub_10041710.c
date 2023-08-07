#include "../../types-win32.h"
//----- (10041710) --------------------------------------------------------
int __cdecl sub_10041710(int a1) {
    int result;      // eax
    int v2;          // edi
    char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

    memset(Buffer, 0, sizeof(Buffer));
    _itoa(dword_10AA28C4, Buffer, 10);
    result = 0;
    if (strlen(Buffer)) {
        strcpy((char *)(a1 + 11109), _strupr(Buffer));
        v2 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v2 + 8))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v2 + 44))(a1 + 11100);
        result = 1;
    }
    return result;
}
