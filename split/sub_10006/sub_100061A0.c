//----- (100061A0) --------------------------------------------------------
int __cdecl sub_100061A0(int a1, float *a2) {
    __int16 v2;          // ax
    __int16 v3;          // ax
    __int16 v4;          // ax
    __int16 v5;          // ax
    unsigned int v6;     // eax
    unsigned int v7;     // eax
    __int16 v8;          // ax
    __int16 v9;          // ax
    __int16 v10;         // ax
    char v11;            // al
    char v12;            // al
    char v13;            // al
    char v14;            // al
    char v15;            // al
    unsigned __int8 v16; // al
    int v17;             // eax
    unsigned __int8 v18; // al
    unsigned __int8 v19; // al
    unsigned __int8 v20; // al
    int result;          // eax

    v2 = sub_100065E0(*a2);
    sub_10073E70((_DWORD *)a1, v2 >> 8, 8);
    v3 = sub_100065E0(a2[1]);
    sub_10073E70((_DWORD *)a1, v3 >> 8, 8);
    v4 = sub_100065E0(a2[2]);
    sub_10073E70((_DWORD *)a1, v4 >> 8, 8);
    v5 = sub_100065E0(a2[3]);
    sub_10073E70((_DWORD *)a1, v5 >> 8, 8);
    v6 = sub_100066E0(a2[4]);
    sub_10073E70((_DWORD *)a1, v6 >> 7, 17);
    v7 = sub_100066E0(a2[5]);
    sub_10073E70((_DWORD *)a1, v7 >> 7, 17);
    v8 = sub_10006770(a2[6]);
    sub_10073E70((_DWORD *)a1, v8 >> 1, 15);
    v9 = sub_100067B0(a2[7]);
    sub_10073E70((_DWORD *)a1, v9, 16);
    v10 = sub_100067B0(a2[8]);
    sub_10073E70((_DWORD *)a1, v10, 16);
    v11 = sub_100067F0(a2[10]);
    sub_10073E70((_DWORD *)a1, v11 >> 3, 5);
    v12 = sub_100067F0(a2[11]);
    sub_10073E70((_DWORD *)a1, v12 >> 3, 5);
    v13 = sub_100067F0(a2[12]);
    sub_10073E70((_DWORD *)a1, v13 >> 3, 5);
    v14 = sub_100067F0(a2[13]);
    sub_10073E70((_DWORD *)a1, v14 >> 4, 4);
    v15 = sub_100065A0(a2[14]);
    sub_10073E70((_DWORD *)a1, v15 >> 2, 4);
    v16 = sub_10006620(a2[15]);
    sub_10073E70((_DWORD *)a1, v16 >> 4, 4);
    sub_10073E70((_DWORD *)a1, a2[19] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[20] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[21] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[22] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[27] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[28] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[29] != 0.0, 1);
    v17 = sub_10006730(a2[30]);
    sub_10073E70((_DWORD *)a1, v17, 24);
    v18 = sub_10006660(a2[31]);
    sub_10073E70((_DWORD *)a1, v18, 6);
    v19 = sub_100066A0(a2[32]);
    sub_10073E70((_DWORD *)a1, v19, 2);
    v20 = sub_100066A0(a2[33]);
    sub_10073E70((_DWORD *)a1, v20, 2);
    sub_10073E70((_DWORD *)a1, a2[34] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[35] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[36] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[37] != 0.0, 1);
    sub_10073E70((_DWORD *)a1, a2[38] != 0.0, 1);
    if (a2[39] == 0.0)
        result = sub_10073E70((_DWORD *)a1, 0, 1);
    else
        result = sub_10073E70((_DWORD *)a1, 1, 1);
    return result;
}
