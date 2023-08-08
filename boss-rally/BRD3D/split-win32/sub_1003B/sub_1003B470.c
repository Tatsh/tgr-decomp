#include "types-win32.h"
//----- (1003B470) --------------------------------------------------------
int __cdecl sub_1003B470(char *a1, float *a2, float *a3) {
    float *v3;    // ebx
    char *v4;     // esi
    float *v5;    // edi
    float *v6;    // esi
    int v7;       // ebp
    float *v8;    // ecx
    double v9;    // st7
    float *v10;   // eax
    int v11;      // edx
    double v12;   // st6
    int result;   // eax
    char *i;      // [esp+10h] [ebp-44h]
    char v15[64]; // [esp+14h] [ebp-40h] BYREF
    int v16;      // [esp+5Ch] [ebp+8h]

    v3 = a2;
    v4 = (char *)(v15 - (char *)a2);
    v16 = 4;
    for (i = v4;; v4 = i) {
        v5 = a3;
        v6 = (float *)&v4[(_DWORD)v3];
        v7 = 4;
        do {
            *v6 = 0.0;
            v8 = v3;
            v9 = *v6;
            v10 = v5;
            v11 = 4;
            do {
                v12 = *v8 * *v10;
                v10 += 4;
                ++v8;
                --v11;
                v9 = v9 + v12;
            } while (v11);
            *v6++ = v9;
            ++v5;
            --v7;
        } while (v7);
        v3 += 4;
        result = --v16;
        if (!v16)
            break;
    }
    qmemcpy(a1, v15, 0x40u);
    return result;
}
