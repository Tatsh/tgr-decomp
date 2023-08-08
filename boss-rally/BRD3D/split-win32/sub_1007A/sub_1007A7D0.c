#include "types-win32.h"
//----- (1007A7D0) --------------------------------------------------------
gameSpecificUnk1 *__cdecl sub_1007A7D0(const void *a1) {
    gameSpecificUnk1 *v1; // ebx
    int v2;               // ebp
    int v3;               // edx

    v1 = gameSpecificUnk1_instance0;
    v2 = 0;
    if (!gameSpecificUnk1_instance0)
        return gameSpecificUnk1_instance0;
    while (1) {
        v3 = *(_DWORD *)&v1[816];
        if (!memcmp(a1, &v1[4], 0x10u))
            break;
        ++v2;
        v1 = *(gameSpecificUnk1 **)&v1[816];
        if (!v3)
            return gameSpecificUnk1_instance0;
    }
    dword_118AC238 = sub_1001A550((gameSpecificUnk1 *)a1);
    if (!dword_118AC238)
        return gameSpecificUnk1_instance0;
    dword_10AA2860 = v2;
    dword_10AA2A2C = v2;
    return v1;
}
// 10AA2860: using guessed type int dword_10AA2860;
// 10AA2A2C: using guessed type int dword_10AA2A2C;
