#include "types-win32.h"
//----- (10017290) --------------------------------------------------------
_DWORD *__cdecl sub_10017290(int a1) {
    _DWORD *result; // eax
    int v2;         // ebx
    int v3;         // esi
    int v4;         // edi
    LPCSTR v5;      // eax
    LPCSTR v6;      // eax
    LPCSTR v7;      // eax
    LPCSTR v8;      // eax
    float v9;       // [esp-Ch] [ebp-18h]
    float v10;      // [esp-Ch] [ebp-18h]
    float v11;      // [esp-Ch] [ebp-18h]
    float v12;      // [esp-Ch] [ebp-18h]
    int v13;        // [esp-8h] [ebp-14h]
    int v14;        // [esp-4h] [ebp-10h]

    result = (_DWORD *)dword_100BD3EC;
    if (dword_100BD3EC) {
        v2 = gWidth - 16;
        v3 = dword_100AA8B4 != 1 ? 0 : 30;
        v4 = *(_DWORD *)(a1 + 88 * *(_DWORD *)&gUnk06594.gap1C8[8640] + 4) + 20;
        sub_10019260();
        Set_byte_104B035C_To1();
        sub_100192F0(15);
        result = (_DWORD *)gGameMode;
        switch (gGameMode) {
        case GAME_MODE_0:
        case GAME_MODE_1:
        case GAME_MODE_2:
        case GAME_MODE_6:
            if (dword_100AA8B4 == 1) {
                v9 = *(float *)(dword_106C2CF8 + 4076);
                v5 = text_GetStringWithIndex(0xE7u);
                sub_100171F0((int)v5, (int)aWw, v9, v2, v4);
            }
            if (*(_DWORD *)(dword_106C2CF8 + 4008) < dword_100BD3E0) {
                v14 = v4 + v3;
                v13 = v2;
                v11 = *(float *)(dword_106C2CF8 + 4016);
                goto LABEL_11;
            }
            v10 = *(float *)(dword_106C2CF8 + 4068);
            v6 = text_GetStringWithIndex(0xE8u);
            result = sub_100171F0((int)v6, (int)aWw, v10, v2, v4 + v3);
            break;
        case GAME_MODE_3:
            if (dword_100AA8B4 == 1) {
                v12 = *(float *)(dword_106C2CF8 + 4068);
                v7 = text_GetStringWithIndex(0xE8u);
                sub_100171F0((int)v7, (int)aWw, v12, v2, v4);
            }
            v14 = v4 + v3;
            v13 = v2;
            v11 = *(float *)(dword_106C2CF8 + 4016);
        LABEL_11:
            v8 = text_GetStringWithIndex(0xE9u);
            result = sub_100171F0((int)v8, (int)aWw, v11, v13, v14);
            break;
        default:
            return result;
        }
    }
    return result;
}
// 100A81C0: using guessed type int gWidth;
// 100AA8B4: using guessed type int dword_100AA8B4;
// 100BD3EC: using guessed type int dword_100BD3EC;
// 106C2CF8: using guessed type int dword_106C2CF8;
