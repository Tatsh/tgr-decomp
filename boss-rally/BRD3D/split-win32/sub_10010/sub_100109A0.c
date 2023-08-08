#include "../types-win32.h"
//----- (100109A0) --------------------------------------------------------
int *__cdecl sub_100109A0(int a1, double(__cdecl *a2)(_DWORD *)) {
    int *v3;     // ecx
    int **v4;    // ebx
    int v5;      // eax
    int *v6;     // esi
    int **v7;    // edi
    char v9;     // c0
    int *v10;    // eax
    int v11;     // eax
    int *v12;    // eax
    int *v13;    // eax
    int *v14;    // eax
    int *result; // eax
    int *v16;    // edx
    float v17;   // [esp+0h] [ebp-24h]
    float v18;   // [esp+0h] [ebp-24h]
    float v19;   // [esp+14h] [ebp-10h]
    float v20;   // [esp+18h] [ebp-Ch]
    int v21;     // [esp+1Ch] [ebp-8h]
    int *v22;    // [esp+20h] [ebp-4h]
    int *v23;    // [esp+28h] [ebp+4h]

    v3 = 0;
    v4 = *(int ***)a1;
    v5 = *(_DWORD *)(a1 + 4);
    v6 = **(int ***)a1;
    v7 = *(int ***)a1;
    v23 = 0;
    v21 = v5;
    if (v5 > 0) {
        while (1) {
            v22 = (int *)*v6;
            v20 = a2((_DWORD *)v6[1]);
            v19 = a2(v4[1]);
            if (v9) {
                v12 = *v7;
                if (v19 >= 0.0) {
                    if (v12)
                        *v7 = (int *)*v12;
                    *v6 = (int)v23;
                    v23 = v6;
                    v18 = v20 / (v20 - v19);
                    v13 = (int *)sub_10010B00((int)v6, (int)v4, v18);
                    *v13 = (int)*v7;
                    *v7 = v13;
                    v7 = (int **)v13;
                    goto LABEL_14;
                }
                if (v12)
                    *v7 = (int *)*v12;
                v14 = v23;
                v23 = v6;
                *v6 = (int)v14;
                v11 = *(_DWORD *)(a1 + 4) - 1;
            } else {
                if (v19 >= 0.0) {
                    v7 = (int **)v6;
                    goto LABEL_14;
                }
                v17 = v19 / (v19 - v20);
                v10 = (int *)sub_10010B00((int)v4, (int)v6, v17);
                *v10 = (int)*v7;
                *v7 = v10;
                v7 = (int **)v6;
                v11 = *(_DWORD *)(a1 + 4) + 1;
            }
            *(_DWORD *)(a1 + 4) = v11;
        LABEL_14:
            v4 = (int **)v6;
            v6 = v22;
            if (*(int *)(a1 + 4) >= 2 && --v21 > 0)
                continue;
            v3 = v23;
            break;
        }
    }
    *(_DWORD *)a1 = v6;
    result = v3;
    if (v3)
        v3 = (int *)*v3;
    if (result) {
        v16 = (int *)dword_102E5ECC;
        do {
            if (result >= dword_102E54C0 && result < &dword_102E5EC0) {
                *result = (int)v16;
                v16 = result;
                dword_102E5ECC = (int)result;
            }
            result = v3;
            if (v3)
                v3 = (int *)*v3;
        } while (result);
    }
    return result;
}
// 10010A06: variable 'v9' is possibly undefined
// 102E5EC0: using guessed type int dword_102E5EC0;
// 102E5ECC: using guessed type int dword_102E5ECC;
