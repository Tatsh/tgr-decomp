#include "../types-win32.h"
//----- (1004F2B0) --------------------------------------------------------
int __cdecl sub_1004F2B0(unkC8 *a1) {
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
    unk1E214Vtbl *v12;   // ebx
    LPCSTR v13;          // eax
    unk1E214 *v14;       // eax
    unk1E214 *v15;       // edi
    unk1E214Vtbl *v16;   // ebx
    LPCSTR v17;          // eax
    unk1E214 *v18;       // eax
    unk1E214 *v19;       // edi
    unk1E214Vtbl *v20;   // ebx
    LPCSTR v21;          // eax
    unk1E214 *v22;       // eax
    unk1E214 *v23;       // edi
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
    v3->field_338 = 0x43430000;
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
    v9 = getCaptionString(9u);
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
    v12 = v11->field_0;
    v11->field_0->field_38(v11, a1, v3->field_338, LODWORD(v3->field_33C), 1056769, 2, 5, 1, -1);
    v11->field_C = sub_10047360;
    v11->field_8 = sub_10045AF0;
    LOWORD(v11->field_1E20C) = 3;
    v13 = getCaptionString(0xAu);
    v12->field_34(v11, v13, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_100476C0(v14);
    else
        v15 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v15;
    if (!v15)
        sub_1003E260(4);
    v16 = v15->field_0;
    v25 = v3->field_33C - -19.0;
    v15->field_0->field_38(v15, a1, v3->field_338, LODWORD(v25), 1056769, 2, 5, 1, -1);
    v15->field_C = sub_10047360;
    v15->field_8 = sub_10045AA0;
    LOWORD(v15->field_1E20C) = 3;
    v17 = getCaptionString(0xBu);
    v16->field_34(v15, v17, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v18 = (unk1E214 *)malloc(0x1E214u);
    if (v18)
        v19 = meth_100476C0(v18);
    else
        v19 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v19;
    if (!v19)
        sub_1003E260(4);
    v20 = v19->field_0;
    v26 = v3->field_33C - -114.0;
    v19->field_0->field_38(v19, a1, v3->field_338, LODWORD(v26), 1056769, 2, 5, 1, -1);
    v19->field_C = sub_10047360;
    v19->field_8 = (int(__cdecl *)())sub_10046C90;
    LOWORD(v19->field_1E20C) = 3;
    v21 = getCaptionString(0xCu);
    v20->field_34(v19, v21, 1, 1, &dword_100AB448);
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_100476C0(v22);
    else
        v23 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v23;
    if (!v23)
        sub_1003E260(4);
    v23->field_0->field_38(v23, a1, 1117782016, 1110966272, 9, 2, 5, 0, 6);
    ++LOWORD(v3->field_14);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
