//----- (1003563A) --------------------------------------------------------
void __cdecl sub_1003563A(int a1) {
    __int16 v1;   // cx
    float v2;     // [esp+0h] [ebp-64h]
    float v3;     // [esp+8h] [ebp-5Ch]
    float v4;     // [esp+10h] [ebp-54h]
    float v5;     // [esp+24h] [ebp-40h]
    float v6;     // [esp+24h] [ebp-40h]
    float v7;     // [esp+28h] [ebp-3Ch]
    float v8;     // [esp+28h] [ebp-3Ch]
    char *v9;     // [esp+2Ch] [ebp-38h]
    int j;        // [esp+30h] [ebp-34h]
    float k;      // [esp+30h] [ebp-34h]
    int v12;      // [esp+34h] [ebp-30h]
    int v13;      // [esp+38h] [ebp-2Ch]
    int v14;      // [esp+3Ch] [ebp-28h]
    float v15;    // [esp+40h] [ebp-24h]
    __int16 *v16; // [esp+44h] [ebp-20h]
    __int16 *v17; // [esp+48h] [ebp-1Ch]
    float *v18;   // [esp+4Ch] [ebp-18h]
    float *v19;   // [esp+50h] [ebp-14h]
    float *v20;   // [esp+54h] [ebp-10h]
    float v21;    // [esp+58h] [ebp-Ch]
    float v22;    // [esp+58h] [ebp-Ch]
    int i;        // [esp+5Ch] [ebp-8h]
    char *v24;    // [esp+60h] [ebp-4h]

    if (*(_DWORD *)(a1 + 4)) {
        v13 = **(_DWORD **)(a1 + 4);
        for (i = 0;; ++i) {
            if (i >= v13)
                return;
            v18 = *(float **)(*(_DWORD *)(a1 + 4) + 4 * i + 4);
            if (((_WORD)v18[4] & 4) != 0)
                break;
            v18[7] = v18[7] + *(float *)&dword_106C2CFC;
            v21 = v18[7];
            if (v21 >= (double)v18[5]) {
                if (v21 < (double)v18[6]) {
                    if (v21 < (double)v18[5])
                        continue;
                    goto LABEL_8;
                }
                if (((_WORD)v18[4] & 1) != 0) {
                    if (((_WORD)v18[4] & 2) != 0) {
                        v5 = (v18[6] - v18[5]) * 2.0;
                        v7 = v18[6] + v5;
                        while (v21 > (double)v7)
                            v21 = v21 - v5;
                        v6 = v5 * 0.5;
                        v8 = v7 - v6;
                        if (v21 <= (double)v8) {
                            v21 = 2.0 * v18[6] - v21;
                            v18[7] = v21;
                            v1 = *((_WORD *)v18 + 8);
                            LOBYTE(v1) = v1 | 4;
                            *((_WORD *)v18 + 8) = v1;
                            goto LABEL_36;
                        }
                    } else {
                        v6 = v18[6] - v18[5];
                        v8 = v18[6] + v6;
                    }
                    while (v21 > (double)v8)
                        v21 = v21 - v6;
                    v21 = v21 - (v18[6] - v18[5]);
                    v18[7] = v21;
                LABEL_36:
                    *((_WORD *)v18 + 9) = 0;
                LABEL_8:
                    for (j = *((unsigned __int16 *)v18 + 9);
                         j < *((_DWORD *)v18 + 3) && *(float *)LODWORD(v18[j + 8]) <= (double)v21;
                         ++j) {
                        ;
                    }
                    v19 = (float *)LODWORD(v18[j + 8]);
                    v20 = (float *)LODWORD(v18[j + 7]);
                    v22 = (v21 - *v20) / (*v19 - *v20);
                    goto LABEL_13;
                }
                v19 = (float *)LODWORD(v18[*((_DWORD *)v18 + 3) + 7]);
                v20 = v19;
                v22 = 0.0;
            } else {
                v19 = (float *)*((_DWORD *)v18 + 8);
                v20 = v19;
                v22 = 0.0;
            }
        LABEL_13:
            v14 = (__int64)(v22 * 4096.0);
            v15 = *v18;
            v17 = (__int16 *)(v20 + 1);
            v16 = (__int16 *)(v19 + 1);
            v9 = (char *)v20 + 6 * *(_DWORD *)v18 + 4;
            v24 = (char *)v19 + 6 * *(_DWORD *)v18 + 4;
            v12 = *((_DWORD *)v18 + 1);
            for (k = 0.0; SLODWORD(k) < SLODWORD(v15); ++LODWORD(k)) {
                *(float *)(v12 + 32 * LODWORD(k)) =
                    (float)(__int16)(*v17 + ((v14 * (*v16 - *v17)) >> 12));
                *(float *)(v12 + 32 * LODWORD(k) + 4) =
                    (float)(__int16)(v17[1] + ((v14 * (v16[1] - v17[1])) >> 12));
                *(float *)(v12 + 32 * LODWORD(k) + 8) =
                    (float)(__int16)(v17[2] + ((v14 * (v16[2] - v17[2])) >> 12));
                v4 = (float)(char)(*v9 + ((v14 * (*v24 - *v9)) >> 12));
                *(float *)(v12 + 32 * LODWORD(k) + 20) = v4 * 0.0078125;
                v3 = (float)(char)(v9[1] + ((v14 * (v24[1] - v9[1])) >> 12));
                *(float *)(v12 + 32 * LODWORD(k) + 24) = v3 * 0.0078125;
                v2 = (float)(char)(v9[2] + ((v14 * (v24[2] - v9[2])) >> 12));
                *(float *)(v12 + 32 * LODWORD(k) + 28) = v2 * 0.0078125;
                v17 += 3;
                v16 += 3;
                v9 += 3;
                v24 += 3;
            }
        LABEL_3:;
        }
        v18[7] = v18[7] - *(float *)&dword_106C2CFC;
        v21 = v18[7];
        if (v21 < (double)v18[5]) {
            if (((_WORD)v18[4] & 1) == 0)
                goto LABEL_3;
            v21 = 2.0 * v18[5] - v21;
            v18[7] = v21;
            *((_WORD *)v18 + 8) &= 0xFFFBu;
            *((_WORD *)v18 + 9) = 0;
        } else if (v21 >= (double)v18[6]) {
            goto LABEL_3;
        }
        goto LABEL_8;
    }
}
// 106C2CFC: using guessed type int dword_106C2CFC;
