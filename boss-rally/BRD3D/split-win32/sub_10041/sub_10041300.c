#include "../../types-win32.h"
//----- (10041300) --------------------------------------------------------
int __cdecl sub_10041300(int a1) {
    int v1;         // eax
    int v2;         // esi
    const char *v3; // edi
    int result;     // eax
    char *v5;       // eax
    int v6;         // edi

    v1 = 0;
    if (dword_10AA289C)
        v1 = (char)dword_10AA28B8;
    v2 = 3 * v1;
    v3 = getCaptionString(*(&dword_100B3810 + 6 * v1));
    result = 0;
    if (strlen(v3)) {
        v5 = (char *)getCaptionString(*(&dword_100B3810 + 2 * v2));
        strcpy((char *)(a1 + 11109), _strupr(v5));
        v6 = *(_DWORD *)(a1 + 11100);
        (*(void(__thiscall **)(int))(v6 + 4))(a1 + 11100);
        if (a1 != -11109)
            (*(void(__thiscall **)(int))(v6 + 16))(a1 + 11100);
        result = 1;
    }
    return result;
}
// 10041300: using guessed type int __cdecl sub_10041300(int);
// 10AA289C: using guessed type int dword_10AA289C;
// 10AA28B8: using guessed type int dword_10AA28B8;
