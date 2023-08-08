#include "../types-win32.h"
//----- (10042410) --------------------------------------------------------
int __cdecl sub_10042410(int a1) {
    int v1; // eax

    *(_DWORD *)(*(_DWORD *)(a1 + 10984) + 112) = 0;
    *(_DWORD *)(dword_10AA29D0 + 1080 * Value + 1100) =
        *(_DWORD *)(dword_10AA29D0 + 1080 * Value + 1100) == 0;
    v1 = dword_10AA29D0 + 1080 * Value;
    dword_10AA28D8 = *(_DWORD *)(v1 + 1100);
    if (dword_10AA28D8) {
        strcpy(byte_10A9D078, (const char *)(v1 + 53));
        strcpy((char *)(v1 + 53), String2);
    }
    return 1;
}
// 10AA28D8: using guessed type int dword_10AA28D8;
// 10AA29D0: using guessed type int dword_10AA29D0;
