#include "../../types-n64.h"
//----- (80226100) --------------------------------------------------------
int __fastcall sub_80226100(char *a1) {
    int v1;     // $t7
    int *v2;    // $v0
    int v3;     // $v1
    int v4;     // $v0
    int i;      // $t7
    int result; // $v0

    sub_802207A4((int)a1);
    v1 = (a1 - (char *)dword_8031B760) / 8336;
    *((_DWORD *)a1 + 80) = v1;
    if (v1 >= 2) {
        *((_DWORD *)a1 + 919) = 0;
    } else {
        v2 = &dword_80324300[74 * v1];
        *((_DWORD *)a1 + 919) = v2;
        *v2 = 0;
        *(_BYTE *)(*((_DWORD *)a1 + 919) + 4) = 0;
        *(_WORD *)(*((_DWORD *)a1 + 919) + 30) = 0;
        *(_BYTE *)(*((_DWORD *)a1 + 919) + 5) = 0;
        v3 = 0;
        *(_WORD *)(*((_DWORD *)a1 + 919) + 204) = 258;
        *(_WORD *)(*((_DWORD *)a1 + 919) + 206) = 4;
        *(_WORD *)(*((_DWORD *)a1 + 919) + 208) = 1;
        *(_DWORD *)(*((_DWORD *)a1 + 919) + 216) = 1;
        *(_DWORD *)(*((_DWORD *)a1 + 919) + 212) = 0;
        *(_DWORD *)(*((_DWORD *)a1 + 919) + 224) = 1;
        *(_DWORD *)(*((_DWORD *)a1 + 919) + 220) = 2;
        *(_DWORD *)(*((_DWORD *)a1 + 919) + 228) = 0;
        v4 = 0;
        for (i = *((_DWORD *)a1 + 919);; i = *((_DWORD *)a1 + 919)) {
            ++v3;
            *(float *)(i + v4 + 140) = 0.0;
            *(float *)(*((_DWORD *)a1 + 919) + v4 + 232) = 0.0;
            v4 += 4;
            if (v3 >= 10)
                break;
        }
    }
    result = sub_80225F88((int)a1);
    *((_DWORD *)a1 + 918) = 0;
    return result;
}
// 8031B760: using guessed type int dword_8031B760[512];
// 80324300: using guessed type int dword_80324300[148];
