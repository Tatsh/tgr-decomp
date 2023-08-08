#include "../types-win32.h"
//----- (1004D1F0) --------------------------------------------------------
int __cdecl sub_1004D1F0(unkC8 *a1) {
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
    unk1E214 *v12;       // eax
    unk1E214 *v13;       // edi
    unk1E214Vtbl *v14;   // ebx
    LPCSTR v15;          // eax
    unk1E214 *v16;       // eax
    unk1E214 *v17;       // edi
    unk1E214Vtbl *v18;   // ebx
    LPCSTR v19;          // eax
    unk1E214 *v20;       // eax
    unk1E214 *v21;       // edi
    unk1E214Vtbl *v22;   // ebx
    LPCSTR v23;          // eax
    float v25;           // [esp+D8h] [ebp-34h]
    float v26;           // [esp+D8h] [ebp-34h]

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
    v9 = getCaptionString(0x20u);
    v8->field_34(v7, v9, 1, 1, &unk_100AB508);
    ++LOWORD(v3->field_14);
    v10 = (unk1E214 *)malloc(0x1E214u);
    if (v10)
        v11 = meth_100476C0(v10);
    else
        v11 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v11;
    if (!v11)
        sub_1003E260(4);
    v11->field_0->field_38(v11, a1, 1117782016, 1110966272, 9, 2, 5, 0, 9);
    ++LOWORD(v3->field_14);
    v12 = (unk1E214 *)malloc(0x1E214u);
    if (v12)
        v13 = meth_100476C0(v12);
    else
        v13 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v13;
    if (!v13)
        sub_1003E260(4);
    v14 = v13->field_0;
    v13->field_0->field_38(v13, a1, v3->field_338, LODWORD(v3->field_33C), 1056769, 2, 5, 1, -1);
    v13->field_C = sub_10047360;
    v13->field_8 = sub_10045460;
    LOWORD(v13->field_1E20C) = 3;
    v15 = getCaptionString(0x29u);
    v14->field_34(v13, v15, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v16 = (unk1E214 *)malloc(0x1E214u);
    if (v16)
        v17 = meth_100476C0(v16);
    else
        v17 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v17;
    if (!v17)
        sub_1003E260(4);
    v18 = v17->field_0;
    v25 = v3->field_33C - -19.0;
    v17->field_0->field_38(v17, a1, v3->field_338, LODWORD(v25), 1056769, 2, 5, 1, -1);
    v17->field_C = sub_10047360;
    v17->field_8 = sub_10045520;
    LOWORD(v17->field_1E20C) = 3;
    v19 = getCaptionString(0x2Au);
    v18->field_34(v17, v19, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v20 = (unk1E214 *)malloc(0x1E214u);
    if (v20)
        v21 = meth_100476C0(v20);
    else
        v21 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v21;
    if (!v21)
        sub_1003E260(4);
    v22 = v21->field_0;
    v26 = v3->field_33C - -114.0;
    v21->field_0->field_38(v21, a1, v3->field_338, LODWORD(v26), 1056769, 2, 5, 1, -1);
    v21->field_C = sub_10047360;
    v21->field_8 = (int(__cdecl *)())sub_100465E0;
    LOWORD(v21->field_1E20C) = 3;
    v23 = getCaptionString(0xCu);
    v22->field_34(v21, v23, 1, 1, &dword_100AB448);
    dword_10AA29C8 = (int)v21;
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
