#include "../../types-win32.h"
//----- (1005B0D0) --------------------------------------------------------
void __usercall sub_1005B0D0(int a1 @<ecx>, int a2 @<esi>) {
    char v2;    // dl
    __int16 v3; // bp
    int v4;     // ebx
    int i;      // edi
    __int16 v6; // ax
    int v7;     // eax
    __int16 v8; // ax

    v2 = *(_BYTE *)(a1 + 9);
    v3 = *(_WORD *)(a1 + 1036);
    v4 = 0;
    for (i = 0; v2; v2 = *(_BYTE *)((__int16)++i + a1 + 9)) {
        v6 = v2 - 32;
        if ((v6 < 0 || v6 > 127) && v2 != 32)
            break;
        if (v2 < 33 || v2 == 127 ||
            (v7 = 6 * v6, LOWORD(a2) = word_100AC6E4[v7], (_WORD)a2 == 0xFFFF) ||
            (v8 = word_100AC6E6[v7], v8 == -1)) {
            if (v2 == 32)
                v4 += 6;
        } else {
            v4 += a2;
            if (v3 < v8)
                v3 = v8;
        }
    }
    *(_WORD *)(a1 + 1036) = v3;
    *(_WORD *)(a1 + 1034) = v4;
}
// 100AC6E4: using guessed type __int16 word_100AC6E4[];
// 100AC6E6: using guessed type __int16 word_100AC6E6[];
