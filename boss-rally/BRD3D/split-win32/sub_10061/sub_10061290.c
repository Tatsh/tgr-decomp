#include "../types-win32.h"
//----- (10061290) --------------------------------------------------------
int __cdecl sub_10061290(int a1, int a2, int a3, int a4) {
    int result; // eax
    int v5;     // edi
    int v6;     // esi
    int v7;     // ecx
    int v8;     // ebp
    int v9;     // ebx
    int v10;    // eax
    int v11;    // esi
    int v12;    // edx
    bool v13;   // zf
    int v14;    // [esp+4h] [ebp-10h]
    int v15;    // [esp+8h] [ebp-Ch]
    int v16;    // [esp+Ch] [ebp-8h]
    int v17;    // [esp+10h] [ebp-4h]
    int v18;    // [esp+18h] [ebp+4h]

    result = dword_10AA344C[a1];
    v16 = result;
    if (result) {
        v5 = a4;
        if (a4 > 0) {
            v6 = a3;
            result = 0;
            v17 = 4 * a3;
            v7 = a2;
            v14 = 0;
            v15 = a4;
            do {
                if (v6 > 0) {
                    v18 = v6;
                    v8 = (result / v5) << 6;
                    v9 = 0;
                    do {
                        v7 += 4;
                        v10 = v9 / v6;
                        v9 += 64;
                        v11 = *(unsigned __int8 *)(v16 + 4 * (v8 + v10));
                        *(_BYTE *)(v7 - 4) = -(char)(v11 * *(_BYTE *)(v7 - 4));
                        *(_BYTE *)(v7 - 3) = -(char)(*(_BYTE *)(v7 - 3) * v11);
                        v12 = (unsigned __int64)(2155905153i64 * *(unsigned __int8 *)(v7 - 2) *
                                                 v11) >>
                              32;
                        v6 = a3;
                        *(_BYTE *)(v7 - 2) = (v12 >> 7 < 0) + (v12 >> 7);
                        --v18;
                    } while (v18);
                    v5 = a4;
                }
                v7 = v17 + a2;
                result = v14 + 64;
                v13 = v15 == 1;
                a2 += v17;
                v14 += 64;
                --v15;
            } while (!v13);
        }
    }
    return result;
}
// 10AA344C: using guessed type int dword_10AA344C[];
