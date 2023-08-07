#include "../../types-win32.h"
//----- (10028E00) --------------------------------------------------------
BOOL __cdecl sub_10028E00(LONG a1, char *a2) {
    LONG v2;     // ecx
    BOOL result; // eax
    int v4;      // esi
    LONG v5;     // [esp+0h] [ebp-4h] BYREF

    v5 = v2;
    result = a1;
    if (a1 != dword_105553E4) {
        v4 = 696 * a1;
        sub_10028720(&v5,
                     &a1,
                     *((_DWORD *)dword_1057543C + 174 * a1 + 8),
                     *((_DWORD *)dword_1057543C + 174 * a1 + 9));
        result =
            meth_10009ED0(*((void **)Block + *(_DWORD *)((char *)dword_1057543C + v4)), a2, v5, a1);
    }
    return result;
}
// 10028E00: variable 'v2' is possibly undefined
// 105553E4: using guessed type int dword_105553E4;
