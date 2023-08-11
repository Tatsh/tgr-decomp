#include "types-win32.h"
//----- (10028E70) --------------------------------------------------------
unsigned __int8 *__cdecl sub_10028E70(int a1, _DWORD *a2) {
    _DWORD *v2;              // esi
    unsigned __int8 *v3;     // edi
    int v4;                  // ebx
    int v5;                  // ecx
    int v6;                  // eax
    int v7;                  // edx
    int v8;                  // ecx
    int v9;                  // eax
    unsigned __int8 *result; // eax
    int v11;                 // [esp+Ch] [ebp-Ch] BYREF
    int v12;                 // [esp+10h] [ebp-8h] BYREF
    int v13;                 // [esp+14h] [ebp-4h] BYREF

    v2 = (char *)dword_1057543C + 696 * a1 + 4;
    if (*((_DWORD *)dword_1057543C + 174 * a1 + 156)) {
        v3 = byte_11829870;
        v4 = sub_10060F70(*((_DWORD *)dword_1057543C + 174 * a1 + 157),
                          *((_DWORD *)dword_1057543C + 174 * a1 + 158),
                          *((_DWORD *)dword_1057543C + 174 * a1 + 159));
        if (!v4)
            goto LABEL_17;
        sub_10060FB0(v2[156], v2[157], &v13, &a1, &v12, &v11);
        v5 = v13;
        v6 = a1;
        if (!v13 && !a1 && !v12 && !v11) {
            v5 = 0;
            v6 = 2 * v2[169];
            v7 = 2 * v2[170];
            v13 = 0;
            a1 = v6;
            v12 = 0;
            v11 = v7;
        }
        if (sub_10061480(v4, v5, v6, v12, v11, (int)byte_11829870, 2 * v2[169], 2 * v2[170])) {
            v8 = v2[2];
            v9 = 2 * v2[169];
            if (v9 != v8 || 2 * v2[170] != v2[3]) {
                sub_10025350(
                    (int)&unk_104D51D0, v8, v2[3], COERCE_FLOAT(byte_11829870), v9, 2 * v2[170]);
                v3 = (unsigned __int8 *)&unk_104D51D0;
            }
            dword_105553F8 = v2[168];
            if (v2[15])
                dword_105553F8 = (int)sub_10009660(v3, v3, v2[16], v2[4], v2 + 15);
            else
                dword_105553F8 = (int)graphics_100098A0(v3, v3, v2[16], v2[4]);
            result = v3;
            *a2 = dword_105553F8;
        } else {
        LABEL_17:
            result = (unsigned __int8 *)a1;
            *a2 = dword_105553F8;
        }
    } else {
        result = sub_10028860((#506 *)((char *)dword_1057543C + 696 * a1 + 4));
        *a2 = dword_105553F8;
    }
    return result;
}
// 105553F8: using guessed type int dword_105553F8;
