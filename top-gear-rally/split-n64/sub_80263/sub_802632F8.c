#include "types-n64.h"
//----- (802632F8) --------------------------------------------------------
int __fastcall sub_802632F8(__int64 a1, int a2) {
    int result;           // $v0
    int v3;               // $t4
    int v4;               // [sp+1Ch] [-14h]
    unsigned __int8 v5;   // [sp+23h] [-Dh]
    int v6;               // [sp+24h] [-Ch]
    int v7;               // [sp+28h] [-8h]
    int v8;               // [sp+2Ch] [-4h]
    int v9;               // [sp+30h] [+0h]
    unsigned __int16 v10; // [sp+34h] [+4h]

    v10 = WORD2(a1);
    v9 = HIDWORD(a1);
    v6 = 0;
    v7 = ((int)BYTE5(a1) >> 2) + 32 * (BYTE4(a1) & 7);
    v5 = 0;
    if (!*(_BYTE *)(HIDWORD(a1) + 100))
        return v6;
    while (1) {
        v4 = v5 ? 1 : *(_DWORD *)(v9 + 96);
        if (v5 == HIBYTE(v10) || (*(unsigned __int8 *)(a2 + v7 + 257) & (1 << (v5 & 7))) != 0) {
            if (v5 != *(unsigned __int8 *)(a2 + 256)) {
                result = sub_8026A05C(v9, a2, 0, v5);
                if (result && result != 3)
                    return result;
                *(_BYTE *)(a2 + 256) = v5;
            }
            v8 = v4;
            if (v4 < 128) {
                do {
                    if (*(unsigned __int16 *)(a2 + 2 * v8) == v10)
                        ++v6;
                    v3 = ++v8;
                } while (v6 < 2 && v3 < 128);
            }
            if (v6 >= 2)
                break;
        }
        if (++v5 >= (int)*(unsigned __int8 *)(v9 + 100))
            return v6;
    }
    return 2;
}
// 8026342C: conditional instruction was optimized away because of '%var_C.4<2'
