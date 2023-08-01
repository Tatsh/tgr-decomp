//----- (100382A0) --------------------------------------------------------
unsigned __int16 __cdecl sub_100382A0(char *a1) {
    char v1;                 // cl
    char v2;                 // dl
    char v3;                 // al
    char v4;                 // cl
    char v5;                 // dl
    char v6;                 // cl
    char v7;                 // cl
    char v8;                 // dl
    char v9;                 // cl
    char v10;                // cl
    char v11;                // dl
    char v12;                // cl
    __int16 v13;             // ax
    __int16 v14;             // cx
    int v15;                 // edi
    char *v16;               // ebx
    unsigned __int16 result; // ax

    v1 = *a1;
    v2 = a1[1];
    *a1 = a1[3];
    v3 = a1[2];
    a1[3] = v1;
    a1[2] = v2;
    a1[1] = v3;
    sub_1002B970((int *)a1);
    v4 = a1[7];
    a1[7] = a1[4];
    v5 = a1[5];
    a1[4] = v4;
    v6 = a1[6];
    a1[6] = v5;
    a1[5] = v6;
    sub_1002B970((int *)a1 + 1);
    v7 = a1[11];
    a1[11] = a1[8];
    v8 = a1[9];
    a1[8] = v7;
    v9 = a1[10];
    a1[10] = v8;
    a1[9] = v9;
    sub_1002B970((int *)a1 + 2);
    v10 = a1[15];
    a1[15] = a1[12];
    v11 = a1[13];
    a1[12] = v10;
    v12 = a1[14];
    a1[14] = v11;
    a1[13] = v12;
    sub_1002B970((int *)a1 + 3);
    LOBYTE(v13) = a1[21];
    LOBYTE(v14) = a1[23];
    HIBYTE(v13) = a1[20];
    HIBYTE(v14) = a1[22];
    *((_WORD *)a1 + 10) = v13;
    *((_WORD *)a1 + 11) = v14;
    sub_10038380(a1 + 24);
    v15 = 0;
    v16 = a1 + 64;
    do {
        sub_10038380(v16);
        result = *((_WORD *)a1 + 10);
        ++v15;
        v16 += 40;
    } while (v15 <= result);
    return result;
}
