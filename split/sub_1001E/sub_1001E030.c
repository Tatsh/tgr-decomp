//----- (1001E030) --------------------------------------------------------
int *__cdecl sub_1001E030(int a1) {
    int *v2;     // ecx
    int *v3;     // ebp
    int v4;      // esi
    int *v5;     // edi
    char v7;     // c0
    float *v8;   // eax
    int v9;      // eax
    int *v10;    // eax
    float *v11;  // eax
    int *result; // eax
    int *v13;    // ecx
    float v14;   // [esp+0h] [ebp-20h]
    float v15;   // [esp+0h] [ebp-20h]
    float v16;   // [esp+14h] [ebp-Ch]
    int v17;     // [esp+18h] [ebp-8h]
    int v18;     // [esp+1Ch] [ebp-4h]
    float v19;   // [esp+24h] [ebp+4h]

    v2 = *(int **)a1;
    v3 = 0;
    v4 = **(_DWORD **)a1;
    v5 = *(int **)a1;
    v17 = *(_DWORD *)(a1 + 4);
    if (v17 > 0) {
        while (1) {
            v16 = *(float *)(v4 + 24) - *(float *)(v4 + 12);
            v18 = *(_DWORD *)v4;
            v19 = *((float *)v2 + 6) - *((float *)v2 + 3);
            if (v7) {
                v10 = (int *)*v5;
                if (v19 >= 0.0) {
                    if (v10)
                        *v5 = *v10;
                    *(_DWORD *)v4 = v3;
                    v3 = (int *)v4;
                    v15 = v16 / (v16 - v19);
                    v11 = sub_1001D940(v4, (int)v2, v15);
                    *(_DWORD *)v11 = *v5;
                    *v5 = (int)v11;
                    v5 = (int *)v11;
                    goto LABEL_14;
                }
                if (v10)
                    *v5 = *v10;
                *(_DWORD *)v4 = v3;
                v3 = (int *)v4;
                v9 = *(_DWORD *)(a1 + 4) - 1;
            } else {
                if (v19 >= 0.0) {
                    v5 = (int *)v4;
                    goto LABEL_14;
                }
                v14 = v19 / (v19 - v16);
                v8 = sub_1001D940((int)v2, v4, v14);
                *(_DWORD *)v8 = *v5;
                *v5 = (int)v8;
                v5 = (int *)v4;
                v9 = *(_DWORD *)(a1 + 4) + 1;
            }
            *(_DWORD *)(a1 + 4) = v9;
        LABEL_14:
            v2 = (int *)v4;
            v4 = v18;
            if (*(int *)(a1 + 4) >= 2 && --v17 > 0)
                continue;
            break;
        }
    }
    *(_DWORD *)a1 = v4;
    result = v3;
    if (v3)
        v3 = (int *)*v3;
    if (result) {
        v13 = (int *)dword_104C0BBC;
        do {
            if (result >= dword_104C01A8 && result < (int *)&flt_104C0BA8) {
                *result = (int)v13;
                v13 = result;
                dword_104C0BBC = (int)result;
            }
            result = v3;
            if (v3)
                v3 = (int *)*v3;
        } while (result);
    }
    return result;
}
// 1001E089: variable 'v7' is possibly undefined
// 104C0BA8: using guessed type float flt_104C0BA8;
// 104C0BBC: using guessed type int dword_104C0BBC;
