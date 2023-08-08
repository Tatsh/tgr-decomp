#include "types-win32.h"
//----- (10056FF0) --------------------------------------------------------
int __cdecl sub_10056FF0(int a1) {
    unk348 *v1;        // eax
    unk348 *v2;        // esi
    unk1E214 *v3;      // eax
    unk1E214 *v4;      // edi
    unk1E214 *v5;      // eax
    unk1E214 *v6;      // edi
    unk1E214Vtbl *v7;  // ebx
    LPCSTR v8;         // eax
    unk1E214 *v9;      // eax
    unk1E214 *v10;     // edi
    int v11;           // edx
    unk1E214 *v12;     // eax
    unk1E214 *v13;     // edi
    unk1E214Vtbl *v14; // ebx
    LPCSTR v15;        // eax
    unk1E214 *v16;     // eax
    unk1E214 *v17;     // edi
    int v18;           // eax
    unk1E214Vtbl *v19; // ebx
    BOOL v20;          // eax
    LPCSTR v21;        // eax
    unk1E214 *v22;     // eax
    unk1E214 *v23;     // edi
    unk1E214Vtbl *v24; // ebx
    LPCSTR v25;        // eax
    unk1E214 *v26;     // eax
    unk1E214 *v27;     // edi
    unk1E214Vtbl *v28; // ebx
    LPCSTR v29;        // eax
    unk1E214 *v30;     // eax
    unk1E214 *v31;     // edi
    float v33;         // [esp+13Ch] [ebp-34h]
    float v34;         // [esp+13Ch] [ebp-34h]
    float v35;         // [esp+13Ch] [ebp-34h]
    float v36;         // [esp+13Ch] [ebp-34h]
    BOOL v37;          // [esp+14Ch] [ebp-24h]

    *(_WORD *)(a1 + 18) = 0;
    sub_100586A0();
    dword_10AA2898 = 1;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 108) = 1;
    v1 = (unk348 *)malloc(0x348u);
    if (v1)
        v2 = meth_10048470(v1);
    else
        v2 = 0;
    *(_DWORD *)(a1 + 4 * *(unsigned __int16 *)(a1 + 16) + 20) = v2;
    if (!v2)
        sub_1003E260(4);
    ++*(_WORD *)(a1 + 16);
    v2->field_340 = (unkC8 *)a1;
    v2->field_10 = 0;
    v2->field_338 = 1128464384;
    v2->field_33C = 130.0;
    v3 = (unk1E214 *)malloc(0x1E214u);
    if (v3)
        v4 = meth_100476C0(v3);
    else
        v4 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v4;
    if (!v4)
        sub_1003E260(4);
    v4->field_0->field_38(v4, (unkC8 *)a1, 0, 0, 9, 2, 5, 0, 0);
    ++LOWORD(v2->field_14);
    v5 = (unk1E214 *)malloc(0x1E214u);
    if (v5)
        v6 = meth_100476C0(v5);
    else
        v6 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v6;
    if (!v6)
        sub_1003E260(4);
    v7 = v6->field_0;
    v6->field_0->field_38(v6, (unkC8 *)a1, v2->field_338, 1092616192, 1048585, 2, 5, 1, -1);
    LOWORD(v6->field_1E20C) = 3;
    v8 = getCaptionString(0x5Fu);
    v7->field_34(v6, v8, 1, 1, &unk_100AB508);
    ++LOWORD(v2->field_14);
    v9 = (unk1E214 *)malloc(0x1E214u);
    if (v9)
        v10 = meth_100476C0(v9);
    else
        v10 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v10;
    if (!v10)
        sub_1003E260(4);
    v10->field_0->field_38(
        v10, (unkC8 *)a1, v2->field_338, LODWORD(v2->field_33C), 12289, 2, 5, 1, -1);
    v11 = v10->field_3838;
    v10->field_4 = sub_1003EB90;
    v10->field_1E1F4 = 1;
    (*(void(__thiscall **)(int *, int, void *, int, _DWORD, int))(v11 + 20))(
        &v10->field_3838, 262145, &unk_100AB4E8, 3, 0, -1);
    dword_10AA29D4 = (int)v10;
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    if (dword_10AA287C == 2) {
        v12 = (unk1E214 *)malloc(0x1E214u);
        if (v12)
            v13 = meth_100476C0(v12);
        else
            v13 = 0;
        v2->field_18[LOWORD(v2->field_14)] = v13;
        if (!v13)
            sub_1003E260(4);
        v14 = v13->field_0;
        v33 = v2->field_33C - -57.0;
        v13->field_0->field_38(v13, (unkC8 *)a1, v2->field_338, LODWORD(v33), 1056769, 2, 5, 1, -1);
        v13->field_C = sub_10047360;
        v13->field_8 = sub_10043DA0;
        LOWORD(v13->field_1E20C) = 3;
        v15 = getCaptionString(0x5Eu);
        v14->field_34(v13, v15, 1, 1, &dword_100AB448);
        ++LOWORD(v2->field_14);
        ++LOWORD(v2->last);
    }
    v16 = (unk1E214 *)malloc(0x1E214u);
    if (v16)
        v17 = meth_100476C0(v16);
    else
        v17 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v17;
    if (!v17)
        sub_1003E260(4);
    if (dword_10AA287C == 2 || (v18 = 1056785, dword_10AA287C == 3))
        v18 = 1056769;
    v19 = v17->field_0;
    v34 = v2->field_33C - -76.0;
    v17->field_0->field_38(v17, (unkC8 *)a1, v2->field_338, LODWORD(v34), v18, 2, 5, 1, -1);
    v17->field_C = sub_10047360;
    v17->field_8 = sub_10044280;
    LOWORD(v17->field_1E20C) = 2;
    v20 = dword_10AA287C == 2 || dword_10AA287C == 3;
    v37 = v20;
    v21 = getCaptionString(0x60u);
    v19->field_34(v17, v21, 1, v37, &dword_100AB448);
    dword_10AA29D8 = (int)v17;
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v22 = (unk1E214 *)malloc(0x1E214u);
    if (v22)
        v23 = meth_100476C0(v22);
    else
        v23 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v23;
    if (!v23)
        sub_1003E260(4);
    v24 = v23->field_0;
    v35 = v2->field_33C - -95.0;
    v23->field_0->field_38(v23, (unkC8 *)a1, v2->field_338, LODWORD(v35), 1056769, 2, 5, 1, -1);
    v23->field_C = sub_10047360;
    v23->field_8 = sub_100440D0;
    LOWORD(v23->field_1E20C) = 3;
    v25 = getCaptionString(0x61u);
    v24->field_34(v23, v25, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v26 = (unk1E214 *)malloc(0x1E214u);
    if (v26)
        v27 = meth_100476C0(v26);
    else
        v27 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v27;
    if (!v27)
        sub_1003E260(4);
    v28 = v27->field_0;
    v36 = v2->field_33C - -114.0;
    v27->field_0->field_38(v27, (unkC8 *)a1, v2->field_338, LODWORD(v36), 1056769, 2, 5, 1, -1);
    v27->field_C = sub_10047360;
    v27->field_8 = (int(__cdecl *)())sub_10044AE0;
    LOWORD(v27->field_1E20C) = 3;
    v29 = getCaptionString(0xCu);
    v28->field_34(v27, v29, 1, 1, &dword_100AB448);
    ++LOWORD(v2->field_14);
    ++LOWORD(v2->last);
    v30 = (unk1E214 *)malloc(0x1E214u);
    if (v30)
        v31 = meth_100476C0(v30);
    else
        v31 = 0;
    v2->field_18[LOWORD(v2->field_14)] = v31;
    if (!v31)
        sub_1003E260(4);
    v31->field_0->field_38(v31, (unkC8 *)a1, 1117782016, 1110966272, 9, 2, 5, 0, 7);
    ++LOWORD(v2->field_14);
    return 1;
}
// 10056FF0: using guessed type int __cdecl sub_10056FF0(int);
// 100AB448: using guessed type int dword_100AB448;
// 10AA287C: using guessed type int dword_10AA287C;
// 10AA2898: using guessed type int dword_10AA2898;
// 10AA29D4: using guessed type int dword_10AA29D4;
// 10AA29D8: using guessed type int dword_10AA29D8;
