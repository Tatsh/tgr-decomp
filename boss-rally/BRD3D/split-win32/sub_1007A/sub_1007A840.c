#include "types-win32.h"
//----- (1007A840) --------------------------------------------------------
int sub_1007A840() {
    GUID *v0;    // eax
    int result;  // eax
# 485 * v2;      // esi
    int v3;      // edi
# 485 * v4;      // ebx
    CHAR v5[80]; // [esp+10h] [ebp-50h] BYREF

    if (gUnk00334Ptr1)
        v0 = getDirectDrawLPGUID((#485 *)gUnk00334Ptr1);
    else
        v0 = 0;
    result = (int)sub_1001A550((#485 *)v0);
    gUnk00334Ptr1 = (_BYTE *)result;
    if (result) {
        v2 = gameSpecificUnk1_instance0;
        v3 = 0;
        if (gameSpecificUnk1_instance0) {
            do {
                v4 = *(#485 **)&v2[816];
                if ((*(_BYTE *)v2 & 2) != 0) {
                    wsprintfA(v5, "%s (Primary)", *(const char **)&v2[20]);
                    dword_10AA2860 = v3;
                    dword_10AA2A2C = v3;
                } else {
                    wsprintfA(v5, "%s", *(const char **)&v2[20]);
                }
                if (dword_10AA29F0) {
                    (*(void(__thiscall **)(int, CHAR *, _DWORD, int, void *, int))(
                        *(_DWORD *)(dword_10AA29F0 + 14392) + 16))(
                        dword_10AA29F0 + 14392, v5, 0, 1, &unk_100AB528, 1);
                    (*(void(__thiscall **)(int, #485 *, int, int))(
                        *(_DWORD *)(dword_10AA29F0 + 14392) + 40))(
                        dword_10AA29F0 + 14392, v2 + 4, 16, v3);
                }
                ++v3;
                v2 = v4;
            } while (v4);
        }
        gUnk00334Ptr1 = sub_1007A7D0(&dword_10B4E6F8);
        result = 1;
    }
    return result;
}
// 10AA2860: using guessed type int dword_10AA2860;
// 10AA29F0: using guessed type int dword_10AA29F0;
// 10AA2A2C: using guessed type int dword_10AA2A2C;
// 10B4E6F8: using guessed type int dword_10B4E6F8;
