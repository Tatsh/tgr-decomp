#include "types-n64.h"
//----- (80262660) --------------------------------------------------------
int __fastcall sub_80262660(int a1) {
    int result;  // $v0
    char *v2;    // [sp+18h] [-50h]
    int v3;      // [sp+1Ch] [-4Ch]
    char v4[32]; // [sp+20h] [-48h] BYREF
    char v5[28]; // [sp+40h] [-28h] BYREF
    __int16 v6;  // [sp+5Ch] [-Ch]
    __int16 v7;  // [sp+5Eh] [-Ah]
    __int16 v8;  // [sp+60h] [-8h] BYREF
    __int16 v9;  // [sp+62h] [-6h] BYREF
    int i;       // [sp+64h] [-4h]

    if (!*(_BYTE *)(a1 + 101) || (*(_BYTE *)(a1 + 101) = 0, (result = sub_8026A37C(a1)) == 0)) {
        result = sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 1, v5);
        if (!result) {
            sub_802696EC((int)v5, &v9, &v8);
            v2 = v5;
            if (v6 != v9 || v7 != v8) {
                v3 = sub_80269B6C(a1, (int)v5);
                if (v3 == 10) {
                    result = sub_80269754(a1, (int)v5, (int)v4);
                    if (result)
                        return result;
                    v2 = v4;
                } else if (v3) {
                    return v3;
                }
            }
            if ((*((_WORD *)v2 + 12) & 1) != 0)
                goto LABEL_15;
            result = sub_80269754(a1, (int)v2, (int)v4);
            if (result)
                return result;
            v2 = v4;
            if ((v4[25] & 1) != 0) {
            LABEL_15:
                for (i = 0; i < 32; ++i)
                    *(_BYTE *)(a1 + i + 12) = v2[i];
                *(_DWORD *)(a1 + 76) = (unsigned __int8)v2[27];
                *(_BYTE *)(a1 + 100) = v2[26];
                *(_DWORD *)(a1 + 96) = 2 * *(unsigned __int8 *)(a1 + 100) + 3;
                *(_DWORD *)(a1 + 80) = 16;
                *(_DWORD *)(a1 + 84) = 8;
                *(_DWORD *)(a1 + 88) = 8 * *(unsigned __int8 *)(a1 + 100) + 8;
                *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 88) + 8 * *(unsigned __int8 *)(a1 + 100);
                result =
                    sub_8026A3F0(*(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 7, (_BYTE *)(a1 + 44));
                if (!result)
                    result = 0;
            } else {
                result = 11;
            }
        }
    }
    return result;
}
