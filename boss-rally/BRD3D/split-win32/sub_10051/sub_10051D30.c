#include "../types-win32.h"
//----- (10051D30) --------------------------------------------------------
int __cdecl sub_10051D30(unkC8 *a1) {
    unsigned __int16 v1; // ax
    unk348 *v2;          // eax
    unk348 *v3;          // esi
    unk1E214 *v4;        // eax
    unk1E214 *v5;        // edi
    unk1E214 *v6;        // eax
    unk1E214 *v7;        // edi
    unk1E214Vtbl *v8;    // ebx
    LPCSTR v9;           // eax
    unk1E214 *v10;       // eax
    unk1E214 *v11;       // edi
    _WORD *v12;          // ecx
    _DWORD *v13;         // eax
    int v14;             // edx
    _WORD *v15;          // ecx
    _DWORD *v16;         // eax
    int v17;             // edx
    float v19;           // [esp+50h] [ebp-38h]
    float v20;           // [esp+54h] [ebp-34h]

    v1 = a1->field_10;
    HIWORD(a1->field_10) = 0;
    *(&a1->field_6C + v1) = 1;
    v2 = (unk348 *)malloc(0x348u);
    if (v2)
        v3 = meth_10048470(v2);
    else
        v3 = 0;
    a1->field_14[LOWORD(a1->field_10)] = v3;
    if (!v3)
        sub_1003E260(4);
    ++LOWORD(a1->field_10);
    v3->field_340 = a1;
    v3->field_10 = 0;
    v3->field_338 = 1128464384;
    v3->field_33C = 130.0;
    v4 = (unk1E214 *)malloc(0x1E214u);
    if (v4)
        v5 = meth_100476C0(v4);
    else
        v5 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->field_0->field_38(v5, a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v3->field_14);
    v6 = (unk1E214 *)malloc(0x1E214u);
    if (v6)
        v7 = meth_100476C0(v6);
    else
        v7 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v7;
    if (!v7)
        sub_1003E260(4);
    v8 = v7->field_0;
    v7->field_0->field_38(v7, a1, v3->field_338, 1092616192, 1048585, 2, 5, 1, -1);
    LOWORD(v7->field_1E20C) = 3;
    v9 = getCaptionString(0x43u);
    v8->field_34(v7, v9, 1, 1, &unk_100AB438);
    ++LOWORD(v3->field_14);
    v10 = (unk1E214 *)malloc(0x1E214u);
    if (v10)
        v11 = meth_100476C0(v10);
    else
        v11 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v11;
    if (!v11)
        sub_1003E260(4);
    v20 = v3->field_33C - 12.0;
    v19 = *(float *)&v3->field_338 - 8.0;
    v11->field_0->field_38(v11, a1, LODWORD(v19), LODWORD(v20), 139265, 2, 5, 0, 80);
    v11->last = (int)&unk_10A9DA50;
    *(_DWORD *)&v11->gap5C[10508] = 1;
    *(_DWORD *)&v11->gap5C[10512] = 1;
    v12 = &v11->gap5C[10724];
    v13 = &v11->gap5C[10524];
    v14 = 15;
    do {
        *v13 = 60;
        *v12 = 80;
        ++v13;
        ++v12;
        --v14;
    } while (v14);
    v15 = &v11->gap5C[10754];
    v16 = &v11->gap5C[10584];
    v17 = 9;
    do {
        *v16 = 60;
        *v15 = 81;
        ++v16;
        ++v15;
        --v17;
    } while (v17);
    v11->field_8 = (int(__cdecl *)())sub_100471B0;
    LOWORD(v11->field_1E20C) = 80;
    *(_DWORD *)v11->gap54 = (__int64)v3->field_33C;
    v11->field_50 = (__int64)*(float *)&v3->field_338;
    v11->field_58 = (__int64)*(float *)&v3->field_338 + 128;
    *(_DWORD *)v11->gap5C = (__int64)v3->field_33C + 128;
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    return 1;
}
// 100471B0: using guessed type int __cdecl sub_100471B0(int);
