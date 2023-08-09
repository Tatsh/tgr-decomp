#include "types-win32.h"
//----- (10051990) --------------------------------------------------------
int __cdecl sub_10051990(unk000C8 *a1) {
    unsigned __int16 v1; // ax
    unk00348 *v2;        // eax
    unk00348 *v3;        // esi
    unk1E214 *v4;        // eax
    unk1E214 *v5;        // edi
    unk1E214 *v6;        // eax
    unk1E214 *v7;        // edi
    unk1E214 *v8;        // eax
    unk1E214 *v9;        // edi
    unk1E214 *v10;       // eax
    unk1E214 *v11;       // edi
    unk1E214 *v12;       // eax
    unk1E214 *v13;       // edi
    unk1E214 *v14;       // eax
    unk1E214 *v15;       // edi
    unk1E214Vtbl *v16;   // ebx
    LPCSTR v17;          // eax

    v1 = a1->field_10;
    HIWORD(a1->field_10) = 0;
    *(&a1->field_6C + v1) = 1;
    v2 = (unk00348 *)malloc(0x348u);
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
    v3->mask_338 = 1128464384;
    v3->field_33C = 130.0;
    v4 = (unk1E214 *)malloc(0x1E214u);
    if (v4)
        v5 = meth_unk1E214_init(v4);
    else
        v5 = 0;
    v3->field_18[v3->field_14] = v5;
    if (!v5)
        sub_1003E260(4);
    v5->lpVtbl->field_38(v5, a1, 0, 0.0, 9, 2, 5, 0, 0);
    ++v3->field_14;
    v6 = (unk1E214 *)malloc(0x1E214u);
    if (v6)
        v7 = meth_unk1E214_init(v6);
    else
        v7 = 0;
    v3->field_18[v3->field_14] = v7;
    if (!v7)
        sub_1003E260(4);
    v7->lpVtbl->field_38(v7, a1, 0, 29.0, 9, 2, 5, 0, 78);
    ++v3->field_14;
    v8 = (unk1E214 *)malloc(0x1E214u);
    if (v8)
        v9 = meth_unk1E214_init(v8);
    else
        v9 = 0;
    v3->field_18[v3->field_14] = v9;
    if (!v9)
        sub_1003E260(4);
    v9->lpVtbl->field_38(v9, a1, 1095761920, 7.0, 9, 2, 5, 0, 79);
    ++v3->field_14;
    v10 = (unk1E214 *)malloc(0x1E214u);
    if (v10)
        v11 = meth_unk1E214_init(v10);
    else
        v11 = 0;
    v3->field_18[v3->field_14] = v11;
    if (!v11)
        sub_1003E260(4);
    v11->lpVtbl->field_38(v11, a1, 1098907648, 153.0, 9, 2, 5, 1, 71);
    v11->field_4 = sub_1003F440;
    ++v3->field_14;
    v12 = (unk1E214 *)malloc(0x1E214u);
    if (v12)
        v13 = meth_unk1E214_init(v12);
    else
        v13 = 0;
    v3->field_18[v3->field_14] = v13;
    if (!v13)
        sub_1003E260(4);
    v13->lpVtbl->field_38(v13, a1, 1136918528, 181.0, 9, 2, 5, 1, 72);
    v13->field_4 = sub_1003F540;
    ++v3->field_14;
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_unk1E214_init(v14);
    else
        v15 = 0;
    v3->field_18[v3->field_14] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = v15->lpVtbl;
    v15->lpVtbl->field_38(v15, a1, v3->mask_338, 460.0, 1056769, 2, 5, 0, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = (int(__cdecl *)())sub_10047120;
    v15->field_4 = sub_100471F0;
    v15->field_3838.field_1A99C[28] = 2;
    v17 = GetStringWithIndex(0x42u);
    v16->field_34(v15, v17, 1, 0, &unk_100AB438);
    ++v3->field_14;
    ++LOWORD(v3->last);
    return 1;
}
// 1003F440: using guessed type int __cdecl sub_1003F440(int);
// 1003F540: using guessed type int __cdecl sub_1003F540(int);
// 10047120: using guessed type int __cdecl sub_10047120(int);
// 100471F0: using guessed type int __cdecl sub_100471F0(int);
