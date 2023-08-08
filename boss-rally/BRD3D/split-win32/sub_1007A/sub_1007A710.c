#include "../types-win32.h"
//----- (1007A710) --------------------------------------------------------
int __cdecl sub_1007A710(const void *a1, const void *a2) {
    unk1 *v2;        // esi
    int v3;          // edi
    unsigned int v5; // [esp+8h] [ebp-18h] BYREF
    unsigned int v6; // [esp+Ch] [ebp-14h] BYREF
    unsigned int v7; // [esp+10h] [ebp-10h] BYREF
    unsigned int v8; // [esp+14h] [ebp-Ch] BYREF
    char v9[4];      // [esp+18h] [ebp-8h] BYREF
    char v10[4];     // [esp+1Ch] [ebp-4h] BYREF

    v2 = *(unk1 **)a2;
    v3 = 0;
    if (*(_DWORD *)a1) {
        if (!v2)
            return -1;
    } else if (!v2) {
        return 0;
    }
    meth_1001AC80(*(unk1 **)a1, &v5, &v7, &a1, v9);
    meth_1001AC80(v2, &v6, &v8, &a2, v10);
    if (a1 < a2)
        return -1;
    if (a1 > a2)
        return 1;
    if (v5 < v6)
        return -1;
    if (v5 > v6)
        return 1;
    if (v7 < v8)
        return -1;
    if (v7 > v8)
        return 1;
    return v3;
}
// 1007A735: conditional instruction was optimized away because of 'ecx.4==0'
