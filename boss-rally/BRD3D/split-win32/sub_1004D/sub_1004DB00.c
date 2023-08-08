#include "../types-win32.h"
//----- (1004DB00) --------------------------------------------------------
int __cdecl sub_1004DB00(unkC8 *a1) {
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
    unk1E214 *v14;       // eax
    unk1E214 *v15;       // edi
    int v16;             // edx
    unk1E214 *v17;       // eax
    unk1E214 *v18;       // edi
    unk1E214Vtbl *v19;   // ebx
    LPCSTR v20;          // eax
    unk1E214 *v21;       // eax
    unk1E214 *v22;       // edi
    unk1E214Vtbl *v23;   // ebx
    LPCSTR v24;          // eax
    float v26;           // [esp+FCh] [ebp-34h]
    float v27;           // [esp+FCh] [ebp-34h]

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
    v9 = getCaptionString(0x2Au);
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
    v13->field_0->field_38(v13, a1, 1119879168, 1114898432, 9, 2, 5, 0, 142);
    ++LOWORD(v3->field_14);
    v14 = (unk1E214 *)malloc(0x1E214u);
    if (v14)
        v15 = meth_100476C0(v14);
    else
        v15 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v15;
    if (!v15)
        sub_1003E260(4);
    v15->field_0->field_38(v15, a1, v3->field_338, LODWORD(v3->field_33C), 12289, 2, 5, 1, -1);
    v16 = v15->field_3838;
    v15->field_4 = sub_1003EDF0;
    v15->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v16 + 20))(
        &v15->field_3838, 262145, &unk_100AB528, 7, 0, -1);
    dword_10AA29EC = (int)v15;
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v17 = (unk1E214 *)malloc(0x1E214u);
    if (v17)
        v18 = meth_100476C0(v17);
    else
        v18 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v18;
    if (!v18)
        sub_1003E260(4);
    v19 = v18->field_0;
    v26 = v3->field_33C - -95.0;
    v18->field_0->field_38(v18, a1, v3->field_338, LODWORD(v26), 1056769, 2, 5, 1, -1);
    v18->field_C = sub_10047360;
    v18->field_8 = (int(__cdecl *)())sub_1003ED40;
    LOWORD(v18->field_1E20C) = 3;
    v20 = getCaptionString(0x2Du);
    v19->field_34(v18, v20, 1, 1, &dword_100AB448);
    dword_10AA29C8 = (int)v18;
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    v21 = (unk1E214 *)malloc(0x1E214u);
    if (v21)
        v22 = meth_100476C0(v21);
    else
        v22 = 0;
    v3->field_18[LOWORD(v3->field_14)] = v22;
    if (!v22)
        sub_1003E260(4);
    v23 = v22->field_0;
    v27 = v3->field_33C - -114.0;
    v22->field_0->field_38(v22, a1, v3->field_338, LODWORD(v27), 1056769, 2, 5, 1, -1);
    v22->field_C = sub_10047360;
    v22->field_8 = (int(__cdecl *)())sub_10046670;
    LOWORD(v22->field_1E20C) = 3;
    v24 = getCaptionString(0xCu);
    v23->field_34(v22, v24, 1, 1, &dword_100AB448);
    dword_10AA29C8 = (int)v22;
    ++LOWORD(v3->field_14);
    ++LOWORD(v3->last);
    return 1;
}
// 100AB448: using guessed type int dword_100AB448;
// 10AA29C8: using guessed type int dword_10AA29C8;
// 10AA29EC: using guessed type int dword_10AA29EC;
