#include "../../types-n64.h"
//----- (8025F18C) --------------------------------------------------------
// write access to const memory has been detected, the output may be wrong!
int __fastcall sub_8025F18C(float a1, float a2) {
    int v2;                  // $t6
    unsigned int v3;         // $a2
    int *v4;                 // $a1
    __int16 *v5;             // $v0
    int v6;                  // $t2
    int v7;                  // $a0
    int v8;                  // $t3
    int v9;                  // $t7
    int v10;                 // $t0
    int v11;                 // $t3
    int result;              // $v0
    __int16 v13;             // $s2
    int *v14;                // $s0
    int v15;                 // $v0
    int v16;                 // $v0
    int i;                   // $t6
    int v18;                 // $a0
    float *v19;              // $t6
    float *v20;              // $t9
    char v21;                // $t8
    float *v22;              // $v0
    float v23;               // $f6
    float v24;               // $f8
    int v25;                 // [sp+34h] [-4Ch]
    float v26;               // [sp+48h] [-38h]
    float v27;               // [sp+4Ch] [-34h]
    float v28;               // [sp+50h] [-30h]
    float v29;               // [sp+54h] [-2Ch]
    float v30;               // [sp+58h] [-28h]
    float v31;               // [sp+5Ch] [-24h]
    unsigned __int16 v32[8]; // [sp+68h] [-18h] BYREF
    int v33;                 // [sp+78h] [-8h]

    v2 = (int)a1;
    dword_8037EAA0 = 1774195273;
    v3 = 0x40000000;
    v4 = &dword_8037EA90;
    v5 = &word_8037EA80;
    v6 = v33;
    v7 = 0;
    v8 = (int)a2 >> 5;
    if ((int)a2 < 0)
        v8 = ((int)a2 + 31) >> 5;
    v9 = v2 >> 5;
    if (v2 < 0)
        v9 = (v2 + 31) >> 5;
    v10 = (__int16)(((_WORD)v8 << 6) + v9);
    do {
        v11 = (unsigned __int16)*v5++;
        if (v10 == v11) {
            result = (__int16)v7;
            *v4 = 1774195272;
            return result;
        }
        if (*v4 < v3) {
            v6 = v7;
            v3 = *v4;
        }
        ++v7;
        ++v4;
    } while (v7 != 4);
    *(_DWORD *)(4 * v6 - 2143819120) = 1774195272;
    *(_WORD *)(2 * v6 - 2143819136) = v10;
    v13 = 0;
    v14 = &dword_80379F80[1200 * v6];
    v25 = 2 * v6;
    v33 = v6;
    v15 = sub_8021E620(a1, a2);
    v32[1] = HIWORD(v15);
    v32[0] = v15;
    if (v15) {
        v16 = sub_8021EA90(v32);
        if (v16) {
            for (i = MEMORY[0x80025C0C];; i = MEMORY[0x80025C0C]) {
                v18 = 8 * (unsigned __int16)v16;
                v14[4] = MEMORY[0x80025C14] + 12 * *(unsigned __int16 *)(v18 + i);
                v14[5] =
                    MEMORY[0x80025C14] + 12 * *(unsigned __int16 *)(v18 + MEMORY[0x80025C0C] + 2);
                v14[6] =
                    MEMORY[0x80025C14] + 12 * *(unsigned __int16 *)(v18 + MEMORY[0x80025C0C] + 4);
                v19 = (float *)v14[4];
                v20 = (float *)v14[5];
                v21 = *(_BYTE *)((unsigned __int16)v16 + MEMORY[0x80025C94]);
                *((_WORD *)v14 + 14) = v16;
                *((_BYTE *)v14 + 30) = v21 & 7;
                v29 = *v20 - *v19;
                v30 = *(float *)(v14[5] + 4) - *(float *)(v14[4] + 4);
                v31 = *(float *)(v14[5] + 8) - *(float *)(v14[4] + 8);
                v26 = *(float *)v14[6] - *(float *)v14[4];
                v27 = *(float *)(v14[6] + 4) - *(float *)(v14[4] + 4);
                v28 = *(float *)(v14[6] + 8) - *(float *)(v14[4] + 8);
                *(float *)v14 = (float)(v30 * v28) - (float)(v27 * v31);
                *((float *)v14 + 1) = (float)(v31 * v26) - (float)(v28 * v29);
                *((float *)v14 + 2) = (float)(v29 * v27) - (float)(v26 * v30);
                sub_802581CC((float *)v14);
                v22 = (float *)v14[4];
                v23 = *((float *)v14 + 1);
                ++v13;
                v24 = *(float *)v14 * *v22;
                v14 += 8;
                *((float *)v14 - 5) = -(float)((float)(v22[2] * *((float *)v14 - 6)) +
                                               (float)(v24 + (float)(v23 * v22[1])));
                v16 = sub_8021EA90(v32);
                if (!v16)
                    break;
            }
        }
    }
    result = (__int16)v33;
    *(_WORD *)(v25 - 2143819128) = v13;
    return result;
}
// 8025F1B4: write access to const memory at 8037EAA0 has been detected
// 80379F80: using guessed type int dword_80379F80[512];
// 8037EA80: using guessed type __int16 word_8037EA80;
// 8037EA90: using guessed type int dword_8037EA90;
// 8037EAA0: using guessed type int dword_8037EAA0;
